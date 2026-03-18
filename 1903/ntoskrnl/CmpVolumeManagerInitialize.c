/*
 * XREFs of CmpVolumeManagerInitialize @ 0x14075C340
 * Callers:
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
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
