/*
 * XREFs of ??$MakeAndInitialize@VVirtualTouchpadUriHandlerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802EFB8C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F01A0 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@UIClassFactory@@VNil@Details@23@V5623@V5623@V5623@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180100A80 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@UIClassFactory@@VNil@D.c)
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180103180 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x1802EFEAC (--0VirtualTouchpadUriHandlerFactory@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriHandlerFactory@@@Z @ 0x1802F0078 (-Attach@-$ComPtr@VVirtualTouchpadUriHandlerFactory@@@WRL@Microsoft@@QEAAXPEAVVirtualTouchpadUriH.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualTouchpadUriHandlerFactory,IUnknown,>(_QWORD *a1)
{
  VirtualTouchpadUriHandlerFactory *v2; // rax
  int CanCastTo; // edi
  VirtualTouchpadUriHandlerFactory *v4; // rax
  BOOL IsEqualGUID; // eax
  _DWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = (VirtualTouchpadUriHandlerFactory *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = VirtualTouchpadUriHandlerFactory::VirtualTouchpadUriHandlerFactory(v2);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<VirtualTouchpadUriHandlerFactory>::Attach(&v10, v4);
    *a1 = 0LL;
    IsEqualGUID = InlineIsEqualGUID(
                    &GUID_00000000_0000_0000_c000_000000000046,
                    &GUID_00000000_0000_0000_c000_000000000046);
    v7 = v10;
    v8 = v10;
    if ( IsEqualGUID )
    {
      *a1 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v8);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<6>,0,IClassFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                    v10,
                    v6);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    if ( v7 )
      Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
