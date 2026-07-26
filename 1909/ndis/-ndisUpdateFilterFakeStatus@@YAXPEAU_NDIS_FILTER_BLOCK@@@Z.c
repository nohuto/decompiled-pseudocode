/*
 * XREFs of ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0018688
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0014CA4 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C001C4EC (-ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0028F10 (ndisIndicateInitialStateToFilter.c)
 *     ndisFilterXStateSetFlag @ 0x1C003F388 (ndisFilterXStateSetFlag.c)
 * Callees:
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 */

void __fastcall ndisUpdateFilterFakeStatus(struct _NDIS_FILTER_BLOCK *a1)
{
  char XState; // r8
  int v2; // edx

  XState = a1->XState;
  v2 = (XState & 1) != 0 ? -1071448033 : -1073741823;
  a1->FakeStatus = v2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      0xDu,
      0x4Au,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      XState,
      v2);
}
