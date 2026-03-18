/*
 * XREFs of ExpandedMonitorSpace @ 0x1C01E581C
 * Callers:
 *     GetHimetricScaleForMonitor @ 0x1C01E6F04 (GetHimetricScaleForMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E7A38 (VirtualizeMultiMonDigitizerSize.c)
 * Callees:
 *     ExpandMonitorSpaceVertex @ 0x1C0094D40 (ExpandMonitorSpaceVertex.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 */

__int64 __fastcall ExpandedMonitorSpace(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int16 v4; // di
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 DpiForSystem; // bx
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)(*(_QWORD *)(GetDispInfo(a1, a2) + 96) + 40LL);
  v4 = *(_WORD *)(v3 + 66);
  DpiForSystem = GetDpiForSystem(v5, v3, v6, v7);
  v10 = *(_OWORD *)(*gpDispInfo + 24LL);
  *a1 = ExpandMonitorSpaceVertex(DpiForSystem, v4, *(_QWORD *)(*gpDispInfo + 24LL));
  result = ExpandMonitorSpaceVertex(DpiForSystem, v4, *((__int64 *)&v10 + 1));
  a1[1] = result;
  return result;
}
