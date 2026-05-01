/*
 * XREFs of ??$MakeAndInitialize@VCOperationWaiter@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCOperationWaiter@@@Z @ 0x18001ACF4
 * Callers:
 *     ?WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ @ 0x180019A80 (-WaitForPendingOperations@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18001AEC4 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter,>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 *v4; // rsi
  LPUNKNOWN v5; // rdi
  __int64 v6; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  LPUNKNOWN v8; // rcx
  HANDLE Event; // rax
  int Error; // edi
  LPUNKNOWN ppunkMarshal; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+58h] [rbp+10h]
  _QWORD *v14; // [rsp+60h] [rbp+18h]
  LPUNKNOWN *p_ppunkMarshal; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v2;
  v3 = v2;
  if ( v2 )
  {
    ppunkMarshal = 0LL;
    *v2 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v4 = v2 + 3;
    v2[3] = 0LL;
    p_ppunkMarshal = &ppunkMarshal;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v5 = ppunkMarshal;
      v6 = *v4;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      if ( *v4 )
      {
        *v4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
        v5,
        &GUID_00000003_0000_0000_c000_000000000046,
        v3 + 3);
    }
    v8 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v8->lpVtbl->Release)(v8);
    }
    *((_DWORD *)v3 + 9) = 1;
    *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v13 = v3;
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
      _InterlockedAdd((volatile signed __int32 *)v3 + 9, 1u);
      Error = 0;
      *a1 = v13;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 9, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v13 + 72LL))(v13, 1LL);
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
