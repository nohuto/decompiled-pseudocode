/*
 * XREFs of CreateInputServiceProxy @ 0x1800D3270
 * Callers:
 *     ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x1800D2650 (-Create@TapProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x1800D3EF0 (-RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4Tes.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x1800D33BC (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateInputServiceProxy(struct IInputServiceProxyOwner *a1, _QWORD *a2)
{
  InputServiceProxy *v4; // rax
  InputServiceProxy *v5; // rbx
  int v6; // edi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  InputServiceProxy *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v4 = (InputServiceProxy *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v6);
    v10 = v13;
    goto LABEL_12;
  }
  v7 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)v4 + 5) = 1;
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputServiceProxy,IMessageProxyReconnectAdapterOwner>::`vftable'{for `IInputServiceProxy'};
  *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputServiceProxy,IMessageProxyReconnectAdapterOwner>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyReconnectAdapterOwner>'};
  if ( v7 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
  *(_QWORD *)v5 = &InputServiceProxy::`vftable'{for `IInputServiceProxy'};
  *((_QWORD *)v5 + 1) = &InputServiceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyReconnectAdapterOwner>'};
  *((_QWORD *)v5 + 4) = 0LL;
  *((_QWORD *)v5 + 5) = 0LL;
  v6 = InputServiceProxy::RuntimeClassInitialize(v5, a1);
  v8 = v5;
  v9 = *(_QWORD *)v5;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(InputServiceProxy *, GUID *, __int64 *))v9)(
           v5,
           &GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18,
           &v13);
    v8 = v5;
    v9 = *(_QWORD *)v5;
  }
  (*(void (__fastcall **)(InputServiceProxy *))(v9 + 16))(v8);
  if ( v6 < 0 )
    goto LABEL_8;
  v10 = v13;
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v10 = v13;
  }
  *a2 = v10;
  v6 = 0;
LABEL_12:
  if ( v10 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v6;
}
