/*
 * XREFs of ??$MakeAndInitialize@V?$EventInvocationContextProvider@$00@details@wil@@UIEventInvocationContextProvider@23@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEventInvocationContextProvider@details@wil@@@Z @ 0x1801FC8D0
 * Callers:
 *     ??0HolographicPositioner@@QEAA@XZ @ 0x1801FE138 (--0HolographicPositioner@@QEAA@XZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18010FA2C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18010FA2C.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180147E00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ??0?$EventInvocationContextProvider@$00@details@wil@@QEAA@XZ @ 0x1801FDE60 (--0-$EventInvocationContextProvider@$00@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<wil::details::EventInvocationContextProvider<1>,wil::details::IEventInvocationContextProvider,>(
        volatile signed __int64 **a1)
{
  void *v2; // rax
  int CanCastTo; // edi
  __int64 v4; // rax
  volatile signed __int64 *v5; // rbx
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  _DWORD *v9; // rdx

  *a1 = 0LL;
  v2 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v4 = wil::details::EventInvocationContextProvider<1>::EventInvocationContextProvider<1>(v2);
  *a1 = 0LL;
  v5 = (volatile signed __int64 *)v4;
  if ( InlineIsEqualGUID(&GUID_135f9b01_31e9_4797_9f9a_d6be38d3e800, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v5;
    (*(void (__fastcall **)(volatile signed __int64 *))(*v5 + 8))(v5);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v7, v8) )
    {
      *a1 = v5;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)(v5 + 1),
                    v9);
      if ( CanCastTo < 0 )
        goto LABEL_10;
    }
    (*(void (__fastcall **)(volatile signed __int64 *))(**a1 + 8))(*a1);
  }
LABEL_10:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)CanCastTo;
}
