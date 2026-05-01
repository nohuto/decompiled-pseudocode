/*
 * XREFs of ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x18021DADC
 * Callers:
 *     ?DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x180213F40 (-DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x180215950 (-IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_c3441874af9188b8377da12ab0198c01_::operator() @ 0x180212B40 (_lambda_c3441874af9188b8377da12ab0198c01_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18021454C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA-AW4.c)
 *     ?_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z@std@@@Z @ 0x18021EC1C (-_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXAEBUtagHostIdentifier@ViewEven.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_ChangePopupUIShowingCount(unsigned int *a1, __int64 a2, int a3)
{
  int v6; // ebx
  unsigned int v7; // eax
  const char *v8; // r9
  __int64 (__fastcall ***v9)(); // rdx
  __int16 v10; // [rsp+34h] [rbp-A4h]
  __int128 v11; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-90h] BYREF
  unsigned int *v13[4]; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+70h] [rbp-68h] BYREF
  __int128 v15; // [rsp+78h] [rbp-60h]
  __int64 (__fastcall ***v16)(); // [rsp+A8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  int v18; // [rsp+F0h] [rbp+18h] BYREF

  v18 = a3;
  v13[3] = (unsigned int *)-2LL;
  v12 = 1LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetCachedFeatureEnabledState((__int64)a1);
  LOBYTE(v10) = 3;
  LODWORD(v11) = 0;
  WORD2(v11) = v10;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    8664332LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v11,
    1,
    3);
  if ( !v12 )
    return 0LL;
  v13[0] = (unsigned int *)&v18;
  v13[1] = (unsigned int *)&v12;
  v13[2] = a1;
  *(_QWORD *)&v11 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v6 = lambda_c3441874af9188b8377da12ab0198c01_::operator()(v13, &v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B0,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  *(_QWORD *)&v11 = a1;
  *((_QWORD *)&v11 + 1) = v13;
  v14 = off_1803E2530;
  v15 = v11;
  v16 = &v14;
  try
  {
    v7 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 672LL))();
    ViewEventDispatcher::_ForEachTrueHost(a1, v7, &v14);
    if ( v16 )
    {
      v9 = &v14;
      LOBYTE(v9) = v16 != &v14;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v16)[4])(v16, v9);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4C1,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                           v8);
  }
  return 0LL;
}
