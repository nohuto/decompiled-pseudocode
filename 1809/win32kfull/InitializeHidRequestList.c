/*
 * XREFs of InitializeHidRequestList @ 0x1C0136F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C0317FF8 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C0318008 = (__int64)&qword_1C0318000;
  qword_1C0318000 = (__int64)&qword_1C0318000;
  result = &qword_1C0318010;
  qword_1C0318018 = (__int64)&qword_1C0318010;
  qword_1C0318010 = (__int64)&qword_1C0318010;
  return result;
}
