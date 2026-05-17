/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18006DCAC
 * Callers:
 *     LdrpRecordUnloadEvent @ 0x18006DA8C (LdrpRecordUnloadEvent.c)
 *     WerEscalationLazyInit @ 0x1800DD0D0 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006DD68 (WerEscalationReadImageVersionInfoForModuleBase.c)
 */

__int64 __fastcall WerEscalationReadImageVersionInfoForModuleBaseSafe(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3, a1, 0LL, v6), (int)result >= 0) )
  {
    WerEscalationReadImageVersionInfoForModuleBase(a1, a3);
    return 0LL;
  }
  return result;
}
