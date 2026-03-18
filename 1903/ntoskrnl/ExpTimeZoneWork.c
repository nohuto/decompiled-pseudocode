/*
 * XREFs of ExpTimeZoneWork @ 0x14090A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetSystemTime @ 0x1401C3590 (ZwSetSystemTime.c)
 */

__int64 ExpTimeZoneWork()
{
  __int64 result; // rax

  do
  {
    ZwSetSystemTime(0LL, 0LL);
    result = (unsigned int)_InterlockedExchangeAdd(&ExpOkToTimeZoneRefresh, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
