/*
 * XREFs of ExpandedMonitorSpace @ 0x1C01D0CAC
 * Callers:
 *     GetHimetricScaleForMonitor @ 0x1C01D2320 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01D2E08 (VirtualizeMultiMonDigitizerSize.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C001C9C4 (ExpandMonitorSpaceVertex.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 */

__int64 __fastcall ExpandedMonitorSpace(__int64 *a1, __int64 a2)
{
  unsigned __int16 v3; // di
  unsigned __int16 DpiForSystem; // bx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h]

  v3 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(a1, a2) + 96) + 40LL) + 66LL);
  DpiForSystem = GetDpiForSystem();
  v6 = *(_OWORD *)(*gpDispInfo + 24LL);
  *a1 = ExpandMonitorSpaceVertex(DpiForSystem, v3, *(_QWORD *)(*gpDispInfo + 24LL));
  result = ExpandMonitorSpaceVertex(DpiForSystem, v3, *((__int64 *)&v6 + 1));
  a1[1] = result;
  return result;
}
