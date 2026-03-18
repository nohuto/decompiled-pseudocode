/*
 * XREFs of WdipSemOpenRegistryKey @ 0x14076C724
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x14076B588 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x14076B5DC (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x14076B788 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14076BA8C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14076BD10 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14076C124 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408EE7AC (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 */

NTSTATUS __fastcall WdipSemOpenRegistryKey(PCWSTR SourceString, void *a2, HANDLE *a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
