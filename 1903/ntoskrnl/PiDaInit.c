/*
 * XREFs of PiDaInit @ 0x1409F8248
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 */

int PiDaInit()
{
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)&v1 + 1) = L"\\Driver\\DeviceApi";
  *(_QWORD *)&v1 = 2359330LL;
  return IoCreateDriver(&v1, (__int64 (__fastcall *)(PVOID, _QWORD))PiDaDriverEntry);
}
