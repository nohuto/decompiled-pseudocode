/*
 * XREFs of HvCheckHive @ 0x1406323F0
 * Callers:
 *     CmCheckRegistry @ 0x140641AD8 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x14027F4C0 (SetFailureLocation.c)
 *     HvCheckBin @ 0x1405D53E0 (HvCheckBin.c)
 *     HvMoveLayoutStats @ 0x1405D5628 (HvMoveLayoutStats.c)
 *     HvAddToLayoutStats @ 0x1405D5644 (HvAddToLayoutStats.c)
 *     HvpGetCellMap @ 0x1405D5C00 (HvpGetCellMap.c)
 *     HvpMapEntryGetFreeBin @ 0x140632928 (HvpMapEntryGetFreeBin.c)
 */

__int64 __fastcall HvCheckHive(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int *v6; // r12
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r13
  unsigned int v10; // r14d
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 CellMap; // rcx
  __int64 FreeBin; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  _RTL_BITMAP *BitMapHeader; // r10
  _DWORD *v18; // rbp
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // esi
  int v23; // edx
  _DWORD *v24; // rcx
  int v26; // [rsp+88h] [rbp+10h] BYREF
  __int64 v27; // [rsp+98h] [rbp+20h]

  v27 = a4;
  v26 = 0;
  v6 = (unsigned int *)(a1 + 272);
  v7 = a6;
  v8 = 0;
  v9 = a5;
  v10 = 0;
  v11 = a1;
  while ( 2 )
  {
    v12 = *v6;
    while ( v8 < v12 )
    {
      CellMap = HvpGetCellMap(v11, v8);
      if ( !CellMap )
      {
        v21 = -1073741492;
        if ( v7 )
        {
          SetFailureLocation(v7, 0, 16, -1073741492, 0);
          *(_DWORD *)(v7 + 296) = v10;
          *(_DWORD *)(v7 + 300) = v8;
        }
        return v21;
      }
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( FreeBin )
      {
        v23 = *(_DWORD *)(FreeBin + 16);
        v8 += v23;
        if ( v9 )
        {
          HvAddToLayoutStats(v9, v23);
          HvMoveLayoutStats(v24);
        }
      }
      else
      {
        v18 = (_DWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
        v19 = (unsigned int)v18[2];
        if ( (unsigned int)v19 > v12 - v8
          || (unsigned int)v19 < 0x20
          || (v19 & 0xFFF) != 0
          || *v18 != 1852400232
          || v18[1] != v8 )
        {
          v21 = -1073741492;
          if ( !v7 )
            return v21;
          SetFailureLocation(v7, 0, 16, -1073741492, 32);
          goto LABEL_23;
        }
        v20 = HvCheckBin(v19, v18, v16, &v26, BitMapHeader, v9, v7);
        v21 = v20;
        if ( v20 < 0 )
        {
          if ( !v7 )
            return v21;
          SetFailureLocation(v7, 0, 16, v20, 48);
LABEL_23:
          *(_DWORD *)(v7 + 296) = v10;
          *(_DWORD *)(v7 + 300) = v8;
          *(_QWORD *)(v7 + 304) = v18;
          return v21;
        }
        v8 += v18[2];
      }
      v11 = a1;
    }
    ++v10;
    v6 += 158;
    v8 = 0x80000000;
    if ( v10 <= 1 )
      continue;
    return 0;
  }
}
