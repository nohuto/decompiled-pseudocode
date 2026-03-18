/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x1401428AC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14016C804 (PpmPerfUpdateQosDisableReasons.c)
 */

__int64 PpmCheckPausePpmEngineForSx()
{
  __int64 result; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  result = PpmPerfUpdateQosDisableReasons(0LL);
  byte_140541B68 = 1;
  return result;
}
