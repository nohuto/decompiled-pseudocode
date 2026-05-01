/*
 * XREFs of ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x180029A90
 * Callers:
 *     <none>
 * Callees:
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x180029D0C (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A970 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ChainInterface.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A9D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18002AA2C (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18003B600 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800EF81C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMultitaskingViewElementBase@@UIObservableObjectArrayChanged@@UIVirtualDesktopContainerElement@@UIScrollableElement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18012C510 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCMul_ea_18012C510.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::SetShowInSwitchers(RTL_SRWLOCK *this, int a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // r14
  _QWORD *v5; // rsi
  _QWORD *v6; // r10
  volatile int *v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int8 v13[4]; // [rsp+38h] [rbp-30h] BYREF
  int v14; // [rsp+3Ch] [rbp-2Ch]
  BOOL v15; // [rsp+40h] [rbp-28h]
  LPVOID pv[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+38h]
  __int64 v19; // [rsp+B0h] [rbp+48h] BYREF
  RTL_SRWLOCK *v20; // [rsp+B8h] [rbp+50h]

  v17 = 0LL;
  v3 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v4 = 0LL;
  v5 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
    v3 = v6;
    v4 = v6;
    v5 = v6;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v8 = v5;
  if ( v4 )
  {
    v9 = v3[6];
    if ( v9 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewElementBase,IObservableObjectArrayChanged,IVirtualDesktopContainerElement,IScrollableElement>::AddRef(v3[6]);
      v17 = v9;
      v8 = v5;
    }
  }
  if ( v8 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v5 + 36), v7) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 72LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v10 = v17;
  if ( v17 )
    v10 = v17 + 136;
  AcquireSRWLockExclusive(this + 6);
  v20 = this + 6;
  if ( (a2 != 0) != LOBYTE(this[27].Ptr) )
  {
    LOBYTE(this[27].Ptr) = a2 != 0;
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    if ( (int)CWinRTApplicationView::GetViewId((CWinRTApplicationView *)&this[2], (unsigned __int16 **)pv) >= 0 )
    {
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v19);
      v11 = v19;
      if ( v19 )
      {
        v15 = a2 != 0;
        *(_DWORD *)v13 = 4;
        v14 = 1397960752;
        ApplicationViewManagement::CPersistence::_PersistData(
          (ApplicationViewManagement::CPersistence *)(v19 + 40),
          (const unsigned __int16 *)pv[0],
          L"ShowInSwitchers",
          v13,
          0xCu);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>::Release(v11);
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD, _QWORD))(*(_QWORD *)v10 + 168LL))(
        v10,
        this,
        11 - (unsigned int)(a2 != 0),
        0LL);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  if ( this != (RTL_SRWLOCK *)-48LL )
    ReleaseSRWLockExclusive(this + 6);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
