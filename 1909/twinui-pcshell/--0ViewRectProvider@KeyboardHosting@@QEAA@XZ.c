/*
 * XREFs of ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x18034A1D0
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x18034BDF8 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

KeyboardHosting::ViewRectProvider *__fastcall KeyboardHosting::ViewRectProvider::ViewRectProvider(
        KeyboardHosting::ViewRectProvider *this)
{
  KeyboardHosting::ViewRectProvider *result; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IViewRectProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &KeyboardHosting::ViewRectProvider::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  memset_0((char *)this + 24, 0, 0x20uLL);
  *((_DWORD *)this + 14) = 100;
  *((_QWORD *)this + 8) = 0LL;
  memset_0((char *)this + 72, 0, 0x20uLL);
  *((_DWORD *)this + 26) = 100;
  *((_QWORD *)this + 14) = 0LL;
  memset_0((char *)this + 120, 0, 0x20uLL);
  result = this;
  *((_DWORD *)this + 38) = 100;
  return result;
}
