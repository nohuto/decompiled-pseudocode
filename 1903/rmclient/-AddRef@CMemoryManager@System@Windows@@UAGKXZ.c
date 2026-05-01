/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@UAGKXZ @ 0x10009C60
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YGJPAPAVCMemoryManager@System@Windows@@@Z @ 0x100090D0 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YGJPAPAVCMe.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@UAGJABU_GUID@@PAPAX@Z @ 0x10009740 (-QueryInterface@CMemoryManager@System@Windows@@UAGJABU_GUID@@PAPAX@Z.c)
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIActivationFactory@@@Z @ 0x100098E0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGPAUHSTRING__@@PAPAUIA.c)
 *     ?AddRef@CMemoryManager@System@Windows@@W3AGKXZ @ 0x1000D1B0 (-AddRef@CMemoryManager@System@Windows@@W3AGKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WBE@AGKXZ @ 0x1000D1C0 (-AddRef@CMemoryManager@System@Windows@@WBE@AGKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WBI@AGKXZ @ 0x1000D1D0 (-AddRef@CMemoryManager@System@Windows@@WBI@AGKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WBM@AGKXZ @ 0x1000D1E0 (-AddRef@CMemoryManager@System@Windows@@WBM@AGKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WCA@AGKXZ @ 0x1000D1F0 (-AddRef@CMemoryManager@System@Windows@@WCA@AGKXZ.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

signed __int32 __stdcall Windows::System::CMemoryManager::AddRef(Windows::System::CMemoryManager *this)
{
  signed __int32 v1; // esi
  void (__thiscall *v3)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // edi

  v1 = _InterlockedIncrement((volatile signed __int32 *)this + 14);
  if ( (*((_BYTE *)this + 68) & 4) == 0 && v1 == 2 )
  {
    v3 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 4);
    if ( (char *)v3 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
    else
      v3(
        *(_DWORD *)(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 4),
        Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
