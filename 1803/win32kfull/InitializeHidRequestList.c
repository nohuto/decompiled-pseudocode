/*
 * XREFs of InitializeHidRequestList @ 0x1C0113770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C032A090 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C032A0A0 = (__int64)&qword_1C032A098;
  qword_1C032A098 = (__int64)&qword_1C032A098;
  result = &qword_1C032A0A8;
  qword_1C032A0B0 = (__int64)&qword_1C032A0A8;
  qword_1C032A0A8 = (__int64)&qword_1C032A0A8;
  return result;
}
