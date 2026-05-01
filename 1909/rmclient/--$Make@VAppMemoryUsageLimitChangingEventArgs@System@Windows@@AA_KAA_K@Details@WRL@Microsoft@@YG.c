/*
 * XREFs of ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AA_KAA_K@Details@WRL@Microsoft@@YG?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AA_K0@Z @ 0x10008830
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z @ 0x10008790 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CGX_K0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UAGKXZ @ 0x10008230 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLi.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ @ 0x1000B7F0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IAEKXZ.c)
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

Windows::System::AppMemoryUsageLimitChangingEventArgs **__fastcall Microsoft::WRL::Details::Make<Windows::System::AppMemoryUsageLimitChangingEventArgs,unsigned __int64 &,unsigned __int64 &>(
        Windows::System::AppMemoryUsageLimitChangingEventArgs **a1,
        int *a2,
        int *a3)
{
  int *v5; // esi
  int v6; // ecx
  int v7; // eax
  int *v8; // ebx
  int v9; // ecx
  struct Microsoft::WRL::Details::ModuleBase *v10; // ecx
  void (__thiscall *v11)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // ebx
  int v13; // [esp+Ch] [ebp-14h]
  int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]
  LPUNKNOWN ppunkMarshal; // [esp+1Ch] [ebp-4h] BYREF

  *a1 = 0;
  v5 = (int *)operator new(0x30u, (const struct std::nothrow_t *)std::nothrow);
  if ( v5 )
  {
    ppunkMarshal = 0;
    v6 = *a3;
    v13 = a3[1];
    v16 = *a2;
    v7 = a2[1];
    v8 = v5 + 5;
    v15 = v7;
    v5[2] = (int)&Microsoft::WRL::FtmBase::`vftable';
    v14 = v6;
    v5[5] = 0;
    if ( CoCreateFreeThreadedMarshaler(0, &ppunkMarshal) >= 0 )
    {
      v9 = *v8;
      if ( *v8 )
      {
        *v8 = 0;
        (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v9 + 8))(*(_DWORD *)(*(_DWORD *)v9 + 8), v9);
        v8 = v5 + 5;
      }
      ((void (__thiscall *)(HRESULT (__stdcall *)(IUnknown *, const IID *const, void **), LPUNKNOWN, GUID *, int *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal->lpVtbl->QueryInterface,
        ppunkMarshal,
        &_GUID_00000003_0000_0000_c000_000000000046,
        v8);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    v10 = Microsoft::WRL::Details::ModuleBase::module_;
    v5[7] = 1;
    *v5 = (int)&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`vftable';
    v5[1] = (int)&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    v5[2] = (int)&Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( v10 )
    {
      v11 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)v10 + 4);
      if ( (char *)v11 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(v10);
      else
        v11(*(_DWORD *)(*(_DWORD *)v10 + 4), v10);
    }
    v5[8] = v16;
    v5[9] = v15;
    v5[10] = v14;
    *v5 = (int)&Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable';
    v5[1] = (int)&Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `IWeakReferenceSource'};
    v5[2] = (int)&Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v5[11] = v13;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = (Windows::System::AppMemoryUsageLimitChangingEventArgs *)v5;
  }
  return a1;
}
