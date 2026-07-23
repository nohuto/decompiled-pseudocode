/*
 * XREFs of LdrpInitializeEnclaves @ 0x1800CE040
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180035C80 (RtlInitializeCriticalSectionEx.c)
 */

__int64 *LdrpInitializeEnclaves()
{
  __int64 *result; // rax

  RtlInitializeCriticalSectionEx(&LdrpEnclaveListLock, 0, 0);
  result = &LdrpEnclaveList;
  qword_180165AD8 = (__int64)&LdrpEnclaveList;
  LdrpEnclaveList = (__int64)&LdrpEnclaveList;
  return result;
}
