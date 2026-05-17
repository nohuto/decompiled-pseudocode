/*
 * XREFs of RtlReleaseResource @ 0x18006DF10
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x18006DDA0 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlpNonNegativeDecrement @ 0x18006DFE4 (RtlpNonNegativeDecrement.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x1800A0420 (ZwReleaseSemaphore.c)
 */

__int64 __fastcall RtlReleaseResource(__int64 a1)
{
  __int64 result; // rax
  signed __int32 v3; // edx
  bool v4; // zf
  __int64 v5; // rdx
  int v6; // eax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 68);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1 )
      *(_QWORD *)(a1 + 72) = 0LL;
    if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 68)) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v5 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
        if ( (_DWORD)v5 )
        {
          v6 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v5, &v7);
          if ( v6 < 0 )
            RtlRaiseStatus((unsigned int)v6);
        }
      }
      result = RtlpNonNegativeDecrement(a1 + 64);
      if ( (_DWORD)result )
      {
        result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v7);
        if ( (int)result < 0 )
          RtlRaiseStatus((unsigned int)result);
      }
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v3 = *(_DWORD *)(a1 + 64);
      v4 = v3 == 0;
      if ( v3 > 0 )
      {
        do
        {
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v3 - 1, v3);
          if ( v3 == (_DWORD)result )
            break;
          v3 = result;
        }
        while ( (int)result > 0 );
        v4 = v3 == 0;
      }
      if ( !v4 )
      {
        result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v7);
        if ( (int)result < 0 )
          RtlRaiseStatus((unsigned int)result);
      }
    }
  }
  return result;
}
