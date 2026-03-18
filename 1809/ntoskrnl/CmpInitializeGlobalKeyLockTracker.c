/*
 * XREFs of CmpInitializeGlobalKeyLockTracker @ 0x1407305CC
 * Callers:
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpInitializeGlobalKeyLockTracker()
{
  __int64 *result; // rax

  CmpKeyLockTracker = 0LL;
  result = &qword_140437D88;
  qword_140437D90 = (__int64)&qword_140437D88;
  qword_140437D88 = (__int64)&qword_140437D88;
  return result;
}
