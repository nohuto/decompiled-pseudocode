/*
 * XREFs of ?copy_to@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x18032C0EC
 * Callers:
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18032B9C0 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetValueAt@ActivationHints@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18032BE70 (-GetValueAt@ActivationHints@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
        5800LL,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
  }
  else
  {
    *a3 = 0LL;
  }
}
