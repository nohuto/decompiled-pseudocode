/*
 * XREFs of ??$MakeAndInitialize@VCApplicationViewBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18038DFE0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18038E0F0 (-CreateInstance@-$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801E8A50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1801E8A50.c)
 *     ??0CApplicationViewBroker@@QEAA@XZ @ 0x18038E094 (--0CApplicationViewBroker@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CApplicationViewBroker,IUnknown,>(
        volatile signed __int32 **a1)
{
  CApplicationViewBroker *v2; // rax
  unsigned int v3; // edi
  CApplicationViewBroker *v4; // rax
  volatile signed __int32 *v5; // rbx
  _DWORD *v6; // rcx

  *a1 = 0LL;
  v2 = (CApplicationViewBroker *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = CApplicationViewBroker::CApplicationViewBroker(v2);
    *a1 = 0LL;
    v5 = (volatile signed __int32 *)v4;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      v3 = 0;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_d4351e8c_208e_4c24_88ac_6e2add5f4bb1) )
    {
      *a1 = v5;
      v3 = 0;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      v3 = -2147467262;
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
