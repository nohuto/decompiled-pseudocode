/*
 * XREFs of ??0?$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@@WRL@Microsoft@@QAE@XZ @ 0x10010357
 * Callers:
 *     ??0CProcessMemoryReport@System@Windows@@QAE@XZ @ 0x10010397 (--0CProcessMemoryReport@System@Windows@@QAE@XZ.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

_DWORD *__thiscall Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>(
        _DWORD *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // ecx

  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  this[4] = 1;
  *this = &Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>::`vftable';
  this[1] = &Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  this[2] = &Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  if ( v2 )
    (*(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)v2 + 4))(
      *(_DWORD *)(*(_DWORD *)v2 + 4),
      v2);
  return this;
}
