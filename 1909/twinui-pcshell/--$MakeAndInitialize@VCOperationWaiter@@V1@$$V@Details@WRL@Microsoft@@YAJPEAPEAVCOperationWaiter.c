/*
 * XREFs of ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x18003EBA0
 * Callers:
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18003E390 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x18003F880 (-WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801334C8 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjec.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180136190 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  int Error; // edi
  __int64 *v5; // rsi
  LPUNKNOWN v6; // rdi
  __int64 v7; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  LPUNKNOWN v9; // rcx
  HANDLE Event; // rax
  volatile int *v11; // rdx
  LPUNKNOWN ppunkMarshal; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp+10h]
  LPUNKNOWN *p_ppunkMarshal; // [rsp+60h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v2;
  v3 = v2;
  if ( v2 )
  {
    ppunkMarshal = 0LL;
    *v2 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v5 = v2 + 3;
    v2[3] = 0LL;
    p_ppunkMarshal = &ppunkMarshal;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v6 = ppunkMarshal;
      v7 = *v5;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      if ( *v5 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
        v6,
        &GUID_00000003_0000_0000_c000_000000000046,
        v3 + 3);
    }
    v9 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v9->lpVtbl->Release)(v9);
    }
    *((_DWORD *)v3 + 9) = 1;
    *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v3 = &COperationWaiter::`vftable';
    v3[5] = 0LL;
    Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    v3[5] = Event;
    if ( Event )
      Error = 0;
    else
      Error = ResultFromKnownLastError();
    if ( Error >= 0 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v3);
      Error = 0;
      *a1 = v3;
    }
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v3 + 36), v11) )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 72LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Error;
}
