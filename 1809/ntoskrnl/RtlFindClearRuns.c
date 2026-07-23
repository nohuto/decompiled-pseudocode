/*
 * XREFs of RtlFindClearRuns @ 0x14013BE20
 * Callers:
 *     RtlFindLongestRunClear @ 0x1402EE960 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  PRTL_BITMAP_RUN v4; // r15
  ULONG v5; // r12d
  BOOLEAN v6; // r10
  unsigned int v7; // r8d
  unsigned int *Buffer; // r9
  unsigned int v9; // edx
  BOOL v10; // edi
  bool v11; // zf
  unsigned int v12; // edi
  unsigned int v13; // eax
  ULONG v14; // r14d
  __int64 v15; // r11
  ULONG v16; // r13d
  int v17; // ebx
  unsigned __int8 v18; // r10
  ULONG v19; // eax
  signed int v20; // edx
  __int64 v21; // rcx
  _RTL_BITMAP_RUN *m; // r8
  __int64 v24; // rbp
  ULONG v25; // r11d
  unsigned __int8 v26; // r10
  ULONG v27; // ecx
  ULONG v28; // r12d
  signed int v29; // r15d
  __int64 v30; // r14
  _RTL_BITMAP_RUN *i; // rdx
  __int64 v32; // rcx
  __int64 v33; // r12
  int v34; // r15d
  char j; // bp
  ULONG v36; // ecx
  signed int v37; // r14d
  __int64 v38; // r8
  _RTL_BITMAP_RUN *k; // rdx
  __int64 v40; // rcx
  _RTL_BITMAP_RUN *v41; // rdx
  unsigned int v42; // [rsp+0h] [rbp-58h]
  unsigned int SizeOfBitMap; // [rsp+4h] [rbp-54h]
  ULONG v44; // [rsp+60h] [rbp+8h]

  v4 = RunArray;
  v5 = SizeOfRunArray;
  v6 = LocateLongestRuns;
  Buffer = BitMapHeader->Buffer;
  v9 = BitMapHeader->SizeOfBitMap & 7;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v7 = BitMapHeader->SizeOfBitMap;
  v10 = v9 != 0;
  v42 = v9;
  v11 = (BitMapHeader->SizeOfBitMap >> 3) + v10 == 0;
  v12 = (BitMapHeader->SizeOfBitMap >> 3) + v10;
  v13 = 0;
  v14 = 0;
  LODWORD(v15) = 0;
  v16 = 0;
  if ( !v11 )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = *(_BYTE *)Buffer;
      Buffer = (unsigned int *)((char *)Buffer + 1);
      if ( v13 == v12 - 1 && v9 )
        v18 |= byte_140361CC8[v7 & 7];
      if ( v18 )
      {
        v24 = RtlpBitsClearLow[v18];
        v25 = v24 + v15;
        if ( v25 && (v14 < v5 || v4[v14 - 1].NumberOfBits < v25) )
        {
          v27 = v14 + 1;
          if ( v14 >= v5 )
            v27 = v14;
          v14 = v27;
          v28 = v27;
          v29 = v27 - 2;
          if ( LocateLongestRuns )
          {
            v30 = v29;
            for ( i = &RunArray[v29 + 1]; v30 >= 0 && i[-1].NumberOfBits < v25; --i )
            {
              --v29;
              --v30;
              *i = i[-1];
            }
            v14 = v27;
          }
          v32 = v29;
          v4 = RunArray;
          RunArray[v32 + 1].NumberOfBits = v25;
          RunArray[v32 + 1].StartingIndex = v16;
          if ( !LocateLongestRuns )
          {
            v14 = v28;
            if ( v28 >= SizeOfRunArray )
              return v28;
          }
          v5 = SizeOfRunArray;
        }
        v15 = RtlpBitsClearHigh[v18];
        v16 = v17 - v15 + 8;
        v26 = *((_BYTE *)&unk_140361CD0 - v15) | byte_1403630E8[v24] | v18;
        if ( v26 != 0xFF )
        {
          while ( v14 < v5 || v4[v14 - 1].NumberOfBits < RtlpBitsClearAnywhere[v26] )
          {
            v33 = RtlpBitsClearAnywhere[v26];
            v34 = 0;
            for ( j = byte_1403630E8[v33]; ((unsigned __int8)j & v26) != 0; ++v34 )
              j *= 2;
            v36 = v14 + 1;
            if ( v14 >= SizeOfRunArray )
              v36 = v14;
            v44 = v36;
            v37 = v36 - 2;
            if ( LocateLongestRuns )
            {
              v38 = v37;
              for ( k = &RunArray[v37 + 1]; v38 >= 0 && k[-1].NumberOfBits < (unsigned __int8)v33; --k )
              {
                --v37;
                --v38;
                *k = k[-1];
              }
            }
            v40 = v37;
            v14 = v44;
            v41 = &RunArray[v40];
            LODWORD(v40) = (unsigned __int8)v33;
            v5 = SizeOfRunArray;
            v41[1].NumberOfBits = v40;
            v41[1].StartingIndex = v17 + v34;
            if ( !LocateLongestRuns && v44 >= SizeOfRunArray )
              return v14;
            v4 = RunArray;
            v26 |= j;
            if ( v26 == 0xFF )
            {
              v9 = v42;
              LOBYTE(v7) = SizeOfBitMap;
              goto LABEL_6;
            }
          }
        }
        v9 = v42;
        LOBYTE(v7) = SizeOfBitMap;
      }
      else
      {
        LODWORD(v15) = v15 + 8;
      }
LABEL_6:
      v4 = RunArray;
      ++v13;
      v17 += 8;
      if ( v13 >= v12 )
      {
        v6 = LocateLongestRuns;
        break;
      }
    }
  }
  if ( (_DWORD)v15 && (v14 < v5 || v4[v14 - 1].NumberOfBits < (unsigned int)v15) )
  {
    v19 = v14 + 1;
    if ( v14 >= v5 )
      v19 = v14;
    v14 = v19;
    v20 = v19 - 2;
    if ( v6 )
    {
      v21 = v20;
      for ( m = &v4[v20 + 1]; v21 >= 0 && m[-1].NumberOfBits < (unsigned int)v15; --m )
      {
        --v20;
        --v21;
        *m = m[-1];
      }
    }
    v4[v20 + 1].NumberOfBits = v15;
    v4[v20 + 1].StartingIndex = v16;
  }
  return v14;
}
