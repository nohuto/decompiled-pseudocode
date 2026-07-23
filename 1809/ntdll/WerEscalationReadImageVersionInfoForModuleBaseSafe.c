/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800560AC
 * Callers:
 *     LdrpRecordUnloadEvent @ 0x180055E8C (LdrpRecordUnloadEvent.c)
 *     WerEscalationLazyInit @ 0x1800DF484 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180056124 (WerEscalationReadImageVersionInfoForModuleBase.c)
 */

NTSTATUS __fastcall WerEscalationReadImageVersionInfoForModuleBaseSafe(PVOID BaseOfImage, int a2)
{
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v4; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v4), result >= 0) )
  {
    WerEscalationReadImageVersionInfoForModuleBase(BaseOfImage);
    return 0;
  }
  return result;
}
