/*
 * XREFs of RtlFindClearRuns @ 0x1800E9650
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800E9940 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  ULONG v4; // ebp
  ULONG v6; // edx
  ULONG v7; // r10d
  BOOL v9; // r15d
  bool v11; // zf
  ULONG v12; // r15d
  ULONG v13; // esi
  PULONG Buffer; // rax
  __int64 v15; // r8
  ULONG v16; // r12d
  int v17; // ebx
  ULONG v18; // ecx
  unsigned __int8 v19; // r9
  __int64 v20; // r14
  ULONG v21; // r8d
  ULONG result; // eax
  signed int v23; // esi
  __int64 v24; // rbx
  _RTL_BITMAP_RUN *i; // rcx
  unsigned __int8 v26; // r9
  __int64 v27; // r14
  int v28; // ebp
  unsigned __int8 j; // si
  ULONG v30; // eax
  signed int v31; // ebx
  __int64 v32; // r10
  _RTL_BITMAP_RUN *k; // rcx
  __int64 v34; // rcx
  ULONG v35; // eax
  ULONG v36; // r10d
  __int64 v37; // r9
  _RTL_BITMAP_RUN *m; // rcx
  ULONG SizeOfBitMap; // [rsp+0h] [rbp-48h]
  int v40; // [rsp+4h] [rbp-44h]
  ULONG v41; // [rsp+8h] [rbp-40h]
  ULONG *v42; // [rsp+10h] [rbp-38h]
  ULONG v43; // [rsp+50h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = BitMapHeader->SizeOfBitMap;
  v6 = 0;
  v7 = BitMapHeader->SizeOfBitMap & 7;
  v41 = v7;
  v9 = v7 != 0;
  v43 = 0;
  v11 = (BitMapHeader->SizeOfBitMap >> 3) + v9 == 0;
  v12 = (BitMapHeader->SizeOfBitMap >> 3) + v9;
  v13 = 0;
  Buffer = BitMapHeader->Buffer;
  LODWORD(v15) = 0;
  v16 = 0;
  if ( !v11 )
  {
    v17 = 0;
    v18 = v12 - 1;
    v40 = 0;
    while ( 1 )
    {
      v19 = *(_BYTE *)Buffer;
      v42 = (PULONG)((char *)Buffer + 1);
      if ( v16 == v18 && v7 )
        v19 |= byte_1801241F0[(v4 & 7) + 16];
      if ( v19 )
      {
        v20 = (unsigned __int8)a0123456789abcd[v19 + 16];
        v21 = v20 + v15;
        if ( v21 && (v6 < SizeOfRunArray || RunArray[v6 - 1].NumberOfBits < v21) )
        {
          result = v6 + 1;
          if ( v6 >= SizeOfRunArray )
            result = v6;
          v6 = result;
          v23 = result - 2;
          if ( LocateLongestRuns )
          {
            v24 = v23;
            for ( i = &RunArray[v23 + 1]; v24 >= 0 && i[-1].NumberOfBits < v21; --i )
            {
              --v23;
              --v24;
              *i = i[-1];
            }
            v17 = v40;
          }
          RunArray[v23 + 1].NumberOfBits = v21;
          RunArray[v23 + 1].StartingIndex = v43;
          if ( !LocateLongestRuns && result >= SizeOfRunArray )
            return result;
        }
        v15 = (unsigned __int8)byte_1801327B0[v19];
        v13 = v17 - v15 + 8;
        v43 = v13;
        v26 = *((_BYTE *)&unk_180124208 - v15) | byte_1801241F0[v20] | v19;
        if ( v26 != 0xFF )
        {
          do
          {
            if ( v6 >= SizeOfRunArray && RunArray[v6 - 1].NumberOfBits >= byte_1801328B0[v26] )
              break;
            v27 = byte_1801328B0[v26];
            v28 = 0;
            for ( j = byte_1801241F0[v27]; (j & v26) != 0; j *= 2 )
              ++v28;
            v30 = v6 + 1;
            if ( v6 >= SizeOfRunArray )
              v30 = v6;
            v6 = v30;
            v31 = v30 - 2;
            if ( LocateLongestRuns )
            {
              v32 = v31;
              for ( k = &RunArray[v31 + 1]; v32 >= 0 && k[-1].NumberOfBits < (unsigned __int8)v27; --k )
              {
                --v31;
                --v32;
                *k = k[-1];
              }
            }
            v34 = v31;
            v17 = v40;
            RunArray[v34 + 1].NumberOfBits = (unsigned __int8)v27;
            RunArray[v34 + 1].StartingIndex = v40 + v28;
            if ( !LocateLongestRuns && v30 >= SizeOfRunArray )
              return v6;
            v26 |= j;
          }
          while ( v26 != 0xFF );
          v13 = v43;
        }
        LOBYTE(v4) = SizeOfBitMap;
        v18 = v12 - 1;
      }
      else
      {
        v13 = v43;
        LODWORD(v15) = v15 + 8;
      }
      v17 += 8;
      ++v16;
      v40 = v17;
      if ( v16 >= v12 )
        break;
      Buffer = v42;
      v7 = v41;
    }
  }
  if ( (_DWORD)v15 && (v6 < SizeOfRunArray || RunArray[v6 - 1].NumberOfBits < (unsigned int)v15) )
  {
    v35 = v6 + 1;
    if ( v6 >= SizeOfRunArray )
      v35 = v6;
    v6 = v35;
    v36 = v35 - 2;
    if ( LocateLongestRuns )
    {
      v37 = (int)v36;
      for ( m = &RunArray[(int)v36 + 1]; v37 >= 0 && m[-1].NumberOfBits < (unsigned int)v15; --m )
      {
        --v36;
        --v37;
        *m = m[-1];
      }
    }
    RunArray[(int)v36 + 1].NumberOfBits = v15;
    RunArray[(int)v36 + 1].StartingIndex = v13;
  }
  return v6;
}
