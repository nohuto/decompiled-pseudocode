/*
 * XREFs of ??$MakeAndInitialize@VTabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabDroppedEventArgs@2345@AEAUShellTabGroupId@2345@AEAUShellTabId@2345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAUITabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@AEAUShellTabGroupId@4567@AEAUShellTabId@4567@AEAH@Z @ 0x18024AD4C
 * Callers:
 *     ?RaiseTabDropped@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabGroupId@2345@UShellTabId@2345@H@Z @ 0x18024BEB0 (-RaiseTabDropped@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabGro.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18010FA2C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18010FA2C.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180190660 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UITab_ea_180190660.c)
 *     ??0TabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ @ 0x18024B1E8 (--0TabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs,Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId &,Windows::Internal::ComposableShell::Tabs::ShellTabId &,int &>(
        volatile signed __int64 **a1,
        __int128 *a2,
        __int128 *a3,
        _DWORD *a4)
{
  Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *v8; // rax
  int CanCastTo; // edi
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  volatile signed __int64 *v13; // rbx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // r9
  _DWORD *v17; // rdx

  *a1 = 0LL;
  v8 = (Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *)operator new(
                                                                          0x68uLL,
                                                                          (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs::TabDroppedEventArgs(v8);
    v11 = *a3;
    v12 = *a2;
    *(_DWORD *)(v10 + 96) = *a4;
    *(_OWORD *)(v10 + 80) = v11;
    v13 = (volatile signed __int64 *)v10;
    *(_OWORD *)(v10 + 64) = v12;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_feee0d59_7016_5542_a655_53dd241de069, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v14, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v13;
      (*(void (__fastcall **)(volatile signed __int64 *))(*v13 + 8))(v13);
      CanCastTo = 0;
      goto LABEL_10;
    }
    if ( InlineIsEqualGUID(v15, v16) )
    {
      *a1 = v13;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)(v13 + 1),
                    v17);
      if ( CanCastTo < 0 )
      {
LABEL_10:
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs,Microsoft::WRL::FtmBase>::Release(v13);
        return (unsigned int)CanCastTo;
      }
    }
    (*(void (__fastcall **)(volatile signed __int64 *))(**a1 + 8))(*a1);
    goto LABEL_10;
  }
  return (unsigned int)-2147024882;
}
