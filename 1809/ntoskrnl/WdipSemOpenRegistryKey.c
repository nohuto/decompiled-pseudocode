/*
 * XREFs of WdipSemOpenRegistryKey @ 0x140745978
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x140744820 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140744874 (WdipSemLoadConfigInfo.c)
 *     WdipSemLoadNextEndEvent @ 0x140744A38 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140744D30 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140744FA8 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x140745390 (WdipSemLoadNextScenario.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408B256C (WdipSemLoadLocalGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
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
