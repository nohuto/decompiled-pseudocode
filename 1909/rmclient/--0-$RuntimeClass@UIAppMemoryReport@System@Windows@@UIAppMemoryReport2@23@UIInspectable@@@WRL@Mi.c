/*
 * XREFs of ??0?$RuntimeClass@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@23@UIInspectable@@@WRL@Microsoft@@QAE@XZ @ 0x100085BA
 * Callers:
 *     ??$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K@Details@WRL@Microsoft@@YGJPAPAUIAppMemoryReport@System@Windows@@AA_K1111@Z @ 0x10008480 (--$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AA_KAA_KAA_KAA_KAA_K.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

_DWORD *__thiscall Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>(
        _DWORD *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // ecx
  void (__thiscall *v3)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // edi

  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  this[5] = 1;
  *this = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Windows::System::IAppMemoryReport'};
  this[1] = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
  this[2] = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Windows::System::IAppMemoryReport2'};
  this[3] = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  if ( v2 )
  {
    v3 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)v2 + 4);
    if ( (char *)v3 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(v2);
    else
      v3(*(_DWORD *)(*(_DWORD *)v2 + 4), v2);
  }
  return this;
}
