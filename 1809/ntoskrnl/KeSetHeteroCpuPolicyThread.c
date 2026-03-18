/*
 * XREFs of KeSetHeteroCpuPolicyThread @ 0x14028E160
 * Callers:
 *     <none>
 * Callees:
 *     KiSetHeteroPolicyThread @ 0x140298F5C (KiSetHeteroPolicyThread.c)
 */

__int64 __fastcall KeSetHeteroCpuPolicyThread(__int64 a1, __int64 a2, unsigned int a3)
{
  return KiSetHeteroPolicyThread(a1, a2, 0LL, a3);
}
