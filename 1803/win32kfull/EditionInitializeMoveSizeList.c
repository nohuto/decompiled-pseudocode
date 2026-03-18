/*
 * XREFs of EditionInitializeMoveSizeList @ 0x1C0113CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *EditionInitializeMoveSizeList()
{
  __int64 *result; // rax

  result = &gActiveMoveSizeDataList;
  qword_1C032A968 = (__int64)&gActiveMoveSizeDataList;
  gActiveMoveSizeDataList = (__int64)&gActiveMoveSizeDataList;
  return result;
}
