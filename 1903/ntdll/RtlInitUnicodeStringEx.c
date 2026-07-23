/*
 * XREFs of RtlInitUnicodeStringEx @ 0x180028DF0
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180018A84 @ 0x180018A84 (sub_180018A84.c)
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 *     RtlGetFullPathName_UEx @ 0x1800291D0 (RtlGetFullPathName_UEx.c)
 *     RtlIsDosDeviceName_U @ 0x1800292C0 (RtlIsDosDeviceName_U.c)
 *     sub_18002934C @ 0x18002934C (sub_18002934C.c)
 *     sub_18002946C @ 0x18002946C (sub_18002946C.c)
 *     sub_180029CEC @ 0x180029CEC (sub_180029CEC.c)
 *     sub_18005A5EC @ 0x18005A5EC (sub_18005A5EC.c)
 *     sub_18006B63C @ 0x18006B63C (sub_18006B63C.c)
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     sub_180073374 @ 0x180073374 (sub_180073374.c)
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800832E0 (LdrGetKnownDllSectionHandle.c)
 *     RtlDosSearchPath_U @ 0x18008A1B0 (RtlDosSearchPath_U.c)
 *     sub_1800D11F4 @ 0x1800D11F4 (sub_1800D11F4.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D4B50 @ 0x1800D4B50 (sub_1800D4B50.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0BA0 (RtlSetImageMitigationPolicy.c)
 *     sub_1800E1C18 @ 0x1800E1C18 (sub_1800E1C18.c)
 *     sub_1800E1DF8 @ 0x1800E1DF8 (sub_1800E1DF8.c)
 *     sub_180110078 @ 0x180110078 (sub_180110078.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  unsigned __int64 v2; // rax
  USHORT v3; // ax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (PWCH)SourceString;
  if ( !SourceString )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0x7FFE )
  {
    v3 = 2 * v2;
    DestinationString->Length = v3;
    DestinationString->MaximumLength = v3 + 2;
    return 0;
  }
  return -1073741562;
}
