/*
 * XREFs of PiDaInit @ 0x1409C85CC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     IoCreateDriver @ 0x14073B280 (IoCreateDriver.c)
 */

int PiDaInit()
{
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v1 = 2359330LL;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\DeviceApi";
  return IoCreateDriver(&v1, (__int64 (__fastcall *)(PVOID, _QWORD))PiDaDriverEntry);
}
