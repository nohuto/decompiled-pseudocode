/*
 * XREFs of CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&___ptr64_::Invoke @ 0x18006AA30
 * Callers:
 *     <none>
 * Callees:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800529E0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56______ptr64_::Invoke(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  int v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 112LL) + 408LL))(*(_QWORD *)(a1 + 48) + 112LL);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    if ( *(_QWORD *)(v4 + 176) )
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(v4 + 168) + 32LL))(**(_QWORD **)(v4 + 168), 0LL);
    v6 = 8;
    v7 = v3;
    CImmersiveApp::_ScheduleApplicationNotifications(
      *(CImmersiveApp **)(a1 + 48),
      (const struct APP_CHANGE_INFO *const)&v6,
      1uLL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
