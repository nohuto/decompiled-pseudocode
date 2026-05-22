/*
 * XREFs of ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x1800948C4
 * Callers:
 *     ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x1800959C0 (-OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@W.c)
 *     ?OnHomeGestureDetected@SpectrumListener@@AEAAJPEAUIInspectable@@PEAUIHomeGestureDetectedEventArgs@Internal@Mirage@Windows@@@Z @ 0x180095B10 (-OnHomeGestureDetected@SpectrumListener@@AEAAJPEAUIInspectable@@PEAUIHomeGestureDetectedEventArg.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x180095CA0 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800987A4 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180010A88 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@QEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x180093558 (--$_Emplace_reallocate@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInpu.c)
 *     ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z @ 0x1800943F0 (-LogMPCRawInputReport_@ISMTracing@@QEAAXPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::QueueInput(MPCRawInputProvider *this, struct InputInfo *a2)
{
  __int64 v4; // rcx
  ISMTracing *v5; // rcx
  char *v6; // rdx
  void *v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<ISMTracing>::get(v4, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::LogMPCRawInputReport_(v5, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  v6 = (char *)*((_QWORD *)this + 24);
  if ( *((char **)this + 25) == v6 )
  {
    std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>((const void **)this + 23, v6, a2);
  }
  else
  {
    memcpy_0(*((void **)this + 24), a2, 0x7F0uLL);
    *((_QWORD *)this + 24) += 2032LL;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v9);
  wil::details::SetEvent(*((wil::details **)this + 9), v7);
  return 0LL;
}
