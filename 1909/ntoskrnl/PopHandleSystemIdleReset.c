/*
 * XREFs of PopHandleSystemIdleReset @ 0x140300028
 * Callers:
 *     PopResetIdleTime @ 0x14013B3A0 (PopResetIdleTime.c)
 * Callees:
 *     PopCheckForWork @ 0x1400D5AC0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400D5B48 (PopGetPolicyWorker.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

struct _KTHREAD *__fastcall PopHandleSystemIdleReset(int a1)
{
  struct _KTHREAD *result; // rax

  if ( !PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 0x102uLL, 0LL, 0LL);
  if ( a1 == 2 )
  {
    _InterlockedOr(&PopPendingSystemIdleResetMask, 4u);
    PopGetPolicyWorker(128);
    return PopCheckForWork();
  }
  return result;
}
