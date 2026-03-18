/*
 * XREFs of ?SetCaptureState_RenderThread@CManipulation@@QEAAJW4CaptureState@@@Z @ 0x1801A621C
 * Callers:
 *     ?AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z @ 0x1801E4CEC (-AddActiveManipulation@InteractionSourceManager@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801E4F50 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801E567C (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1801A6D2C (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
 */

__int64 __fastcall CManipulation::SetCaptureState_RenderThread(CManipulation *a1)
{
  int RenderToManipulationMsgInfo; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  struct IMessageCallSendHost *v8; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v8);
  RenderToManipulationMsgInfo = CManipulation::_GetRenderToManipulationMsgInfo(a1, &v8, &v9);
  v4 = RenderToManipulationMsgInfo;
  if ( RenderToManipulationMsgInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, RenderToManipulationMsgInfo, 0x3B2u);
  }
  else
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)a1 + 8LL))(a1);
    v5 = CoreUICallSend(v8, &v9, 1LL, 9LL, 1, &unk_180276408);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x3BBu);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v8);
  return v4;
}
