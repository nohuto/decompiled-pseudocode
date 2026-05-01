/*
 * XREFs of ?copy_to@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x1803ABA38
 * Callers:
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18007E230 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetValueAt@ActivationHints@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1803AB830 (-GetValueAt@ActivationHints@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::com_ptr_t<IUnknown,wil::err_exception_policy>::copy_to(
        __int64 (__fastcall ****a1)(_QWORD),
        __int64 a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v3)(_QWORD); // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a1;
  if ( v3 )
  {
    v4 = (**v3)(v3);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        5421LL,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
  }
  else
  {
    *a3 = 0LL;
  }
}
