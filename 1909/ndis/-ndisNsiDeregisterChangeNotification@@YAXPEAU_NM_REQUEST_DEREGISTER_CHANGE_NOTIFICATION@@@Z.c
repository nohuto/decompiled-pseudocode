/*
 * XREFs of ?ndisNsiDeregisterChangeNotification@@YAXPEAU_NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C01144B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisNsiDeregisterChangeNotification(struct _NM_REQUEST_DEREGISTER_CHANGE_NOTIFICATION *a1)
{
  char v1; // bl

  v1 = (char)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      136,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        22,
        137,
        (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
        v1);
  }
}
