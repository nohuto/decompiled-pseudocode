/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YGJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PAPAU345@@Z @ 0x10009530
 * Callers:
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJPAU?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PAUEventRegistrationToken@@@Z @ 0x10009230 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UAGJPAU-$IEventHandler@PAVAppMem.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
        int a1,
        _DWORD *a2)
{
  int v2; // edi
  int AgileReference; // esi
  _DWORD *v4; // esi
  _DWORD *v5; // ebx
  int *v6; // ebx
  int v7; // ecx
  LPUNKNOWN v8; // ecx
  struct Microsoft::WRL::Details::ModuleBase *v9; // ecx
  void (__thiscall *v10)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // ebx
  int v11; // ecx
  int v14; // [esp+10h] [ebp-Ch] BYREF
  LPUNKNOWN ppunkMarshal; // [esp+14h] [ebp-8h] BYREF
  int v16; // [esp+18h] [ebp-4h] BYREF

  v2 = 0;
  *a2 = 0;
  v16 = 0;
  if ( a1 )
  {
    AgileReference = RoGetAgileReference(0, &_GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0, a1, &v16);
    if ( AgileReference < 0 )
      goto LABEL_21;
    v2 = v16;
  }
  v14 = v2;
  v16 = 0;
  v4 = operator new(0x28u, (const struct std::nothrow_t *)std::nothrow);
  v5 = 0;
  if ( v4 )
  {
    *v4 = &Windows::Foundation::IEventHandler<IInspectable *>::`vftable';
    v4[1] = &Microsoft::WRL::FtmBase::`vftable';
    v6 = v4 + 4;
    v4[4] = 0;
    ppunkMarshal = 0;
    if ( CoCreateFreeThreadedMarshaler(0, &ppunkMarshal) >= 0 )
    {
      v7 = *v6;
      if ( *v6 )
      {
        *v6 = 0;
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v7 + 8))(*(_DWORD *)(*(_DWORD *)v7 + 8), v7);
        v6 = v4 + 4;
      }
      ((void (__thiscall *)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **), LPUNKNOWN, GUID *, int *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal->lpVtbl->QueryInterface,
        ppunkMarshal,
        &_GUID_00000003_0000_0000_c000_000000000046,
        v6);
    }
    v8 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0;
      ((void (__thiscall *)(ULONG (__stdcall *)(IUnknown *), LPUNKNOWN))v8->lpVtbl->Release)(v8->lpVtbl->Release, v8);
    }
    v9 = Microsoft::WRL::Details::ModuleBase::module_;
    v4[8] = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>'};
    v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( v9 )
    {
      v10 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)v9 + 4);
      if ( (char *)v10 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(v9);
      else
        v10(*(_DWORD *)(*(_DWORD *)v9 + 4), v9);
    }
    v4[9] = 0;
    if ( v4 + 9 != &v14 )
    {
      v4[9] = v2;
      v2 = 0;
    }
    *v4 = &off_10001528;
    v5 = v4;
    v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  }
  if ( v2 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v2 + 8))(*(_DWORD *)(*(_DWORD *)v2 + 8), v2);
  if ( v5 )
  {
    AgileReference = 0;
    *a2 = v5;
  }
  else
  {
    AgileReference = -2147024882;
  }
LABEL_21:
  v11 = v16;
  if ( v16 )
  {
    v16 = 0;
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v11 + 8))(*(_DWORD *)(*(_DWORD *)v11 + 8), v11);
  }
  return AgileReference;
}
