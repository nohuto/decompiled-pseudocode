/*
 * XREFs of ?SelectView@ViewGroup@@UEAAJPEAUIApplicationView@@W4ViewGroupSelectViewOptions@@@Z @ 0x180207EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindowEventDispatcherInternal@@@Z @ 0x1800FB2D4 (--4-$com_ptr_t@UIWindowEventDispatcherInternal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewGroup::SelectView(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  __int64 WindowForView; // r15
  __int64 v7; // rcx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    if ( a2 )
      WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
    else
      WindowForView = 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 168));
    if ( a2 )
    {
      v11 = *(__int64 **)(a1 + 176);
      v12 = (__int64 *)v11[1];
      v13 = v11;
      if ( *((_BYTE *)v12 + 25) )
        goto LABEL_20;
      do
      {
        if ( v12[4] >= (unsigned __int64)a2 )
        {
          v13 = v12;
          v12 = (__int64 *)*v12;
        }
        else
        {
          v12 = (__int64 *)v12[2];
        }
      }
      while ( !*((_BYTE *)v12 + 25) );
      if ( v13 == v11 || (unsigned __int64)a2 < v13[4] )
LABEL_20:
        v13 = *(__int64 **)(a1 + 176);
      if ( v13 == v11 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          283LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
          (const char *)0x80070490LL);
      if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 200), (struct IUnknown *)a2) )
      {
        if ( a1 != -168 )
          ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
        result = 0LL;
      }
      else if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 192), (struct IUnknown *)a2) )
      {
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)(a1 + 200));
        if ( a1 != -168 )
          ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
        result = 0LL;
      }
      else
      {
        v14 = 2LL;
        if ( a3 != 1 )
          v14 = 0LL;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(a1 + 72) + 56LL))(
                *(_QWORD *)(a1 + 72),
                *(unsigned int *)(a1 + 120),
                WindowForView,
                v14);
        if ( v15 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            307LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
            (const char *)(unsigned int)v15);
        wil::com_ptr_t<IWindowEventDispatcherInternal,wil::err_exception_policy>::operator=(
          (__int64 *)(a1 + 200),
          (__int64)a2);
        if ( a1 != -168 )
          ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
        result = 0LL;
      }
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 192);
      if ( v7 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 96LL))(v7, 1LL, 1LL);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            274LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
            (const char *)(unsigned int)v8);
        wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)(a1 + 192));
      }
      wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)(a1 + 200));
      *(_DWORD *)(a1 + 208) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 72) + 72LL))(
        *(_QWORD *)(a1 + 72),
        *(unsigned int *)(a1 + 120));
      if ( a1 != -168 )
        ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 168));
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x139,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroup.cpp",
                           v9);
  }
  return result;
}
