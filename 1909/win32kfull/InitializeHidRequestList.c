/*
 * XREFs of InitializeHidRequestList @ 0x1C011BF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C032B308 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C032B318 = (__int64)&qword_1C032B310;
  qword_1C032B310 = (__int64)&qword_1C032B310;
  result = &qword_1C032B320;
  qword_1C032B328 = (__int64)&qword_1C032B320;
  qword_1C032B320 = (__int64)&qword_1C032B320;
  return result;
}
