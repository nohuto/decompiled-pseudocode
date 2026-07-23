/*
 * XREFs of CmpVolumeManagerInitialize @ 0x1407317C8
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_14096FE88;
  qword_14096FE90 = (__int64)&qword_14096FE88;
  qword_14096FE88 = (__int64)&qword_14096FE88;
  return result;
}
