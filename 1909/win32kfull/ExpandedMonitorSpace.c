/*
 * XREFs of ExpandedMonitorSpace @ 0x1C01E569C
 * Callers:
 *     GetHimetricScaleForMonitor @ 0x1C01E6D84 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E78B8 (VirtualizeMultiMonDigitizerSize.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C0035A70 (ExpandMonitorSpaceVertex.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 */

__int64 __fastcall ExpandedMonitorSpace(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int16 v4; // di
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int16 DpiForSystem; // bx
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)(*(_QWORD *)(GetDispInfo(a1, a2) + 96) + 40LL);
  v4 = *(_WORD *)(v3 + 66);
  DpiForSystem = GetDpiForSystem(v5, v3, v6);
  v9 = *(_OWORD *)(*gpDispInfo + 24LL);
  *a1 = ExpandMonitorSpaceVertex(DpiForSystem, v4, *(_QWORD *)(*gpDispInfo + 24LL));
  result = ExpandMonitorSpaceVertex(DpiForSystem, v4, *((__int64 *)&v9 + 1));
  a1[1] = result;
  return result;
}
