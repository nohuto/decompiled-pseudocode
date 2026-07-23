/*
 * XREFs of PspJobTimeLimitsWork @ 0x140601A90
 * Callers:
 *     <none>
 * Callees:
 *     PspEnforceLimits @ 0x1405FE570 (PspEnforceLimits.c)
 */

__int64 PspJobTimeLimitsWork()
{
  char v0; // bl
  signed __int32 v1; // eax
  __int64 result; // rax

  v0 = 0;
  do
  {
    _m_prefetchw(&PspJobTimeLimitsWorkItemFlags);
    v1 = _InterlockedAnd(&PspJobTimeLimitsWorkItemFlags, 0xFFFFFFFC) & 1;
    if ( v1 )
      v0 = 1;
    PspEnforceLimits(v1 ^ 1);
    result = (unsigned int)_InterlockedCompareExchange(&PspJobTimeLimitsWorkItemFlags, 0, 4);
  }
  while ( (_DWORD)result != 4 );
  if ( v0 )
    PspJobTimeLimitsCount = 7;
  return result;
}
