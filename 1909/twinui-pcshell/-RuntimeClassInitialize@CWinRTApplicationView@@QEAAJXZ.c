/*
 * XREFs of ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x180040920
 * Callers:
 *     ?AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@@Z @ 0x1800571A0 (-AddWinRTApplicationView@CApplicationViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@.c)
 * Callees:
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x180032BE0 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x18003D8BC (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___ @ 0x18003F800 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_0067f30f54eb0de3635ee.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::RuntimeClassInitialize(CWinRTApplicationView *this)
{
  int ViewId; // eax
  unsigned int v3; // ebx
  HRESULT v4; // eax
  HRESULT v5; // eax
  __int64 v7; // rdx
  LPVOID pv[4]; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  pv[3] = (LPVOID)-2LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  ViewId = CWinRTApplicationView::GetViewId((CWinRTApplicationView *)((char *)this + 16), (unsigned __int16 **)pv);
  v3 = ViewId;
  if ( ViewId < 0 )
  {
    v7 = 35LL;
  }
  else
  {
    string = 0LL;
    v4 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &string);
    if ( v4 < 0 )
    {
      RaiseException(v4, 1u, 0, 0LL);
      JUMPOUT(0x1800FF2F9LL);
    }
    ViewId = RoGetActivationFactory(string, &GUID_d81e96f1_a89c_417e_9335_59531026309d, (char *)this + 240);
    v3 = ViewId;
    if ( ViewId < 0 )
    {
      v7 = 37LL;
    }
    else
    {
      string = 0LL;
      v5 = WindowsCreateStringReference(
             L"Windows.Internal.StateRepository.ApplicationProperty",
             0x34u,
             &hstringHeader,
             &string);
      if ( v5 < 0 )
      {
        RaiseException(v5, 1u, 0, 0LL);
        JUMPOUT(0x1800FF313LL);
      }
      ViewId = RoGetActivationFactory(string, &GUID_7fe36c7d_c0d2_4ed2_970c_95f671367f20, (char *)this + 248);
      v3 = ViewId;
      if ( ViewId < 0 )
      {
        v7 = 38LL;
      }
      else
      {
        hstringHeader.Reserved.Reserved1 = pv;
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = this;
        GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___((__int64)&hstringHeader);
        ViewId = CApplicationViewBase::RuntimeClassInitialize(this);
        v3 = ViewId;
        if ( ViewId >= 0 )
          goto LABEL_7;
        v7 = 50LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)ViewId,
    (int)pv[0]);
LABEL_7:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v3;
}
