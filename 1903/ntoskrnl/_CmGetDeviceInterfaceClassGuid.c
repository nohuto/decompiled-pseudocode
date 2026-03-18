/*
 * XREFs of _CmGetDeviceInterfaceClassGuid @ 0x1406259E4
 * Callers:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140625764 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiSwCompleteCreate @ 0x140720418 (PiSwCompleteCreate.c)
 *     IopProcessSetInterfaceState @ 0x140731AA8 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 *     _CmGetDeviceInterfaceClassGuidString @ 0x140625A5C (_CmGetDeviceInterfaceClassGuidString.c)
 */

int __fastcall CmGetDeviceInterfaceClassGuid(__int64 a1, __int64 a2, GUID *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[40]; // [rsp+30h] [rbp-68h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = CmGetDeviceInterfaceClassGuidString(a1, a2, SourceString);
  if ( result >= 0 )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, SourceString);
    if ( result >= 0 )
      return RtlGUIDFromString(&DestinationString, a3);
  }
  return result;
}
