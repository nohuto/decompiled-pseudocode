/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x14073179C
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140438E48;
  qword_140438E50 = (__int64)&qword_140438E48;
  qword_140438E48 = (__int64)&qword_140438E48;
  return result;
}
