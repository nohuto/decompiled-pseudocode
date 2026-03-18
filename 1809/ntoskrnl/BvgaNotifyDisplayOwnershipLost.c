/*
 * XREFs of BvgaNotifyDisplayOwnershipLost @ 0x14027E020
 * Callers:
 *     BvgaNotifyDisplayOwnershipChange @ 0x14027DFD0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     BvgaAcquireLock @ 0x14027DDD0 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x14027E090 (BvgaReleaseLock.c)
 */

__int64 __fastcall BvgaNotifyDisplayOwnershipLost(__int64 (__fastcall *a1)(_QWORD))
{
  __int64 result; // rax

  if ( BvgaBootDriverInstalled )
  {
    BvgaAcquireLock();
    if ( BvgaDisplayState != 2 )
      VidCleanUp();
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
    return BvgaReleaseLock();
  }
  else
  {
    BvgaDisplayState = 2;
    BvgaResetDisplayParameters = a1;
  }
  return result;
}
