/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x14075C31C
 * Callers:
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_1404639C8;
  qword_1404639D0 = (__int64)&qword_1404639C8;
  qword_1404639C8 = (__int64)&qword_1404639C8;
  return result;
}
