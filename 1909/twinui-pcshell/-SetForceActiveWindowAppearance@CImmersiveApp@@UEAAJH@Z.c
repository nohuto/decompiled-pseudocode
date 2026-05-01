/*
 * XREFs of ?SetForceActiveWindowAppearance@CImmersiveApp@@UEAAJH@Z @ 0x180168860
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18003A088 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18003A310 (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18005066C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
  Microsoft::WRL::ComPtr<IUnknown>::operator=(v12, *((_QWORD *)this + 44));
  v5 = v12[0];
  LOBYTE(v6) = a2 != 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12[0] + 336LL))(v12[0], v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 2671LL;
    goto LABEL_5;
  }
  v7 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
         (CImmersiveApp *)((char *)this + 200),
         (struct APPLICATION_VIEW_DATA_UPDATE *)v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 2676LL;
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
  CImmersiveApp::CImmersiveWindowCollection::UpdateWindowsWithNewInfo((__int64)this + 200, v13, 1);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA79,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v10);
  v8 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
  return v8;
}
