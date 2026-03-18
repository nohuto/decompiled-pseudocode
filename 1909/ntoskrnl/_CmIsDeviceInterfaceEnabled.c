/*
 * XREFs of _CmIsDeviceInterfaceEnabled @ 0x1405C2648
 * Callers:
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C24F0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406274D0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14076D370 (_CmDeviceClassesSubkeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceInterfaceEnabled @ 0x1405C2694 (_NtPlugPlayGetDeviceInterfaceEnabled.c)
 */

NTSTATUS __fastcall CmIsDeviceInterfaceEnabled(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v7.Length = 0LL;
  v7.Buffer = 0LL;
  result = RtlInitUnicodeStringEx(&v7, a2);
  if ( result >= 0 )
    return NtPlugPlayGetDeviceInterfaceEnabled(a1, &v7, a4);
  return result;
}
