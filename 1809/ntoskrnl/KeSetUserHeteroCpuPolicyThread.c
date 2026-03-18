/*
 * XREFs of KeSetUserHeteroCpuPolicyThread @ 0x14028E17C
 * Callers:
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 * Callees:
 *     KeQueryHeteroCpuPolicyThread @ 0x14028DE20 (KeQueryHeteroCpuPolicyThread.c)
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall KeSetUserHeteroCpuPolicyThread(__int64 a1, unsigned int a2)
{
  unsigned int HeteroCpuPolicyThread; // ebx

  HeteroCpuPolicyThread = KeQueryHeteroCpuPolicyThread(a1, 1);
  KiSetHeteroPolicyThread(a1, a2, 1LL, 1LL);
  return HeteroCpuPolicyThread;
}
