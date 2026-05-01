/*
 * XREFs of ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x18011FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18002BF20 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18002C1C0 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationPresentationLayer@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationPresentationLayer@@@Z @ 0x180119A38 (--4-$ComPtr@UIApplicationPresentationLayer@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationPresenta.c)
 */

__int64 __fastcall CImmersiveApp::SetForceActiveWindowAppearance(CImmersiveApp *this, int a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12[2]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v13[3]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v12[1] = -2LL;
  v12[0] = 0LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IApplicationPresentationLayer>::operator=(v12, *((_QWORD *)this + 40));
  v5 = v12[0];
  LOBYTE(v6) = a2 != 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12[0] + 312LL))(v12[0], v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 2658LL;
    goto LABEL_5;
  }
  v7 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
         (CImmersiveApp *)((char *)this + 168),
         (struct APPLICATION_VIEW_DATA_UPDATE *)v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 2663LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v7);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    goto LABEL_12;
  }
  CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo((__int64)this + 168, v13, 1);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2668LL,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v10);
  v8 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
  return v8;
}
