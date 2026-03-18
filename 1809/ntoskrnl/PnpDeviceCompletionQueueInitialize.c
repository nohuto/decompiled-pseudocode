/*
 * XREFs of PnpDeviceCompletionQueueInitialize @ 0x1409DE8CC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpDeviceCompletionQueueInitialize()
{
  __int64 result; // rax

  byte_140434BA8 = 5;
  qword_140434B88 = (__int64)&PnpDeviceCompletionQueue;
  PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
  qword_140434BB8 = (__int64)&qword_140434BB0;
  qword_140434BB0 = (__int64)&qword_140434BB0;
  qword_140434BA0 = (__int64)&qword_140434B98;
  qword_140434B98 = (__int64)&qword_140434B98;
  result = 0LL;
  qword_140434BC8 = 0LL;
  dword_140434B90 = 0;
  byte_140434BAA = 8;
  dword_140434BAC = 0;
  dword_140434BC0 = 0x7FFFFFFF;
  return result;
}
