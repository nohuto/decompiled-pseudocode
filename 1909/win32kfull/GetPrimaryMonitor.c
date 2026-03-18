/*
 * XREFs of GetPrimaryMonitor @ 0x1C0113884
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPrimaryMonitor(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(GetDispInfo(a1, a2) + 96);
}
