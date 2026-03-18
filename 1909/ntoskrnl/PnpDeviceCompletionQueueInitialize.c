/*
 * XREFs of PnpDeviceCompletionQueueInitialize @ 0x140A224B4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpDeviceCompletionQueueInitialize()
{
  __int64 result; // rax

  byte_140460568 = 5;
  qword_140460548 = (__int64)&PnpDeviceCompletionQueue;
  PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
  qword_140460578 = (__int64)&qword_140460570;
  qword_140460570 = (__int64)&qword_140460570;
  qword_140460560 = (__int64)&qword_140460558;
  qword_140460558 = (__int64)&qword_140460558;
  result = 0LL;
  qword_140460588 = 0LL;
  dword_140460550 = 0;
  byte_14046056A = 8;
  dword_14046056C = 0;
  dword_140460580 = 0x7FFFFFFF;
  return result;
}
