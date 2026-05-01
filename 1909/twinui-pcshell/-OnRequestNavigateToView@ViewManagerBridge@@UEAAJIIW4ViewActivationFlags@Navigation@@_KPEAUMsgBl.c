/*
 * XREFs of ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x1802A85E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800180B0 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180018134 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060518 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180291754 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A4CC8 (-DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z.c)
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A7B48 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 *     ?StartActivity@OnRequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKK@Z @ 0x1802AB1BC (-StartActivity@OnRequestNavigateToView@ViewManagerInteropTraceLogging@@QEAAXKKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::OnRequestNavigateToView(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct MsgBlob *a6)
{
  struct Windows::Foundation::Collections::IPropertySet *v10; // rax
  int v11; // eax
  int v12; // eax
  struct Windows::Foundation::Collections::IPropertySet *v14; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-1A0h]
  __int64 v16; // [rsp+40h] [rbp-198h]
  __int64 v17; // [rsp+48h] [rbp-190h]
  _QWORD v18[40]; // [rsp+50h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v17 = -2LL;
  v16 = a1;
  v15 = a2;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"OnRequestNavigateToView");
  v18[0] = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
  try
  {
    ViewManagerInteropTraceLogging::OnRequestNavigateToView::StartActivity(
      (ViewManagerInteropTraceLogging::OnRequestNavigateToView *)v18,
      a2,
      a3,
      a4);
    v10 = 0LL;
    v14 = 0LL;
    if ( a6 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      v11 = DeserializePropertySet(a6, &v14);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1158LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v11);
      v10 = v14;
    }
    if ( (a4 & 0x20) != 0 )
    {
      if ( !v10 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1166LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)0x80070057LL);
      v12 = ViewManagerBridge::OnRequestApplicationViewSwitcherOperation((ViewManagerBridge *)(a1 - 32), a2, a3, v10);
      if ( v12 >= 0 )
        goto LABEL_12;
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1167LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    }
    ViewEventDispatcher::ViewNavigationRequested(
      *(_QWORD *)(a1 + 48),
      a2,
      a3,
      a4,
      (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v10);
LABEL_12:
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18, 0);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v18[0] = &ViewManagerInteropTraceLogging::OnRequestNavigateToView::`vftable';
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  }
  catch ( ... )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(v16 + 72) + 112LL))(
      *(_QWORD *)(v16 + 72),
      v15,
      0LL,
      0LL,
      1);
  }
  return 0LL;
}
