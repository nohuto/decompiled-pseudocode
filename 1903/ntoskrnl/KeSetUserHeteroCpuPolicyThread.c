/*
 * XREFs of KeSetUserHeteroCpuPolicyThread @ 0x1402A4BEC
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 * Callees:
 *     KeQueryHeteroCpuPolicyThread @ 0x1402A4AB0 (KeQueryHeteroCpuPolicyThread.c)
 *     KiSetHeteroPolicyThread @ 0x1402B0040 (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall KeSetUserHeteroCpuPolicyThread(__int64 a1, unsigned int a2)
{
  unsigned int HeteroCpuPolicyThread; // ebx

  HeteroCpuPolicyThread = KeQueryHeteroCpuPolicyThread(a1, 1);
  KiSetHeteroPolicyThread(a1, a2, 1LL, 1LL);
  return HeteroCpuPolicyThread;
}
