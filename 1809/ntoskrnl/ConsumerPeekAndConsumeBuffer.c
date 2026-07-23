/*
 * XREFs of ConsumerPeekAndConsumeBuffer @ 0x14056AF90
 * Callers:
 *     PopDecompressHiberBlocks @ 0x14056AE60 (PopDecompressHiberBlocks.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x14056BFF8 (PopHiberCheckForDebugBreak.c)
 *     PopHiberPeekRangeTable @ 0x14057DD74 (PopHiberPeekRangeTable.c)
 */

unsigned __int64 __fastcall ConsumerPeekAndConsumeBuffer(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v9; // r15
  unsigned int v10; // esi
  unsigned int v11; // ebp
  bool v12; // r14
  bool v13; // al
  __int64 v14; // rax
  unsigned __int64 result; // rax
  unsigned int v16; // eax
  int v17; // edx

  v5 = 0LL;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    v10 = *a2;
    v11 = *(_DWORD *)(a1 + 40) - v9;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      if ( v10 >= *(_DWORD *)(a1 + 32) - (int)v9 )
        v10 = *(_DWORD *)(a1 + 32) - v9;
      *a2 = v10;
    }
    v12 = v10 <= v11;
    v13 = v10 <= v11;
    if ( v10 <= v11 && v10 )
    {
      v5 = *(_QWORD *)a1 + v9 % *(unsigned int *)(a1 + 8);
      v16 = PopHiberPeekRangeTable(v5, v10, a5);
      v10 = v16;
      if ( v16 > v11 )
      {
        v13 = 0;
      }
      else
      {
        *a2 = v16;
        v13 = v12;
      }
    }
    if ( v13 )
      break;
    if ( (a3 & 1) != 0 )
      goto LABEL_10;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      v17 = *(_DWORD *)(a1 + 48);
      if ( !*(_QWORD *)(a1 + 16) && v10 >= *(_DWORD *)(a1 + 32) - v17 )
        v10 = *(_DWORD *)(a1 + 32) - v17;
    }
    while ( *(_QWORD *)(a1 + 48) == v9 && v10 > *(_DWORD *)(a1 + 40) - v17 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  v14 = *a2;
  if ( !(_DWORD)v14 )
  {
LABEL_10:
    v5 = 0LL;
    goto LABEL_11;
  }
  *(_QWORD *)(a1 + 48) += v14;
LABEL_11:
  result = v5;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
