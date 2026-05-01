/*
 * XREFs of ??0EventTargetArray@Details@WRL@Microsoft@@QAE@XZ @ 0x100103C7
 * Callers:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@AAI@Z @ 0x100102FE (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

Microsoft::WRL::Details::EventTargetArray *__thiscall Microsoft::WRL::Details::EventTargetArray::EventTargetArray(
        Microsoft::WRL::Details::EventTargetArray *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // ecx

  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)this + 2) = 1;
  *(_DWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( v2 )
    (*(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)v2 + 4))(
      *(_DWORD *)(*(_DWORD *)v2 + 4),
      v2);
  *(_DWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  return this;
}
