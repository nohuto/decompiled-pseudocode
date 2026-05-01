/*
 * XREFs of ?v_SetCloak@CWinRTApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x1800625D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::v_SetCloak(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rdi
  _QWORD *v9; // rbx
  int v10; // ebx
  int v12; // [rsp+20h] [rbp-48h]
  _QWORD *v13; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v13 = 0LL;
  v6 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v7 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  v8 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    _InterlockedIncrement((volatile signed __int32 *)(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals
                                                    + 36));
    v6 = v7;
    v8 = (volatile signed __int32 *)v7;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v8 )
  {
    v9 = *(_QWORD **)(*(_QWORD *)(v6 + 48) + 744LL);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
    v13 = v9;
    if ( _InterlockedExchangeAdd(v8 + 9, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 72LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( v13 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD))(*v13 + 24LL))(
            v13,
            *(_QWORD *)(a1 + 208),
            a3,
            a2);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    v10 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL,
      v12);
  }
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 16LL))(v13, *v13);
  return (unsigned int)v10;
}
