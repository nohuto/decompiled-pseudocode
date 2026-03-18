/*
 * XREFs of CmpVolumeManagerInitialize @ 0x140760AC0
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_1409AEF08;
  qword_1409AEF10 = (__int64)&qword_1409AEF08;
  qword_1409AEF08 = (__int64)&qword_1409AEF08;
  return result;
}
