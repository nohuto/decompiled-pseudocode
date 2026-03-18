/*
 * XREFs of LeaveCrit @ 0x1C00302F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 */

void __fastcall LeaveCrit(__int64 a1, __int64 a2, __int64 a3)
{
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(a1, a2, a3);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
}
