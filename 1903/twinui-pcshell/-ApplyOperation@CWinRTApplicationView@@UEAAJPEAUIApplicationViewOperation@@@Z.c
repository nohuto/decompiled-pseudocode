/*
 * XREFs of ?ApplyOperation@CWinRTApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x180061330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::ApplyOperation(
        CWinRTApplicationView *this,
        struct IApplicationViewOperation *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // rdx
  _QWORD v13[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+78h] [rbp+38h]

  v13[1] = -2LL;
  v15 = 0LL;
  v4 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v5 = GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals;
  v6 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    _InterlockedIncrement((volatile signed __int32 *)(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals
                                                    + 36));
    v4 = v5;
    v6 = (volatile signed __int32 *)v5;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v6 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v4 + 48) + 744LL);
    v13[2] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v13[3] = 0LL;
    v15 = v7;
    if ( _InterlockedExchangeAdd(v6 + 9, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 72LL))(v6, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( !v15 )
  {
    v9 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19C,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL,
      v13[0]);
    goto LABEL_12;
  }
  v13[0] = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v15)(
         v15,
         &GUID_9886efb0_afb3_4a35_b381_329935b32d5a,
         v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 414LL;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IApplicationViewOperation *))(*(_QWORD *)v13[0] + 32LL))(
           v13[0],
           *((_QWORD *)this + 26),
           a2);
    v9 = v8;
    if ( v8 >= 0 )
      goto LABEL_10;
    v12 = 415LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v8,
    v13[0]);
LABEL_10:
  v10 = v13[0];
  if ( v13[0] )
  {
    v13[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_12:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v9;
}
