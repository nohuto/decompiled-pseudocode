/*
 * XREFs of PpmCheckPausePpmEngineForSx @ 0x14015DD08
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmPerfUpdateQosDisableReasons @ 0x140176F7C (PpmPerfUpdateQosDisableReasons.c)
 */

__int64 PpmCheckPausePpmEngineForSx()
{
  __int64 result; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  result = PpmPerfUpdateQosDisableReasons(0LL);
  byte_140572C78 = 1;
  return result;
}
