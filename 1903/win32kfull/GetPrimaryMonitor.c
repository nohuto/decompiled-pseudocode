/*
 * XREFs of GetPrimaryMonitor @ 0x1C0139884
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPrimaryMonitor(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(GetDispInfo(a1, a2) + 96);
}
