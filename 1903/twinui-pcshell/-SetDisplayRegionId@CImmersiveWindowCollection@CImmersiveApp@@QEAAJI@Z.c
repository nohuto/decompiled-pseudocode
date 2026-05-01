/*
 * XREFs of ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x180060F5C
 * Callers:
 *     ?SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z @ 0x180060E50 (-SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z.c)
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180064770 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 * Callees:
 *     ?GetView@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@345@@Z @ 0x180036BE0 (-GetView@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisp.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B228 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertAtInternal@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEAAJIUDisplayRegionId@WindowingEnvironment@ApplicationModel@25@_N@Z @ 0x180061194 (-InsertAtInternal@-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windo.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$IVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@U?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180071D10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Implements@U-$I.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@25@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@@12@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@Internal@Windows@@$$QEAUpermission@?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@7Collections@Foundation@8@@Z @ 0x18008D45C (--$Make@V-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisp.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@V?$ObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@$00@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801464EC (-InternalRelease@-$ComPtr@V-$ObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationM.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId(
        CImmersiveApp::CImmersiveWindowCollection *this,
        unsigned int a2)
{
  __int64 *v4; // rsi
  __int64 *v5; // r14
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // r9
  _DWORD *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int View; // eax
  _DWORD *v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  _DWORD *v19; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v20[1] = -2LL;
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService();
  v4 = (__int64 *)*((_QWORD *)this + 21);
  v5 = &v4[*((_QWORD *)this + 22)];
  if ( v4 == v5 )
    return 0LL;
  while ( 1 )
  {
    v22 = 0LL;
    v6 = *v4;
    v7 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)*v4 + 40LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v8 = v7(v6, &GUID_3bf22d51_7679_4ce2_8bae_8b78613e83cc, &v22);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1F27,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v8,
        (int)v19);
    if ( !v22 )
      goto LABEL_11;
    v19 = 0LL;
    Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate const &,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::permission>(v20);
    v10 = (_DWORD *)v20[0];
    if ( !v20[0] )
      break;
    v20[0] = 0LL;
    v19 = v10;
    LOBYTE(v9) = 1;
    v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::InsertAtInternal(
            v10,
            0LL,
            a2,
            v9);
    v12 = v11;
    if ( v11 < 0 )
    {
      v17 = (unsigned int)v11;
      v18 = 7983LL;
      goto LABEL_18;
    }
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    View = Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,1,1,0>>::GetView(
             v19,
             &v23);
    v12 = View;
    if ( View < 0 )
    {
      v16 = 7986LL;
      goto LABEL_15;
    }
    View = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 88LL))(v22, v23);
    v12 = View;
    if ( View < 0 )
    {
      v16 = 7988LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)View,
        (int)v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v14 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>::Release(v14);
    }
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    if ( ++v4 == v5 )
      return 0LL;
  }
  v12 = -2147024882;
  v17 = 2147942414LL;
  v18 = 7982LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)v17,
    (int)v19);
LABEL_19:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::ObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits,1>>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  return v12;
}
