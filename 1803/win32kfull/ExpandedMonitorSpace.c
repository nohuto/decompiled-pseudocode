/*
 * XREFs of ExpandedMonitorSpace @ 0x1C01ADC14
 * Callers:
 *     GetHimetricScaleForMonitor @ 0x1C01AF4C4 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01AFFA0 (VirtualizeMultiMonDigitizerSize.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00738F4 (ExpandMonitorSpaceVertex.c)
 */

__int64 __fastcall ExpandedMonitorSpace(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // di
  unsigned __int16 DpiForSystem; // bx
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h]

  v5 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96) + 40LL) + 66LL);
  DpiForSystem = GetDpiForSystem();
  v8 = *(_OWORD *)(*gpDispInfo + 24LL);
  *a1 = ExpandMonitorSpaceVertex(DpiForSystem, v5, *(_QWORD *)(*gpDispInfo + 24LL));
  result = ExpandMonitorSpaceVertex(DpiForSystem, v5, *((__int64 *)&v8 + 1));
  a1[1] = result;
  return result;
}
