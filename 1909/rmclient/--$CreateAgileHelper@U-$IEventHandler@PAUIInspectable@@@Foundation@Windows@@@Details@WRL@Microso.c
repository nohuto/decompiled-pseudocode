/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YGJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAPAU345@@Z @ 0x10008B20
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAUEventRegistrationToken@@@Z @ 0x10008950 (-Add@-$AgileEventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOpti.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ @ 0x1000B7F0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IAEKXZ @ 0x1000B9E1 (-InternalRelease@-$ComPtr@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@.c)
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<IInspectable *>>(
        int a1,
        LPUNKNOWN *a2)
{
  struct IUnknownVtbl *v2; // edi
  int AgileReference; // esi
  IUnknown *v4; // esi
  IUnknown *v5; // ebx
  IUnknown *v6; // ebx
  struct IUnknownVtbl *lpVtbl; // ecx
  struct Microsoft::WRL::Details::ModuleBase *v8; // ecx
  void (__thiscall *v9)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // ebx
  LPUNKNOWN v10; // eax
  struct IUnknownVtbl *v11; // ecx
  struct IUnknownVtbl *v14; // [esp+10h] [ebp-10h] BYREF
  LPUNKNOWN v15; // [esp+14h] [ebp-Ch] BYREF
  LPUNKNOWN ppunkMarshal; // [esp+18h] [ebp-8h] BYREF
  struct IUnknownVtbl *v17; // [esp+1Ch] [ebp-4h] BYREF

  v2 = 0;
  *a2 = 0;
  v17 = 0;
  if ( a1 )
  {
    AgileReference = RoGetAgileReference(0, &_GUID_c50898f6_c536_5f47_8583_8b2c2438a13b, a1, &v17);
    if ( AgileReference < 0 )
      goto LABEL_20;
    v2 = v17;
  }
  v14 = v2;
  v17 = 0;
  ppunkMarshal = 0;
  v4 = (IUnknown *)operator new(0x28u, (const struct std::nothrow_t *)std::nothrow);
  v5 = 0;
  if ( v4 )
  {
    v4->lpVtbl = (struct IUnknownVtbl *)&Windows::Foundation::IEventHandler<IInspectable *>::`vftable';
    v4[1].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::FtmBase::`vftable';
    v6 = v4 + 4;
    v4[4].lpVtbl = 0;
    ppunkMarshal = 0;
    if ( CoCreateFreeThreadedMarshaler(0, &ppunkMarshal) >= 0 )
    {
      lpVtbl = v6->lpVtbl;
      if ( v6->lpVtbl )
      {
        v6->lpVtbl = 0;
        (*((void (__thiscall **)(_DWORD, struct IUnknownVtbl *))lpVtbl->QueryInterface + 2))(
          *((_DWORD *)lpVtbl->QueryInterface + 2),
          lpVtbl);
        v6 = v4 + 4;
      }
      ((void (__thiscall *)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **), LPUNKNOWN, GUID *, IUnknown *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal->lpVtbl->QueryInterface,
        ppunkMarshal,
        &_GUID_00000003_0000_0000_c000_000000000046,
        v6);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    v8 = Microsoft::WRL::Details::ModuleBase::module_;
    v4[8].lpVtbl = (struct IUnknownVtbl *)1;
    v4->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Windows::Foundation::IEventHandler<IInspectable *>'};
    v4[1].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( v8 )
    {
      v9 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)v8 + 4);
      if ( (char *)v9 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(v8);
      else
        v9(*(_DWORD *)(*(_DWORD *)v8 + 4), v8);
    }
    v4[9].lpVtbl = 0;
    if ( &v4[9] != (IUnknown *)&v14 )
    {
      v4[9].lpVtbl = v2;
      v2 = 0;
    }
    v10 = v4;
    v4->lpVtbl = (struct IUnknownVtbl *)&off_1000130C;
    v4[1].lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v5 = v4;
    ppunkMarshal = v4;
  }
  else
  {
    v10 = 0;
  }
  v15 = v10;
  if ( v2 )
  {
    (*((void (__thiscall **)(_DWORD, struct IUnknownVtbl *))v2->QueryInterface + 2))(
      *((_DWORD *)v2->QueryInterface + 2),
      v2);
    v10 = ppunkMarshal;
  }
  if ( v5 )
  {
    AgileReference = 0;
    v15 = 0;
    *a2 = v10;
  }
  else
  {
    AgileReference = -2147024882;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v15);
LABEL_20:
  v11 = v17;
  if ( v17 )
  {
    v17 = 0;
    (*((void (__thiscall **)(_DWORD, struct IUnknownVtbl *))v11->QueryInterface + 2))(
      *((_DWORD *)v11->QueryInterface + 2),
      v11);
  }
  return AgileReference;
}
