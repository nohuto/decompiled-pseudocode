/*
 * XREFs of ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18004202C
 * Callers:
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18003F580 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x1800401F8 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x180041F98 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CCCF4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x1801CE8FC (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID.c)
 *     ?BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z @ 0x180235A00 (-BeginInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComposition::GetAttachedChannel(CComposition *this, unsigned int a2, struct CChannelContext **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a2 < 0x10000
    && a2 < *((_DWORD *)this + 88)
    && (this = *(CComposition **)(*((_QWORD *)this + 41) + 8LL * a2)) != 0LL )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    *a3 = this;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x8A7u, 0LL);
  }
  return v3;
}
