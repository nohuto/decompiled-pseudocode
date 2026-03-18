/*
 * XREFs of UsbhBuildUxdDeviceKey @ 0x1C005DE9C
 * Callers:
 *     UsbhDeleteUxdDeviceKey @ 0x1C005E03C (UsbhDeleteUxdDeviceKey.c)
 *     UsbhGetUxdDeviceKey @ 0x1C005E604 (UsbhGetUxdDeviceKey.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     RtlStringCbPrintfW @ 0x1C0025A60 (RtlStringCbPrintfW.c)
 */

NTSTATUS __fastcall UsbhBuildUxdDeviceKey(__int64 a1, __int64 a2, wchar_t *a3)
{
  unsigned __int16 *v4; // rax
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+28h] [rbp-10h]

  v4 = (unsigned __int16 *)PdoExt(a2);
  v7 = v4[706];
  v6 = v4[705];
  return RtlStringCbPrintfW(a3, 0x1AuLL, L"%4.4x%4.4x%4.4x", v4[704], v6, v7);
}
