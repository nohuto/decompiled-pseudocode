/*
 * XREFs of LdrpInitializeEnclaves @ 0x1800CF774
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180061C40 (RtlInitializeCriticalSectionEx.c)
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
