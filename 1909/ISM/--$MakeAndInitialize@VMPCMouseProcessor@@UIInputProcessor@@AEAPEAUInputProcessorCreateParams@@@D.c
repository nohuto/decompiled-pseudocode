/*
 * XREFs of ??$MakeAndInitialize@VMPCMouseProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180017710
 * Callers:
 *     ?Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002ACE0 (-Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008550 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvide.c)
 *     InlineIsEqualGUID @ 0x18000C890 (InlineIsEqualGUID.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180020EF8 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x18002835C (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputProcessorDeviceUpdate@@UIInputFocusListener@@UIMPCInputProviderBase@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180091CCC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIInputProcessorDeviceU.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCMouseProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        MPCMouseProcessor **a1,
        const struct InputProcessorCreateParams **a2)
{
  MPCMouseProcessor *v4; // rax
  MPCMouseProcessor *v5; // rdi
  volatile int *v6; // rdx
  int CanCastTo; // ebx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  MPCMouseProcessor *v11; // r8
  _DWORD *v12; // r9
  MPCMouseProcessor *v13; // r8

  *a1 = 0LL;
  v4 = (MPCMouseProcessor *)operator new(0x2108uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = MPCMouseProcessor::MPCMouseProcessor(v4);
  CanCastTo = MPCMouseProcessor::RuntimeClassInitialize(v5, *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( !InlineIsEqualGUID(&GUID_603ffbaf_2fd6_4711_8c68_de56f864f999, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      if ( InlineIsEqualGUID(v8, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8) )
      {
        *a1 = v5;
      }
      else
      {
        if ( !InlineIsEqualGUID(v9, &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8) )
        {
          if ( InlineIsEqualGUID(v10, v12) )
          {
            *a1 = v13;
            CanCastTo = 0;
          }
          else
          {
            CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>::CanCastTo(
                          (char *)v13 + 8,
                          v6,
                          a1);
            if ( CanCastTo == -2147467262 )
              CanCastTo = -2147467262;
          }
          if ( CanCastTo < 0 )
            goto LABEL_10;
          goto LABEL_9;
        }
        *a1 = v11;
      }
      CanCastTo = 0;
LABEL_9:
      (*(void (__fastcall **)(MPCMouseProcessor *))(*(_QWORD *)*a1 + 8LL))(*a1);
      goto LABEL_10;
    }
    *a1 = v5;
    (*(void (__fastcall **)(MPCMouseProcessor *))(*(_QWORD *)v5 + 8LL))(v5);
    CanCastTo = 0;
  }
LABEL_10:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::Release(
      (__int64)v5,
      v6);
  return (unsigned int)CanCastTo;
}
