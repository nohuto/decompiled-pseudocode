/*
 * XREFs of ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C014F790
 * Callers:
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C014FA58 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     EngMulDiv @ 0x1C0039AE0 (EngMulDiv.c)
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 */

__int64 __fastcall CPalmRejectZoneInfo::ConvertDipsToScreenSpaceUnits(
        CPalmRejectZoneInfo *this,
        struct tagPOINT a2,
        INT a3)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r11d
  __int64 i; // r10
  __int64 v7; // rcx

  v4 = (unsigned __int64)a2;
  v5 = 0;
  for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
  {
    v7 = *(_QWORD *)(i + 40);
    if ( (*(_DWORD *)(v7 + 24) & 1) != 0 && PtInRect((_DWORD *)(v7 + 28), v4) )
      return (unsigned int)EngMulDiv(a3, *(unsigned __int16 *)(i + 224), 96);
  }
  return v5;
}
