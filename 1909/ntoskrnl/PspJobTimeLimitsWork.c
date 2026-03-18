/*
 * XREFs of PspJobTimeLimitsWork @ 0x140615490
 * Callers:
 *     <none>
 * Callees:
 *     PspEnforceLimits @ 0x140612870 (PspEnforceLimits.c)
 */

__int64 PspJobTimeLimitsWork()
{
  char v0; // bl
  char v1; // cl
  __int64 result; // rax

  v0 = 0;
  do
  {
    _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
    if ( (_InterlockedAnd(&PspJobTimeLimitsWorkItemFlags, 0xFFFFFFFC) & 1) != 0 )
    {
      v0 = 1;
      v1 = 0;
    }
    else
    {
      v1 = 1;
    }
    PspEnforceLimits(v1);
    result = (unsigned int)_InterlockedCompareExchange(&PspJobTimeLimitsWorkItemFlags, 0, 4);
  }
  while ( (_DWORD)result != 4 );
  if ( v0 )
    PspJobTimeLimitsCount = 7;
  return result;
}
