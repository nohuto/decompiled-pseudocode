/*
 * XREFs of ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C001C4EC
 * Callers:
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001C33C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0018688 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

unsigned __int8 __fastcall ndisFilterXStateClearFlag(struct _NDIS_FILTER_BLOCK *a1)
{
  bool v1; // zf

  v1 = (a1->XState & 0xFE) == 0;
  a1->XState &= ~1u;
  if ( v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        13,
        77,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        (char)a1);
    return 1;
  }
  else
  {
    ndisUpdateFilterFakeStatus(a1);
    return 0;
  }
}
