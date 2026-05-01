/*
 * XREFs of ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YGJPAPAVCMemoryManager@System@Windows@@@Z @ 0x100090D0
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YGJPAIPBUCreatorMap@012@ABU_GUID@@PAPAUIUnknown@@@Z @ 0x10009040 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YGJPAIPBUCrea.c)
 * Callees:
 *     ?AddRef@CMemoryManager@System@Windows@@UAGKXZ @ 0x10009C60 (-AddRef@CMemoryManager@System@Windows@@UAGKXZ.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     ?Release@CMemoryManager@System@Windows@@UAGKXZ @ 0x10009E60 (-Release@CMemoryManager@System@Windows@@UAGKXZ.c)
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __thiscall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CMemoryManager,Windows::System::CMemoryManager,>(
        int **this)
{
  int *v1; // esi
  int *v2; // ebx
  int v3; // ecx
  LPUNKNOWN v4; // eax
  struct Microsoft::WRL::Details::ModuleBase *v5; // ecx
  void (__thiscall *v6)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // edi
  unsigned int (__stdcall *v7)(Windows::System::CMemoryManager *__hidden); // edi
  LPUNKNOWN ppunkMarshal; // [esp+Ch] [ebp-4h] BYREF

  *this = 0;
  v1 = (int *)operator new(0x48u, (const struct std::nothrow_t *)std::nothrow);
  if ( !v1 )
    return -2147024882;
  v1[1] = (int)&Microsoft::WRL::FtmBase::`vftable';
  v2 = v1 + 4;
  ppunkMarshal = 0;
  v1[4] = 0;
  if ( CoCreateFreeThreadedMarshaler(0, &ppunkMarshal) >= 0 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      *v2 = 0;
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v3 + 8))(*(_DWORD *)(*(_DWORD *)v3 + 8), v3);
    }
    ((void (__thiscall *)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **), LPUNKNOWN, GUID *, int *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal->lpVtbl->QueryInterface,
      ppunkMarshal,
      &_GUID_00000003_0000_0000_c000_000000000046,
      v1 + 4);
  }
  v4 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0;
    ((void (__thiscall *)(ULONG (__stdcall *)(IUnknown *), LPUNKNOWN))v4->lpVtbl->Release)(v4->lpVtbl->Release, v4);
  }
  v5 = Microsoft::WRL::Details::ModuleBase::module_;
  v1[14] = 1;
  *v1 = (int)&Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `IActivationFactory'};
  v1[1] = (int)&Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  v1[5] = (int)&Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Windows::System::IMemoryManagerStatics'};
  v1[6] = (int)&Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>'};
  v1[7] = (int)&Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Windows::System::IMemoryManagerStatics3'};
  v1[8] = (int)&Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics4>'};
  v1[16] = 0;
  v1[17] = 4;
  if ( v5 )
  {
    v6 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)v5 + 4);
    if ( (char *)v6 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(v5);
    else
      v6(*(_DWORD *)(*(_DWORD *)v5 + 4), v5);
  }
  *v1 = (int)&Windows::System::CMemoryManager::`vftable'{for `IActivationFactory'};
  v1[1] = (int)&Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Microsoft::WRL::Implements<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>>>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  v1[5] = (int)&Windows::System::CMemoryManager::`vftable'{for `Windows::System::IMemoryManagerStatics'};
  v1[6] = (int)&Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>'};
  v1[7] = (int)&Windows::System::CMemoryManager::`vftable'{for `Windows::System::IMemoryManagerStatics3'};
  v1[8] = (int)&Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics4>'};
  Windows::System::CMemoryManager::AddRef((Windows::System::CMemoryManager *)v1);
  *this = v1;
  v7 = *(unsigned int (__stdcall **)(Windows::System::CMemoryManager *__hidden))(*v1 + 8);
  if ( v7 == Windows::System::CMemoryManager::Release )
    Windows::System::CMemoryManager::Release((Windows::System::CMemoryManager *)v1);
  else
    ((void (__thiscall *)(_DWORD, int *))v7)(*(_DWORD *)(*v1 + 8), v1);
  return 0;
}
