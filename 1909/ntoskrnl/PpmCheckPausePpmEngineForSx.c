/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14015E3A8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x14017766C (PpmPerfUpdateQosDisableReasons.c)
 */

__int64 PpmCheckPausePpmEngineForSx()
{
  __int64 result; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  result = PpmPerfUpdateQosDisableReasons(0LL);
  byte_140572C78 = 1;
  return result;
}
