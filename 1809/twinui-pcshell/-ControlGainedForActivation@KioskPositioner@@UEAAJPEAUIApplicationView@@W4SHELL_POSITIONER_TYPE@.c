/*
 * XREFs of ?ControlGainedForActivation@KioskPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180097500
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800806E0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1800983A0 (-HandleApplicationView@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?IsBackgroundActivation@KioskPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800988C8 (-IsBackgroundActivation@KioskPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18009A008 (-ShouldHandleView@KioskPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KioskPositioner::ControlGainedForActivation(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  KioskPositioner *v7; // rcx
  struct IApplicationView *v8; // rdx
  KioskPositioner *v9; // rcx
  const char *v10; // r9
  __int64 result; // rax
  struct IUnknown *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v7 = (KioskPositioner *)(a1 - 112);
  try
  {
    if ( KioskPositioner::ShouldHandleView(v7, a2) )
    {
      if ( KioskPositioner::IsBackgroundActivation(v9, v8, a4) )
      {
        result = 0LL;
      }
      else
      {
        v12 = *(struct IUnknown **)(a1 + 128);
        if ( v12 && (unsigned int)SHIsSameObject((struct IUnknown *)a2, v12) )
        {
          wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)(a1 + 128));
          result = 0LL;
        }
        else
        {
          if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v14) >= 0 && v14 )
            (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 48LL))(a2);
          else
            KioskPositioner::HandleApplicationView((KioskPositioner *)(a1 - 112), a2);
          result = 0LL;
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2CD,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)0x8000FFFFLL);
      result = 2147549183LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2EC,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v10);
  }
  return result;
}
