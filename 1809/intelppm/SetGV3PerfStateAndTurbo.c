/*
 * XREFs of SetGV3PerfStateAndTurbo @ 0x1C0007310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002E78 (WPP_RECORDER_SF_.c)
 *     IsTurboModeSupported @ 0x1C0003EC8 (IsTurboModeSupported.c)
 *     ProcLibTraceUnexpectedTurboDisable @ 0x1C00081C8 (ProcLibTraceUnexpectedTurboDisable.c)
 */

__int64 __fastcall SetGV3PerfStateAndTurbo(__int64 a1, __int16 a2, __int64 a3, char a4)
{
  BOOL v4; // ecx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h]

  v6 = __readmsr(0x199u);
  LOWORD(v6) = a2;
  v4 = 0;
  if ( a4 )
    v4 = BYTE4(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) == 0;
  HIDWORD(v6) = v4 | HIDWORD(v6) & 0xFFFFFFFE;
  __writemsr(0x199u, v6);
  return 0LL;
}
