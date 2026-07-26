/*
 * XREFs of ?ndisUpdateMiniportFakeStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018700
 * Callers:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0014CA4 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisMSwapOpenHandlers @ 0x1C001BD5C (ndisMSwapOpenHandlers.c)
 *     ndisMiniportXStateClearFlag @ 0x1C001C54C (ndisMiniportXStateClearFlag.c)
 * Callees:
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 */

void __fastcall ndisUpdateMiniportFakeStatus(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char XState; // al
  int v2; // edx
  char v3[4]; // [rsp+38h] [rbp-10h]

  XState = a1->XState;
  v2 = -1073741823;
  if ( (XState & 4) != 0 )
  {
    v2 = -1071448017;
  }
  else if ( (XState & 2) != 0 )
  {
    v2 = -1071448033;
  }
  else if ( (XState & 1) != 0 )
  {
    v2 = -1073676275;
  }
  a1->FakeStatus = v2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v3 = v2;
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      0xDu,
      0x4Bu,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      XState,
      *(_DWORD *)v3);
  }
}
