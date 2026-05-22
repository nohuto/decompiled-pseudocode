/*
 * XREFs of ??$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIRawInputProvider@@AEAPEAUIRawInputClient@@@Z @ 0x18001813C
 * Callers:
 *     ?Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18002A660 (-Create@MPCRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18000C790 (InlineIsEqualGUID.c)
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180020018 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029740 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_180029740.c)
 *     ??0MPCRawInputProvider@@QEAA@XZ @ 0x18002A464 (--0MPCRawInputProvider@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCRawInputProvider,IRawInputProvider,IRawInputClient * &>(
        MPCRawInputProvider **a1,
        struct IRawInputClient **a2)
{
  MPCRawInputProvider *v4; // rax
  MPCRawInputProvider *v5; // rbx
  int v6; // edi
  _DWORD *v7; // rcx

  *a1 = 0LL;
  v4 = (MPCRawInputProvider *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = MPCRawInputProvider::MPCRawInputProvider(v4);
    v6 = MPCRawInputProvider::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v5;
        (*(void (__fastcall **)(MPCRawInputProvider *))(*(_QWORD *)v5 + 8LL))(v5);
        v6 = 0;
      }
      else if ( InlineIsEqualGUID(v7, v7) )
      {
        *a1 = v5;
        v6 = 0;
        (*(void (__fastcall **)(MPCRawInputProvider *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      else
      {
        v6 = -2147467262;
      }
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
