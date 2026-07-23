/*
 * XREFs of MiTrimWorkingSetBuildup @ 0x140088AE8
 * Callers:
 *     MiTrimPte @ 0x14005AA40 (MiTrimPte.c)
 *     MiTrimWorkingSetTail @ 0x140088A80 (MiTrimWorkingSetTail.c)
 *     MiTrimPteWorker @ 0x1402C9194 (MiTrimPteWorker.c)
 * Callees:
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     RtlClearBits @ 0x140091EF0 (RtlClearBits.c)
 *     MiSetVaAgeList @ 0x1400C5760 (MiSetVaAgeList.c)
 */

void __fastcall MiTrimWorkingSetBuildup(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // r9
  unsigned __int64 v7; // r12
  __int64 v8; // r12
  int v9; // r13d
  char *v10; // rsi
  int v11; // r10d
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  char *v15; // rdx
  __int64 i; // r8
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  ULONG v19; // esi
  _DWORD *v20; // r8
  unsigned int v21; // ebx
  _DWORD *v22; // rdx
  int v23; // edi
  unsigned int j; // eax
  ULONG v25; // ebx
  _DWORD *v26; // rdx
  unsigned int SizeOfBitMap; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+90h] [rbp+18h]

  v2 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v29 = *(_QWORD *)(a1 + 16);
  while ( v2 != 2 )
  {
    v4 = 80LL * v2;
    v5 = v4 + a2 + 248;
    if ( !*(_BYTE *)(v5 + 72) )
      goto LABEL_4;
    v6 = 0LL;
    v7 = (*(_QWORD *)(v5 + 64) & 0xFFFFFFFFFFFFF000uLL) << 16;
    BitMapHeader.SizeOfBitMap = 512;
    BitMapHeader.Buffer = (unsigned int *)(v4 + a2 + 248);
    v8 = (__int64)(v7 & 0xFFFFFFE000000000uLL) >> 16;
    v9 = (((_BYTE)v4 + (_BYTE)a2 - 8) & 4) != 0LL ? 0x20 : 0;
    v10 = (char *)BitMapHeader.Buffer - ((((_BYTE)v4 + (_BYTE)a2 - 8) & 4) != 0LL ? 4 : 0);
    while ( 1 )
    {
      v11 = (unsigned int)v6 < BitMapHeader.SizeOfBitMap ? v6 : 0;
      v12 = BitMapHeader.SizeOfBitMap - 1;
      while ( 1 )
      {
        v13 = v12 + v9;
        v14 = v11 + v9;
        if ( v12 - v11 == -1 )
          goto LABEL_41;
        v15 = &v10[8 * ((unsigned __int64)v14 >> 6)];
        for ( i = ~*(_QWORD *)v15 | ((1LL << (v14 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v15 )
        {
          v15 += 8;
          if ( v15 > &v10[8 * ((unsigned __int64)v13 >> 6)] )
            goto LABEL_41;
        }
        _BitScanForward64(&v17, ~i);
        v18 = v17 + ((unsigned int)((v15 - v10) >> 3) << 6);
        if ( v18 > v13 )
        {
LABEL_41:
          v18 = -1;
        }
        else if ( v18 != -1 )
        {
          break;
        }
        if ( !v11 )
          break;
        SizeOfBitMap = v6 + 1;
        if ( (unsigned int)(v6 + 1) > BitMapHeader.SizeOfBitMap )
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
        v12 = SizeOfBitMap - 1;
        v11 = 0;
      }
      v19 = v18 - v9;
      if ( v18 == -1 )
        v19 = -1;
      if ( v19 < (unsigned int)v6 || v19 == -1 )
        break;
      if ( v19 < 0x200 )
      {
        v20 = (_DWORD *)(v5 + 60);
        v21 = v19;
        v22 = (_DWORD *)(v5 + 4 * ((unsigned __int64)v19 >> 5));
        if ( v22 != (_DWORD *)(v5 + 60) )
        {
          v6 = v19 & 0x1F;
          if ( (*v22 | dword_14037C7E0[v6]) == -1 )
          {
            v21 = v19 - v6 + 32;
            for ( ++v22; v22 < v20 && *v22 == -1; ++v22 )
              v21 += 32;
          }
        }
        while ( v21 < 0x200 && _bittest((const signed __int32 *)v5, v21) )
          ++v21;
        v23 = 0;
        if ( v22 == v20 )
          goto LABEL_32;
        v6 = v21 & 0x1F;
        if ( (*v22 & ~dword_14037C7E0[v6]) != 0 )
          goto LABEL_32;
        v23 = 32 - v6;
        if ( (_DWORD)v6 != 33 )
        {
          v26 = v22 + 1;
          while ( v26 < v20 && !*v26 )
          {
            ++v26;
            v23 += 32;
            if ( v23 == -1 )
              goto LABEL_37;
          }
LABEL_32:
          for ( j = v23 + v21; j < 0x200 && !_bittest((const signed __int32 *)v5, j) && v23 != -1; ++j )
            ++v23;
        }
LABEL_37:
        if ( v23 )
          goto LABEL_38;
        goto LABEL_49;
      }
      v23 = 0;
LABEL_49:
      v21 = 512;
LABEL_38:
      LOBYTE(v6) = v2 != 0 ? 6 : 0;
      v25 = v21 - v19;
      MiSetVaAgeList(v29, v8 + (v19 << 12), v25, v6);
      RtlClearBits(&BitMapHeader, v19, v25);
      v6 = v19 + v23 + v25;
      if ( v23 )
      {
        v10 = (char *)(v5 - ((v5 & 4) != 0 ? 4 : 0));
        if ( (_DWORD)v6 != 512 )
          continue;
      }
      break;
    }
    *(_BYTE *)(v5 + 72) = 0;
LABEL_4:
    ++v2;
  }
  if ( *(_DWORD *)(a2 + 68) )
    *(_QWORD *)(a2 + 16) -= MiFreeWsleList(v29, a2 + 56, (*(_DWORD *)a2 >> 8) & 1);
}
