/*
 * XREFs of PnpDeviceCompletionQueueInitialize @ 0x140A223D4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpDeviceCompletionQueueInitialize()
{
  __int64 result; // rax

  byte_140460888 = 5;
  qword_140460868 = (__int64)&PnpDeviceCompletionQueue;
  PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
  qword_140460898 = (__int64)&qword_140460890;
  qword_140460890 = (__int64)&qword_140460890;
  qword_140460880 = (__int64)&qword_140460878;
  qword_140460878 = (__int64)&qword_140460878;
  result = 0LL;
  qword_1404608A8 = 0LL;
  dword_140460870 = 0;
  byte_14046088A = 8;
  dword_14046088C = 0;
  dword_1404608A0 = 0x7FFFFFFF;
  return result;
}
