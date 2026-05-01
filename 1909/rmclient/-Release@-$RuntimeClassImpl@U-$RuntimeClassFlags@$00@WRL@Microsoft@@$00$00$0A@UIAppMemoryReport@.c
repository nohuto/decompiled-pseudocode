/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@UAGKXZ @ 0x10009ED0
 * Callers:
 *     ?Release@CAppMemoryReport@System@Windows@@UAGKXZ @ 0x10009EC0 (-Release@CAppMemoryReport@System@Windows@@UAGKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@W3AGKXZ @ 0x1000D670 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppM_ea_1000D670.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@W7AGKXZ @ 0x1000D680 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppM_ea_1000D680.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryReport@System@Windows@@UIAppMemoryReport2@56@UIInspectable@@@Details@WRL@Microsoft@@WM@AGKXZ @ 0x1000D690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppM_ea_1000D690.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009F60 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     ??_GCAppMemoryReport@System@Windows@@UAEPAXI@Z @ 0x10009F70 (--_GCAppMemoryReport@System@Windows@@UAEPAXI@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::Release(
        Windows::System::CAppMemoryReport *a1)
{
  signed __int32 i; // ecx
  signed __int32 v2; // edi
  signed __int32 v3; // eax
  void *(__thiscall *v4)(Windows::System::CAppMemoryReport *__hidden, char); // ebx
  void (__thiscall *v5)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // esi

  for ( i = *((_DWORD *)a1 + 5); i >= 0; i = v3 )
  {
    v2 = i - 1;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 5, i - 1, i);
    if ( v3 == i )
      goto LABEL_4;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * i + 12));
LABEL_4:
  if ( !v2 )
  {
    if ( a1 )
    {
      v4 = *(void *(__thiscall **)(Windows::System::CAppMemoryReport *__hidden, char))(*(_DWORD *)a1 + 40);
      if ( v4 == Windows::System::CAppMemoryReport::`scalar deleting destructor' )
        Windows::System::CAppMemoryReport::`scalar deleting destructor'(a1, 1);
      else
        v4(a1, 1);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v5 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 8);
      if ( (char *)v5 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
      else
        v5(
          *(_DWORD *)(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8),
          Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v2;
}
