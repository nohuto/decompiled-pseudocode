/*
 * XREFs of PnpDeviceCompletionQueueInitialize @ 0x1409DF8CC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpDeviceCompletionQueueInitialize()
{
  __int64 result; // rax

  byte_140435C48 = 5;
  qword_140435C28 = (__int64)&PnpDeviceCompletionQueue;
  PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
  qword_140435C58 = (__int64)&qword_140435C50;
  qword_140435C50 = (__int64)&qword_140435C50;
  qword_140435C40 = (__int64)&qword_140435C38;
  qword_140435C38 = (__int64)&qword_140435C38;
  result = 0LL;
  qword_140435C68 = 0LL;
  dword_140435C30 = 0;
  byte_140435C4A = 8;
  dword_140435C4C = 0;
  dword_140435C60 = 0x7FFFFFFF;
  return result;
}
