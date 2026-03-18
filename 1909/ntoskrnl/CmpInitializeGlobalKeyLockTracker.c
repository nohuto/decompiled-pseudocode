/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x140760A9C
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_1404636A8;
  qword_1404636B0 = (__int64)&qword_1404636A8;
  qword_1404636A8 = (__int64)&qword_1404636A8;
  return result;
}
