/*
 * XREFs of ?UninitializeAndTerminateCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x18023AECC
 * Callers:
 *     _lambda_fac38c699c8bb63e0b9dd6c10e48dd3a_::_lambda_invoker_cdecl_ @ 0x18022DD10 (_lambda_fac38c699c8bb63e0b9dd6c10e48dd3a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::UninitializeAndTerminateCoreUiMessageLoop(ViewManagerBridge *this)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 11) + 280LL))(
    *((_QWORD *)this + 11),
    *((_QWORD *)this + 17));
  v2 = *((_QWORD *)this + 15);
  if ( v2 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 72LL))(v2, (char *)this + 16);
  v3 = 0LL;
  if ( *((_QWORD *)this + 13) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 13))(
           *((_QWORD *)this + 13),
           &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
           &v3) >= 0 )
    {
      (*(void (__fastcall **)(__int64, ViewManagerBridge *))(*(_QWORD *)v3 + 80LL))(v3, this);
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 64LL))(v3, (char *)this + 8);
    }
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 232LL))(*((_QWORD *)this + 11));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
}
