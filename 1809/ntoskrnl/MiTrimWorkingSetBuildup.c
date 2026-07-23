/*
 * XREFs of MiTrimWorkingSetBuildup @ 0x14011C788
 * Callers:
 *     MiTrimPte @ 0x140087BC0 (MiTrimPte.c)
 *     MiTrimWorkingSetTail @ 0x14011C720 (MiTrimWorkingSetTail.c)
 *     MiTrimPteWorker @ 0x1402B3F24 (MiTrimPteWorker.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 */

void __fastcall MiTrimWorkingSetBuildup(__int64 a1, __int64 a2)
{
  int i; // ebp
  __int64 v4; // rcx
  __int64 v5; // r15
  _BYTE *v6; // r13
  unsigned int v7; // r9d
  unsigned __int64 v8; // r12
  __int64 v9; // r12
  int v10; // r14d
  char *v11; // r15
  unsigned int v12; // r10d
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  char *v16; // rdx
  __int64 j; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // ebx
  int NextForwardRunClearCapped; // eax
  unsigned int v22; // edi
  int v23; // r14d
  unsigned int v24; // edi
  unsigned int SizeOfBitMap; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+88h] [rbp+10h] BYREF
  int v28; // [rsp+90h] [rbp+18h]
  __int64 v29; // [rsp+98h] [rbp+20h]

  v29 = *(_QWORD *)(a1 + 24);
  for ( i = 0; i != 2; ++i )
  {
    v4 = 80LL * i;
    v5 = v4 + a2 + 248;
    v6 = (_BYTE *)(v5 + 72);
    if ( *(_BYTE *)(v5 + 72) )
    {
      v7 = 0;
      v8 = (*(_QWORD *)(v5 + 64) & 0xFFFFFFFFFFFFF000uLL) << 16;
      BitMapHeader.Buffer = (unsigned int *)(v4 + a2 + 248);
      BitMapHeader.SizeOfBitMap = 512;
      v9 = (__int64)(v8 & 0xFFFFFFE000000000uLL) >> 16;
      v10 = (((_BYTE)v4 + (_BYTE)a2 - 8) & 4) != 0LL ? 0x20 : 0;
      v28 = v10;
      v11 = (char *)BitMapHeader.Buffer - ((((_BYTE)v4 + (_BYTE)a2 - 8) & 4) != 0LL ? 4 : 0);
      do
      {
        v12 = v7 < BitMapHeader.SizeOfBitMap ? v7 : 0;
        v13 = BitMapHeader.SizeOfBitMap - 1;
        while ( 1 )
        {
          v14 = v10 + v13;
          v15 = v10 + v12;
          if ( v13 - v12 == -1 )
            goto LABEL_25;
          v16 = &v11[8 * ((unsigned __int64)v15 >> 6)];
          for ( j = ~*(_QWORD *)v16 | ((1LL << (v15 & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v16 )
          {
            v16 += 8;
            if ( v16 > &v11[8 * ((unsigned __int64)v14 >> 6)] )
              goto LABEL_25;
          }
          _BitScanForward64(&v18, ~j);
          v19 = v18 + ((unsigned int)((v16 - v11) >> 3) << 6);
          if ( v19 > v14 )
          {
LABEL_25:
            v19 = -1;
          }
          else if ( v19 != -1 )
          {
            break;
          }
          if ( !v12 )
            break;
          SizeOfBitMap = v7 + 1;
          if ( v7 + 1 > BitMapHeader.SizeOfBitMap )
            SizeOfBitMap = BitMapHeader.SizeOfBitMap;
          v13 = SizeOfBitMap - 1;
          v12 = 0;
        }
        v20 = v19 - v10;
        if ( v19 == -1 )
          v20 = -1;
        if ( v20 < v7 || v20 == -1 )
          break;
        NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped((__int64)&BitMapHeader, v20, 0xFFFFFFFF, &v27);
        v22 = v27;
        v23 = NextForwardRunClearCapped;
        if ( !NextForwardRunClearCapped )
          v22 = 512;
        v24 = v22 - v20;
        MiSetVaAgeList(v29, v9 + (v20 << 12), v24, i != 0 ? 6 : 0);
        RtlClearBits(&BitMapHeader, v20, v24);
        v7 = v20 + v24 + v23;
        if ( !v23 )
          break;
        v10 = v28;
      }
      while ( v7 != 512 );
      *v6 = 0;
    }
  }
  if ( *(_DWORD *)(a2 + 68) )
    *(_QWORD *)(a2 + 16) -= MiFreeWsleList(v29, a2 + 56, (*(_DWORD *)a2 >> 8) & 1);
}
