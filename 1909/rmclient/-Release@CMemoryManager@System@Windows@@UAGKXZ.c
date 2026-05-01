/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UAGKXZ @ 0x10009E60
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YGJPAPAVCMemoryManager@System@Windows@@@Z @ 0x100090D0 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YGJPAPAVCMe.c)
 *     ?Release@CMemoryManager@System@Windows@@W3AGKXZ @ 0x1000D430 (-Release@CMemoryManager@System@Windows@@W3AGKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WBE@AGKXZ @ 0x1000D440 (-Release@CMemoryManager@System@Windows@@WBE@AGKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WBI@AGKXZ @ 0x1000D450 (-Release@CMemoryManager@System@Windows@@WBI@AGKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WBM@AGKXZ @ 0x1000D460 (-Release@CMemoryManager@System@Windows@@WBM@AGKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WCA@AGKXZ @ 0x1000D470 (-Release@CMemoryManager@System@Windows@@WCA@AGKXZ.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009F60 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

unsigned int __stdcall Windows::System::CMemoryManager::Release(Windows::System::CMemoryManager *this)
{
  signed __int32 v1; // esi
  int v2; // ebx
  void (__thiscall *v4)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // edi
  struct Microsoft::WRL::Details::ModuleBase *v5; // [esp-4h] [ebp-10h]

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 14);
  v2 = *((_DWORD *)this + 17) & 4;
  if ( !v1 )
  {
    (*(void (__thiscall **)(Windows::System::CMemoryManager *, int))(*(_DWORD *)this + 28))(this, 1);
    if ( !v2 || !Microsoft::WRL::Details::ModuleBase::module_ )
      return v1;
    v5 = Microsoft::WRL::Details::ModuleBase::module_;
    v4 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                     + 8);
    goto LABEL_10;
  }
  if ( v2 || v1 != 1 )
    return v1;
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  v4 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 8);
  if ( (char *)v4 != (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
  {
LABEL_10:
    v4(v4, v5);
    return v1;
  }
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
  return 1;
}
