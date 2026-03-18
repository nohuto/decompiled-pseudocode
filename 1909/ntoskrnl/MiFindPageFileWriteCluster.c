/*
 * XREFs of MiFindPageFileWriteCluster @ 0x14014DD60
 * Callers:
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiFindFreePageFileSpace @ 0x1400DC1D4 (MiFindFreePageFileSpace.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14014D374 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14014D404 (MiRefPageFileSpaceBitmaps.c)
 *     MiSetPageFileAllocationBits @ 0x14014DB20 (MiSetPageFileAllocationBits.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlFindLongestRunClearCapped @ 0x14030C7D0 (RtlFindLongestRunClearCapped.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiFindPageFileWriteCluster(__int64 a1, unsigned int *a2, _DWORD *a3, int a4)
{
  ULONG v4; // r14d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  int FreePageFileSpace; // esi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  _DWORD *result; // rax
  int v15; // r15d
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  _BYTE *v18; // r13
  __int64 *v19; // rcx
  ULONG *v20; // rax
  ULONG LongestRunClearCapped; // eax
  _DWORD *v22; // rax
  __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]
  _BYTE v25[56]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+B0h] [rbp+48h] BYREF
  _DWORD *v27; // [rsp+B8h] [rbp+50h]
  _DWORD *v28; // [rsp+C0h] [rbp+58h]
  ULONG v29; // [rsp+C8h] [rbp+60h] BYREF

  v28 = a3;
  v27 = a2;
  v4 = *a3;
  memset(v25, 0, 0x28uLL);
  v8 = (unsigned __int64)*a2 << 32;
  v23 = 0LL;
  v24 = 0LL;
  v9 = MiSwizzleInvalidPte(v8);
  v10 = *(_QWORD *)(a1 + 256);
  v26 = ((unsigned __int64)(*(_WORD *)(a1 + 204) & 0xF) << 12) | v9 & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v10, &v26, v4, a4 != 0 ? 38 : 32);
  if ( FreePageFileSpace )
  {
    v12 = v26;
    if ( qword_140465800 && (v26 & 0x10) == 0 )
      v12 = v26 & ~qword_140465800;
    v13 = HIDWORD(v12);
  }
  else
  {
    if ( a4 )
    {
      v19 = &v23;
      v18 = *(_BYTE **)(a1 + 112);
      v15 = 0;
      LODWORD(v23) = *(_DWORD *)a1;
      v24 = *((_QWORD *)v18 + 2);
      v20 = a2;
    }
    else
    {
      v15 = *(_DWORD *)(a1 + 128);
      v16 = *(_DWORD *)(a1 + 124);
      if ( v16 < dword_14057119C && *(_DWORD *)(a1 + 132) != v15 )
      {
        if ( v16 >= (unsigned int)dword_14057119C >> 3 )
        {
          v17 = v16 + (v16 >> 1);
          v16 = dword_14057119C;
          if ( v17 < dword_14057119C )
            v16 = v17;
        }
        else
        {
          v16 *= 2;
        }
        *(_DWORD *)(a1 + 124) = v16;
      }
      v18 = v25;
      MiRefPageFileSpaceBitmaps((KSPIN_LOCK *)a1, (__int64)v25);
      v19 = (__int64 *)&v25[8];
      v20 = (ULONG *)(a1 + 120);
      if ( v4 >= v16 )
        v4 = v16;
    }
    v29 = *v20;
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v19, v4, &v29);
    LODWORD(v13) = v29;
    FreePageFileSpace = LongestRunClearCapped;
    if ( a4 )
    {
      MiSetPageFileAllocationBits(a1, v29, LongestRunClearCapped);
    }
    else
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v4 )
        {
          *(_DWORD *)(a1 + 124) = LongestRunClearCapped;
          *(_DWORD *)(a1 + 132) = v15;
        }
        *(_DWORD *)(a1 + 120) = v13 + LongestRunClearCapped;
      }
      v22 = MiDerefPageFileSpaceBitmaps(a1, (_DWORD **)v18, 0);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
    }
  }
  *v28 = FreePageFileSpace;
  result = v27;
  *v27 = v13;
  return result;
}
