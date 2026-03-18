/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x1C002FDB4
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0069D10 (VidSchiCheckNodeTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00C6ED8 (VidSchiPrepareToResetEngine.c)
 *     VidSchReportAdapter @ 0x1C00C8AC0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00C9070 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00CA708 (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 616);
  if ( a2 < *(_DWORD *)(a1 + 688) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 8LL);
}
