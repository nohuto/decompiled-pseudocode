/*
 * XREFs of InitializeHidRequestList @ 0x1C0141770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C032D318 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C032D328 = (__int64)&qword_1C032D320;
  qword_1C032D320 = (__int64)&qword_1C032D320;
  result = &qword_1C032D330;
  qword_1C032D338 = (__int64)&qword_1C032D330;
  qword_1C032D330 = (__int64)&qword_1C032D330;
  return result;
}
