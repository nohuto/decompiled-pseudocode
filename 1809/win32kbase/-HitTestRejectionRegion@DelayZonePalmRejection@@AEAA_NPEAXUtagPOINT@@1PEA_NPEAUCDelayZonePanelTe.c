/*
 * XREFs of ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C014FB60
 * Callers:
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C014FED0 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     PtInRect @ 0x1C003D634 (PtInRect.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C014FA58 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 *     WPP_RECORDER_SF_sd @ 0x1C0150AC4 (WPP_RECORDER_SF_sd.c)
 *     ApiSetIsProcessForeground @ 0x1C0164490 (ApiSetIsProcessForeground.c)
 */

bool __fastcall DelayZonePalmRejection::HitTestRejectionRegion(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        bool *a5,
        struct CDelayZonePanelTelemetryData *a6)
{
  char *v6; // r14
  bool v7; // bp
  char *v8; // rsi
  DelayZonePalmRejection *v12; // r13
  const char *v14; // rdx
  const char *v15; // rcx

  v6 = (char *)this + 72;
  v7 = 0;
  v8 = (char *)*((_QWORD *)this + 9);
  v12 = this;
  if ( v8 == (char *)this + 72 )
    return 0;
  while ( 1 )
  {
    LODWORD(this) = ((unsigned int)GetUserHandedness(this) != 0) + 1;
    if ( (*((_DWORD *)v8 + 23) & (unsigned int)this) == 0 )
      goto LABEL_11;
    if ( !v8[60] )
      break;
    if ( *((void **)v8 + 12) == a2 )
    {
      v7 = PtInRect((_DWORD *)v8 + 6, *(_QWORD *)&a4);
      goto LABEL_10;
    }
LABEL_11:
    v8 = *(char **)v8;
    if ( v8 == v6 )
      return v7;
  }
  if ( *((_DWORD *)v8 + 16) && !(unsigned int)ApiSetIsProcessForeground() )
    goto LABEL_11;
  v7 = CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion((CPalmRejectZoneInfo *)v8, a3, (struct tagRECT *)a6);
LABEL_10:
  if ( !v7 )
    goto LABEL_11;
  v14 = "false";
  v15 = "true";
  if ( !v8[60] )
    v15 = "false";
  LOBYTE(v14) = 4;
  WPP_RECORDER_SF_sd(
    *((_QWORD *)v12 + 14),
    (_DWORD)v14,
    13,
    32,
    (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids,
    (__int64)v15,
    *((_DWORD *)v8 + 14));
  *a5 = v8[60];
  return v7;
}
