/*
 * XREFs of ??0InputDestTarget@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1800C77D4
 * Callers:
 *     ?Create@InputDestTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x1800C78A0 (-Create@InputDestTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

InputDestTarget *__fastcall InputDestTarget::InputDestTarget(InputDestTarget *this, const struct tagINPUTDEST *a2)
{
  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget,IInputDestComparable>::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget,IInputDestComparable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDestComparable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &InputDestTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &InputDestTarget::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDestComparable>'};
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 40);
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)((char *)a2 + 56);
  *((_QWORD *)this + 7) = *((_QWORD *)a2 + 9);
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 1);
  return this;
}
