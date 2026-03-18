/*
 * XREFs of GetPrimaryMonitor @ 0x1C012D1D4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPrimaryMonitor(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(GetDispInfo(a1, a2) + 96);
}
