/*
 * XREFs of SmpSaveRegistryValue @ 0x1400098E8
 * Callers:
 *     SmpConfigureOneTimeExecute @ 0x1400095F0 (SmpConfigureOneTimeExecute.c)
 *     SmpConfigureSubSystems @ 0x1400097E0 (SmpConfigureSubSystems.c)
 *     SmpConfigureDosDevices @ 0x1400098C0 (SmpConfigureDosDevices.c)
 *     SmpConfigureExistingPageFiles @ 0x14000A1E0 (SmpConfigureExistingPageFiles.c)
 *     SmpConfigureExcludeKnownDlls @ 0x140012540 (SmpConfigureExcludeKnownDlls.c)
 *     SmpConfigureExecute @ 0x1400125C0 (SmpConfigureExecute.c)
 *     SmpConfigureFileRenames @ 0x140012610 (SmpConfigureFileRenames.c)
 * Callees:
 *     SmpSaveRegistryValue_U @ 0x140009DF0 (SmpSaveRegistryValue_U.c)
 */

__int64 __fastcall SmpSaveRegistryValue(__int64 a1, const WCHAR *a2, const WCHAR *a3, unsigned int a4, __int64 a5)
{
  struct _UNICODE_STRING *v8; // r8
  struct _UNICODE_STRING v10; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  v8 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(&v10, a3);
    v8 = &v10;
  }
  return SmpSaveRegistryValue_U(a1, &DestinationString, v8, a4, a5);
}
