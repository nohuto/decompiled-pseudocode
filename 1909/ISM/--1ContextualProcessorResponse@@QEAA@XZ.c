/*
 * XREFs of ??1ContextualProcessorResponse@@QEAA@XZ @ 0x1800F9D6C
 * Callers:
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$5 @ 0x1800FA6B7 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ContextualProcessorResponse::~ContextualProcessorResponse(ContextualProcessorResponse *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 1);
}
