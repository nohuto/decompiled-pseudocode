/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008D9EC
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x180029270 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     _lambda_b5963e117fe1767c779e8f4655192291_::operator() @ 0x18002BF14 (_lambda_b5963e117fe1767c779e8f4655192291_--operator().c)
 *     _lambda_e3734e8a49c419fea61bf82ed4fde94a_::operator() @ 0x18002C188 (_lambda_e3734e8a49c419fea61bf82ed4fde94a_--operator().c)
 *     _lambda_c33ccc33460f714f139ac7c6d94dc43a_::operator() @ 0x180150844 (_lambda_c33ccc33460f714f139ac7c6d94dc43a_--operator().c)
 *     _lambda_417362b0a1391b76000680eec230619f_::operator() @ 0x1801A0904 (_lambda_417362b0a1391b76000680eec230619f_--operator().c)
 *     _lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::operator() @ 0x1801A0AAC (_lambda_f8d696b2e2b9ef5ca7bb243e22227a17_--operator().c)
 *     _lambda_921a5a526b2b3e27a0030faf56813293_::operator() @ 0x1801C57B8 (_lambda_921a5a526b2b3e27a0030faf56813293_--operator().c)
 *     _lambda_f8fc68a596a1d4698bf0d7673b0f23f8_::operator() @ 0x1801C5AB8 (_lambda_f8fc68a596a1d4698bf0d7673b0f23f8_--operator().c)
 *     _lambda_5945374297143300155349d30b4277af_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x180208F60 (_lambda_5945374297143300155349d30b4277af_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     _lambda_b1e75d3e314d3909b197b601af483277_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x18020900C (_lambda_b1e75d3e314d3909b197b601af483277_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     _lambda_3debc4ca9d8e656fb3713c45e37949b6_::operator() @ 0x18021F460 (_lambda_3debc4ca9d8e656fb3713c45e37949b6_--operator().c)
 *     _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator() @ 0x18021F630 (_lambda_ebd42d67d4ed24c24d65003e6952ebf6_--operator().c)
 *     _lambda_946b47fcad2e62ff0f8d349904161392_::operator() @ 0x180296774 (_lambda_946b47fcad2e62ff0f8d349904161392_--operator().c)
 *     _lambda_9f83fe393cfdaab87baa37a27426f58f_::operator() @ 0x180296840 (_lambda_9f83fe393cfdaab87baa37a27426f58f_--operator().c)
 *     _lambda_243107b6e7951c22bf872808b8683140_::operator() @ 0x1802A5D18 (_lambda_243107b6e7951c22bf872808b8683140_--operator().c)
 *     _lambda_b7a65526da0b0c1d1f69877e76cb9ec5_::operator() @ 0x1802A6318 (_lambda_b7a65526da0b0c1d1f69877e76cb9ec5_--operator().c)
 *     _lambda_c8d6b8e58017b711112620b136cf3b89_::operator() @ 0x1802B4964 (_lambda_c8d6b8e58017b711112620b136cf3b89_--operator().c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802C52A4 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x1802CFB80 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x1802D02E0 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 *     _lambda_7e6d277de2b049706e6768307ccc7deb_::operator() @ 0x1802D7E2C (_lambda_7e6d277de2b049706e6768307ccc7deb_--operator().c)
 *     _lambda_adedda421da4a00589298a86f7993fb7_::operator() @ 0x1802D7FD8 (_lambda_adedda421da4a00589298a86f7993fb7_--operator().c)
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator() @ 0x1802D818C (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--operator().c)
 *     ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x1803F4260 (-CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x1803F4F20 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18008D98C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  _DWORD *v2; // r8

  v2 = (_DWORD *)*((_QWORD *)a1 + 6);
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    memset_0(this, 0, 0x20uLL);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  return this;
}
