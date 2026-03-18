/*
 * XREFs of ?SetAutoReset_RenderThread@CManipulation@@QEAAJ_N@Z @ 0x1801E1B38
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x18021DDA8 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z @ 0x1801E27C8 (-_GetRenderToManipulationMsgInfo@CManipulation@@AEAAJPEAPEAUIMessageCallSendHost@@PEA_K@Z.c)
 */

__int64 __fastcall CManipulation::SetAutoReset_RenderThread(CManipulation *this)
{
  signed int RenderToManipulationMsgInfo; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  CManipulation *v10; // [rsp+40h] [rbp-18h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v11);
  RenderToManipulationMsgInfo = CManipulation::_GetRenderToManipulationMsgInfo(this, &v11, &v12);
  v4 = RenderToManipulationMsgInfo;
  if ( RenderToManipulationMsgInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, RenderToManipulationMsgInfo, 0x3D0u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(CManipulation *))(*(_QWORD *)this + 8LL))(this);
    v10 = this;
    LODWORD(v9) = 1;
    LOWORD(v8) = 2;
    v5 = CoreUICallSend(v11, &v12, 1LL, 10LL, v8, &unk_1802B1184, (unsigned int)&v10, v9);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x3D9u, 0LL);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v11);
  return v4;
}
