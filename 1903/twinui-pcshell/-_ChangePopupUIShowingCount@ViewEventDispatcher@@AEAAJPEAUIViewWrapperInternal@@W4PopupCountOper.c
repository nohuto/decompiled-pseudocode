/*
 * XREFs of ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x180273488
 * Callers:
 *     ?DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x18026B100 (-DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x18026C2F0 (-IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003B8E0 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     _lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator() @ 0x180269B44 (_lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18026B528 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CUIPopupHelper@@@wil@@CA-AW4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_ChangePopupUIShowingCount(unsigned int *a1, __int64 a2, int a3)
{
  int v6; // ebx
  const char *v7; // r9
  __int64 (__fastcall ***v8)(); // rdx
  __int16 v9; // [rsp+34h] [rbp-A4h]
  __int128 v10; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-90h] BYREF
  unsigned int *v12[4]; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall **v13)(); // [rsp+70h] [rbp-68h] BYREF
  __int128 v14; // [rsp+78h] [rbp-60h]
  __int64 (__fastcall ***v15)(); // [rsp+A8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  int v17; // [rsp+F0h] [rbp+18h] BYREF

  v17 = a3;
  v12[3] = (unsigned int *)-2LL;
  v11 = 1LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetCachedFeatureEnabledState((__int64)a1);
  LOBYTE(v9) = 3;
  LODWORD(v10) = 0;
  WORD2(v10) = v9;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_CUIPopupHelper>::GetFeaturePropertyCache'::`2'::data,
    0x84350Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v10,
    1,
    3);
  if ( !v11 )
    return 0LL;
  v12[0] = (unsigned int *)&v17;
  v12[1] = (unsigned int *)&v11;
  v12[2] = a1;
  *(_QWORD *)&v10 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
  v6 = lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator()(v12, &v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x453,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  try
  {
    *(_QWORD *)&v10 = a1;
    *((_QWORD *)&v10 + 1) = v12;
    v13 = off_18044AA28;
    v14 = v10;
    v15 = &v13;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 680LL))(a2);
    if ( v15 )
    {
      v8 = &v13;
      LOBYTE(v8) = v15 != &v13;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v15)[4])(v15, v8);
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x464,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                           v7);
  }
  return 0LL;
}
