/*
 * XREFs of _DllCanUnloadNow@0 @ 0x10007260
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV?$DefaultModule@$00@Details@23@XZ @ 0x100071F0 (-Create@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SGAAV-$DefaultMo.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  void *v0; // eax
  unsigned int (__stdcall *v1)(Microsoft::WRL::Details::ModuleBase *__hidden); // esi

  v0 = Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create();
  v1 = *(unsigned int (__stdcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*(_DWORD *)v0 + 12);
  if ( v1 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
  {
    if ( Microsoft::WRL::Details::ModuleBase::objectCount_ )
      return 1;
  }
  else if ( ((int (__thiscall *)(unsigned int (__stdcall *)(Microsoft::WRL::Details::ModuleBase *__hidden), void *))v1)(
              v1,
              v0) )
  {
    return 1;
  }
  return 0;
}
