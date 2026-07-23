/*
 * XREFs of MmGetSystemRoutineAddress @ 0x1406E39B0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     MiMarkKernelCfgTarget @ 0x1401351A8 (MiMarkKernelCfgTarget.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140653F20 (RtlUnicodeStringToAnsiString.c)
 *     RtlFindExportedRoutineByName @ 0x14067ABD0 (RtlFindExportedRoutineByName.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  const UNICODE_STRING *v2; // rdx
  PVOID ExportedRoutineByName; // rbx
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v2 = SystemRoutineName;
  DestinationString.Buffer = 0LL;
  while ( RtlUnicodeStringToAnsiString(&DestinationString, v2, 1u) < 0 )
  {
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    v2 = SystemRoutineName;
  }
  ExportedRoutineByName = RtlFindExportedRoutineByName(PsNtosImageBase, DestinationString.Buffer);
  if ( !ExportedRoutineByName )
    ExportedRoutineByName = RtlFindExportedRoutineByName(PsHalImageBase, DestinationString.Buffer);
  RtlFreeAnsiString((PUNICODE_STRING)&DestinationString);
  if ( ExportedRoutineByName && (int)MiMarkKernelCfgTarget() < 0 )
    return 0LL;
  else
    return ExportedRoutineByName;
}
