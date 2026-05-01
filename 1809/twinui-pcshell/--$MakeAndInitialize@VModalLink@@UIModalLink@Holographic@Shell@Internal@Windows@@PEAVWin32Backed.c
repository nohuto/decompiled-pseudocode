/*
 * XREFs of ??$MakeAndInitialize@VModalLink@@UIModalLink@Holographic@Shell@Internal@Windows@@PEAVWin32BackedViewHostItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIModalLink@Holographic@Shell@Internal@Windows@@$$QEAPEAVWin32BackedViewHostItem@@@Z @ 0x1801BB820
 * Callers:
 *     ?CreateOrGetModalLink@Win32BackedViewHostItem@@UEAAJPEAPEAUIModalLink@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BD810 (-CreateOrGetModalLink@Win32BackedViewHostItem@@UEAAJPEAPEAUIModalLink@Holographic@Shell@Internal.c)
 *     ?CreateOrGetModalLink@ApplicationViewBackedViewHostItem@@UEAAJPEAPEAUIModalLink@Holographic@Shell@Internal@Windows@@@Z @ 0x1801C2AD0 (-CreateOrGetModalLink@ApplicationViewBackedViewHostItem@@UEAAJPEAPEAUIModalLink@Holographic@Shel.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0ModalLink@@QEAA@XZ @ 0x1801BC6F4 (--0ModalLink@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VModalLink@@@WRL@Microsoft@@QEAAXPEAVModalLink@@@Z @ 0x1801BD3B0 (-Attach@-$ComPtr@VModalLink@@@WRL@Microsoft@@QEAAXPEAVModalLink@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIModalLink@Holographic@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801BD494 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1801BD494.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@UIModalLink@Holographic@678@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801BFAD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$Ch_ea_1801BFAD0.c)
 *     ?RuntimeClassInitialize@ModalLink@@QEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801C5C14 (-RuntimeClassInitialize@ModalLink@@QEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ModalLink,Windows::Internal::Shell::Holographic::IModalLink,Win32BackedViewHostItem *>(
        ModalLink **a1,
        struct Windows::Internal::Shell::Holographic::IViewHostItem **a2)
{
  ModalLink *v4; // rax
  int CanCastTo; // edi
  ModalLink *v6; // rax
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v7; // rdx
  ModalLink *v8; // rbx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // r9
  ModalLink *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (ModalLink *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ModalLink::ModalLink(v4);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<ModalLink>::Attach(&v13, v6);
    v7 = *a2;
    v8 = v13;
    CanCastTo = ModalLink::RuntimeClassInitialize(v13, v7);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_e0fce415_443a_4962_89ee_57775e7c668a, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        *a1 = v8;
        (*(void (__fastcall **)(ModalLink *))(*(_QWORD *)v8 + 8LL))(v8);
        CanCastTo = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v10, &GUID_602076f4_9793_429d_a999_f951052e28e9) )
        {
          *a1 = v8;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Holographic::IModalLink,Microsoft::WRL::FtmBase>::CanCastTo(
                        (char *)v8 + 64,
                        v11,
                        a1);
        }
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(ModalLink *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>,Windows::Internal::Shell::Holographic::IModalLink,Microsoft::WRL::FtmBase>::Release(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
