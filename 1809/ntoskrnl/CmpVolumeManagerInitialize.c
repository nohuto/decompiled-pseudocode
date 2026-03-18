/*
 * XREFs of CmpVolumeManagerInitialize @ 0x1407305F8
 * Callers:
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_14096EE88;
  qword_14096EE90 = (__int64)&qword_14096EE88;
  qword_14096EE88 = (__int64)&qword_14096EE88;
  return result;
}
