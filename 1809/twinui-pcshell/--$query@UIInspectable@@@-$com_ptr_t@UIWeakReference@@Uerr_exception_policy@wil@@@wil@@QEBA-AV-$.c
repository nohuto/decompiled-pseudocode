/*
 * XREFs of ??$query@UIInspectable@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@1@XZ @ 0x180091A00
 * Callers:
 *     _lambda_617d626f0bf366f050e3b18ed68b910c_::operator() @ 0x1802AA5F4 (_lambda_617d626f0bf366f050e3b18ed68b910c_--operator().c)
 *     _lambda_6e44f5f72665425d0cc60b8992d9e369_::operator() @ 0x1802AA6E4 (_lambda_6e44f5f72665425d0cc60b8992d9e369_--operator().c)
 *     _lambda_f576b4b566fda4f991bbc7db3f4fe9dd_::operator() @ 0x1802AA930 (_lambda_f576b4b566fda4f991bbc7db3f4fe9dd_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
      5800LL,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180091A59LL);
  }
  return a2;
}
