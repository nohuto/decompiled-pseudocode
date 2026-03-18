/*
 * XREFs of PopHandleSystemIdleReset @ 0x140300578
 * Callers:
 *     PopResetIdleTime @ 0x1400EE900 (PopResetIdleTime.c)
 * Callees:
 *     PopCheckForWork @ 0x1400EE334 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400EE3BC (PopGetPolicyWorker.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
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
