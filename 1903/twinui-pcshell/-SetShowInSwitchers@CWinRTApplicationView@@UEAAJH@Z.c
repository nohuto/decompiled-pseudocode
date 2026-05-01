/*
 * XREFs of ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x18001A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x18001A934 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIPrivilegedOperationsConsumer@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x180029850 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::SetShowInSwitchers(RTL_SRWLOCK *this, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rdi
  _QWORD v10[3]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int8 v11[4]; // [rsp+48h] [rbp-28h] BYREF
  int v12; // [rsp+4Ch] [rbp-24h]
  BOOL v13; // [rsp+50h] [rbp-20h]
  LPVOID pv[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+40h]

  v10[1] = -2LL;
  v16 = 0LL;
  v3 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v4 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  v5 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    _InterlockedIncrement((volatile signed __int32 *)(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals
                                                    + 36));
    v3 = v4;
    v5 = (volatile signed __int32 *)v4;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v3 + 48);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 236));
      v16 = v6;
    }
    if ( _InterlockedExchangeAdd(v5 + 9, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 72LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v7 = v16;
  if ( v16 )
    v7 = v16 + 136;
  AcquireSRWLockExclusive(this + 6);
  v10[2] = this + 6;
  if ( (a2 != 0) != LOBYTE(this[27].Ptr) )
  {
    LOBYTE(this[27].Ptr) = a2 != 0;
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    if ( (int)CWinRTApplicationView::GetViewId((CWinRTApplicationView *)&this[2], (unsigned __int16 **)pv) >= 0 )
    {
      GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(v10);
      v9 = v10[0];
      if ( v10[0] )
      {
        v13 = a2 != 0;
        *(_DWORD *)v11 = 4;
        v12 = 1397960752;
        ApplicationViewManagement::CPersistence::_PersistData(
          (ApplicationViewManagement::CPersistence *)(v10[0] + 40LL),
          (const unsigned __int16 *)pv[0],
          L"ShowInSwitchers",
          v11,
          0xCu);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v9);
      }
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD, _QWORD))(*(_QWORD *)v7 + 168LL))(
        v7,
        this,
        11 - (unsigned int)(a2 != 0),
        0LL);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  if ( this != (RTL_SRWLOCK *)-48LL )
    ReleaseSRWLockExclusive(this + 6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0LL;
}
