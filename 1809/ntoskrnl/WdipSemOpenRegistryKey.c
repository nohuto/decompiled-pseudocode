/*
 * XREFs of WdipSemOpenRegistryKey @ 0x1407447A8
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x140743650 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1407436A4 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x140743868 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140743B60 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140743DD8 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1407441C0 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408B132C (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall WdipSemOpenRegistryKey(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  if ( !SourceString || !a3 )
    return -1073741811;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwOpenKey(a3, 0xF003Fu, &ObjectAttributes);
}
