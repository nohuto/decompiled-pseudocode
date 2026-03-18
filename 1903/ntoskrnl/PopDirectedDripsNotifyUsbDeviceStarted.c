/*
 * XREFs of PopDirectedDripsNotifyUsbDeviceStarted @ 0x1408B98BC
 * Callers:
 *     PopDirectedDripsNotifyDeviceStarted @ 0x14071B1E4 (PopDirectedDripsNotifyDeviceStarted.c)
 * Callees:
 *     PoDirectedDripsSetDeviceFlags @ 0x14015AD90 (PoDirectedDripsSetDeviceFlags.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     PopDirectedDripsIsUsbHubDevice @ 0x1408B986C (PopDirectedDripsIsUsbHubDevice.c)
 */

__int64 __fastcall PopDirectedDripsNotifyUsbDeviceStarted(__int64 a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  UNICODE_STRING String1; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING v6; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v8; // [rsp+50h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  wcscpy((wchar_t *)v7, L"PCI\\");
  String1.Buffer = (wchar_t *)v7;
  v6.Buffer = (wchar_t *)&v8;
  *(_QWORD *)&String1.Length = 655368LL;
  v8 = *(_OWORD *)L"usbccgp";
  *(_QWORD *)&v6.Length = 1048590LL;
  if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(a1 + 40), 1u) || PopDirectedDripsIsUsbHubDevice(a1) )
  {
    v3 = 2;
  }
  else
  {
    v3 = RtlEqualUnicodeString(&v6, (PCUNICODE_STRING)(a1 + 56), 0) != 0 ? 2 : 0;
    if ( PopDirectedDripsIsUsbHubDevice(*(_QWORD *)(a1 + 16)) )
      v3 |= 1u;
  }
  return PoDirectedDripsSetDeviceFlags(v2, v3);
}
