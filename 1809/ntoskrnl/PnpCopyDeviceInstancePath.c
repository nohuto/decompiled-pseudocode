/*
 * XREFs of PnpCopyDeviceInstancePath @ 0x14073B268
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1406DB8EC (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 */

void __fastcall PnpCopyDeviceInstancePath(__int64 a1, const UNICODE_STRING *a2)
{
  RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 40), a2);
}
