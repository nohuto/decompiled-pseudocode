/*
 * XREFs of ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18002BBF4
 * Callers:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180014CE4 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180033254 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx
  _QWORD *v3; // rsi
  _QWORD *v4; // rdi
  __int64 *v5; // rsi
  LPUNKNOWN v6; // r14
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // r15
  __int64 v8; // rcx
  LPUNKNOWN v9; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+80h] [rbp+8h] BYREF
  __int64 v11; // [rsp+88h] [rbp+10h]
  __int64 v12; // [rsp+90h] [rbp+18h]
  _QWORD *v13; // [rsp+98h] [rbp+20h]

  if ( *((_QWORD *)this + 22) )
  {
    v2 = *((_QWORD *)this + 20);
    v11 = v2;
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    }
    v3 = 0LL;
    v12 = 0LL;
    v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      v4[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v5 = v4 + 4;
      v4[4] = 0LL;
      ppunkMarshal = 0LL;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v6 = ppunkMarshal;
        QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
        v8 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
        ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
          v6,
          &GUID_00000003_0000_0000_c000_000000000046,
          v4 + 4);
      }
      v9 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v9->lpVtbl->Release)(v9);
      }
      *((_DWORD *)v4 + 11) = 1;
      *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncCallback'};
      v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v4[6] = v2;
      if ( v2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v4[7] = this;
      *v4 = off_180426B90;
      v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      v3 = v4;
    }
    v13 = v3;
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 19) + 232LL))(*((_QWORD *)this + 19), v3);
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
    }
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
}
