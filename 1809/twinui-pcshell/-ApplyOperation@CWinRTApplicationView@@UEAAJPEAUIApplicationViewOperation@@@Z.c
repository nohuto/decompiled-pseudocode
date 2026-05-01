/*
 * XREFs of ?ApplyOperation@CWinRTApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18005D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800EF81C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWinRTApplicationView::ApplyOperation(
        CWinRTApplicationView *this,
        struct IApplicationViewOperation *a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  _QWORD *v6; // rdi
  _QWORD *v7; // r10
  volatile int *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v17; // [rsp+70h] [rbp+40h]
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  v17 = 0LL;
  v4 = 0LL;
  AcquireSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  v5 = 0LL;
  v6 = 0LL;
  if ( GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals);
    v4 = v7;
    v5 = v7;
    v6 = v7;
  }
  ReleaseSRWLockShared(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
  if ( v5 )
  {
    v9 = v4[6];
    v10 = *(_QWORD *)(v9 + 720);
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(v9 + 720));
    v17 = v10;
  }
  if ( v6 )
  {
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v6 + 36), v8) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 72LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( !v17 )
  {
    v11 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL);
    goto LABEL_20;
  }
  v18 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
          v17,
          &GUID_9886efb0_afb3_4a35_b381_329935b32d5a,
          &v18);
  v11 = v12;
  if ( v12 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationViewOperation *))(*(_QWORD *)v18 + 32LL))(
            v18,
            *((_QWORD *)this + 26),
            a2);
    v11 = v12;
    if ( v12 >= 0 )
      goto LABEL_18;
    v13 = 405LL;
  }
  else
  {
    v13 = 404LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)v12);
LABEL_18:
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
LABEL_20:
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return v11;
}
