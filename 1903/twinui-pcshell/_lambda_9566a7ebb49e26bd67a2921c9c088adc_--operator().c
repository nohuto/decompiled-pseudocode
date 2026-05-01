/*
 * XREFs of _lambda_9566a7ebb49e26bd67a2921c9c088adc_::operator() @ 0x1801D320C
 * Callers:
 *     wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator() @ 0x1801D3290 (wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9566a7ebb49e26bd67a2921c9c088adc_::operator()(
        int (__fastcall *****a1)(_QWORD, GUID *, __int64 *))
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v2)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = **a1;
  v2 = **v1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  if ( v2(v1, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v4) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
}
