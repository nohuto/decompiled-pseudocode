/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008B0EC
 * Callers:
 *     _lambda_06d64a626025f4db47aab5f81b5aa1b0_::operator() @ 0x180048824 (_lambda_06d64a626025f4db47aab5f81b5aa1b0_--operator().c)
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x1800539C0 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     _lambda_8bf19a67da9349d708dd7efffc5e2d17_::operator() @ 0x18005B004 (_lambda_8bf19a67da9349d708dd7efffc5e2d17_--operator().c)
 *     _lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_::operator() @ 0x18005DD10 (_lambda_5b180c0ca92e82d68f6c8a12cad9fd8b_--operator().c)
 *     _lambda_c95d809369eb2a01accf8ae73ccd45ab_::operator() @ 0x180127270 (_lambda_c95d809369eb2a01accf8ae73ccd45ab_--operator().c)
 *     _lambda_417362b0a1391b76000680eec230619f_::operator() @ 0x180171784 (_lambda_417362b0a1391b76000680eec230619f_--operator().c)
 *     _lambda_f8d696b2e2b9ef5ca7bb243e22227a17_::operator() @ 0x18017192C (_lambda_f8d696b2e2b9ef5ca7bb243e22227a17_--operator().c)
 *     _lambda_3debc4ca9d8e656fb3713c45e37949b6_::operator() @ 0x1801C7BDC (_lambda_3debc4ca9d8e656fb3713c45e37949b6_--operator().c)
 *     _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::operator() @ 0x1801C7DAC (_lambda_ebd42d67d4ed24c24d65003e6952ebf6_--operator().c)
 *     _lambda_414fd3367f2a1081b25736157ddb3c4d_::operator() @ 0x180240540 (_lambda_414fd3367f2a1081b25736157ddb3c4d_--operator().c)
 *     _lambda_946b47fcad2e62ff0f8d349904161392_::operator() @ 0x1802407E4 (_lambda_946b47fcad2e62ff0f8d349904161392_--operator().c)
 *     _lambda_17e5788b5f1f3671ca96ac0fccb032fc_::operator() @ 0x18024F300 (_lambda_17e5788b5f1f3671ca96ac0fccb032fc_--operator().c)
 *     _lambda_6e3ab6272f90947ba1cd229626024096_::operator() @ 0x18024F564 (_lambda_6e3ab6272f90947ba1cd229626024096_--operator().c)
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x180276240 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180276930 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 *     _lambda_a3ced70d1476e93ea420f346718bf2f6_::operator() @ 0x18027F080 (_lambda_a3ced70d1476e93ea420f346718bf2f6_--operator().c)
 *     _lambda_bb329e9869818a924204dbfd8ac58224_::operator() @ 0x18027F22C (_lambda_bb329e9869818a924204dbfd8ac58224_--operator().c)
 *     ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18038E510 (-CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ.c)
 *     ?FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x18038F1D0 (-FinishSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18008B08C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 */

wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
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
