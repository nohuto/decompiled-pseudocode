/*
 * XREFs of ??$query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A8E94
 * Callers:
 *     _lambda_35104b4402ce80345145342a1fa70c6a_::operator() @ 0x180321F14 (_lambda_35104b4402ce80345145342a1fa70c6a_--operator().c)
 *     _lambda_f1d11d7d8a6e601719ea3c807b44b3d7_::operator() @ 0x180322190 (_lambda_f1d11d7d8a6e601719ea3c807b44b3d7_--operator().c)
 *     _lambda_f9e3bc53e319d6941e1b16373eb1ffba_::operator() @ 0x180322224 (_lambda_f9e3bc53e319d6941e1b16373eb1ffba_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<IInspectable>(
        _QWORD *a1,
        _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)*a1 + 24LL))(
         *a1,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         a2);
  if ( v3 < 0 )
    goto LABEL_6;
  if ( !*a2 )
    v3 = -2147023728;
  if ( v3 < 0 )
  {
LABEL_6:
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5421LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800A8EEDLL);
  }
  return a2;
}
