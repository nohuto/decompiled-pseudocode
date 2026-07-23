/*
 * XREFs of ProducerConsumerBufferComplete @ 0x14056BED8
 * Callers:
 *     PopDecompressHiberBlocks @ 0x14056AE60 (PopDecompressHiberBlocks.c)
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
 *     PopCountDataAsProduced @ 0x14056BD44 (PopCountDataAsProduced.c)
 *     PopRequestRead @ 0x14057E27C (PopRequestRead.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x14056BFF8 (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall ProducerConsumerBufferComplete(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbp
  unsigned __int64 v8; // r8
  unsigned int v9; // esi
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 result; // rax

  v4 = a4;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  v8 = *(_QWORD *)(a2 + 8);
  v9 = a3 - *(_DWORD *)a1;
  v10 = v8 % *(unsigned int *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 8) + v9;
  if ( (unsigned int)v10 <= v9 )
    v11 = v9;
  v12 = v8 + v11 - (unsigned int)v10;
  while ( v12 != v8 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( v12 != *(_QWORD *)(a2 + 8) );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
    v8 = *(_QWORD *)(a2 + 8);
  }
  result = v8 + v4;
  *(_QWORD *)(a2 + 8) = v8 + v4;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
