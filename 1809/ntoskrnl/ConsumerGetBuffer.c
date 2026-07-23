/*
 * XREFs of ConsumerGetBuffer @ 0x14056B988
 * Callers:
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x14056BFF8 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ConsumerGetBuffer(__int64 a1, unsigned int *a2, char a3)
{
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // r9d
  unsigned __int64 result; // rax
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // eax

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
    v6 = *(_DWORD *)(a1 + 48);
    v7 = *(_DWORD *)(a1 + 40) - v6;
    v8 = *a2;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      if ( v8 >= *(_DWORD *)(a1 + 32) - v6 )
        v8 = *(_DWORD *)(a1 + 32) - v6;
      *a2 = v8;
    }
    if ( v8 <= v7 )
      goto LABEL_8;
    if ( (a3 & 1) != 0 )
      break;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      v10 = *(_DWORD *)(a1 + 48);
      v11 = *(_DWORD *)(a1 + 40) - v10;
      if ( !*(_QWORD *)(a1 + 16) )
      {
        v12 = *(_DWORD *)(a1 + 32) - v10;
        v13 = *a2;
        if ( *a2 >= v12 )
          v13 = v12;
        *a2 = v13;
      }
    }
    while ( *a2 > v11 );
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
  if ( v8 > v7 )
  {
LABEL_6:
    result = 0LL;
    goto LABEL_7;
  }
LABEL_8:
  if ( !v8 )
    goto LABEL_6;
  result = *(_QWORD *)a1 + *(_QWORD *)(a1 + 48) % (unsigned __int64)*(unsigned int *)(a1 + 8);
  *(_QWORD *)(a1 + 48) += v8;
LABEL_7:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
