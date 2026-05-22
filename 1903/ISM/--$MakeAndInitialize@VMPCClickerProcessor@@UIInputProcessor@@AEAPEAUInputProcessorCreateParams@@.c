/*
 * XREFs of ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18013F578
 * Callers:
 *     ?Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18013F9C0 (-Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18000C790 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputProcessorDeviceUpdate@@UIInputFocusListener@@UIMPCInputProviderBase@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180091EF4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputProcessorDeviceU.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180092110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_180092110.c)
 *     ??0MPCClickerProcessor@@QEAA@XZ @ 0x18013F724 (--0MPCClickerProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801407C4 (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCClickerProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        MPCClickerProcessor **a1,
        const struct InputProcessorCreateParams **a2)
{
  MPCClickerProcessor *v4; // rax
  int CanCastTo; // ebx
  MPCClickerProcessor *v6; // rdi
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rdx

  *a1 = 0LL;
  v4 = (MPCClickerProcessor *)operator new(0x1268uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = MPCClickerProcessor::MPCClickerProcessor(v4);
    CanCastTo = MPCClickerProcessor::RuntimeClassInitialize(v6, *a2);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_603ffbaf_2fd6_4711_8c68_de56f864f999, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(MPCClickerProcessor *))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v7, v8) )
        {
          *a1 = v6;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>::CanCastTo(
                        (__int64)v6 + 8,
                        v9);
          if ( CanCastTo == -2147467262 )
            CanCastTo = -2147467262;
        }
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(MPCClickerProcessor *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release((volatile signed __int32 *)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
