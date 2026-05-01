/*
 * XREFs of ?QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B990
 * Callers:
 *     ?QueryInterface@HolographicPositioner@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9C00 (-QueryInterface@HolographicPositioner@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9C10 (-QueryInterface@HolographicPositioner@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9C20 (-QueryInterface@HolographicPositioner@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9C30 (-QueryInterface@HolographicPositioner@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9C40 (-QueryInterface@HolographicPositioner@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9C50 (-QueryInterface@HolographicPositioner@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9C60 (-QueryInterface@HolographicPositioner@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9C70 (-QueryInterface@HolographicPositioner@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9C80 (-QueryInterface@HolographicPositioner@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9C90 (-QueryInterface@HolographicPositioner@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9CA0 (-QueryInterface@HolographicPositioner@@WLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HolographicPositioner@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9CB0 (-QueryInterface@HolographicPositioner@@WLI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UITabbingAwarePositioner@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002BD3C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18002BD3C.c)
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::QueryInterface(
        HolographicPositioner *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  int IsEqualGUID; // eax
  _DWORD *v16; // r9
  __int64 v17; // r10
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3, a2)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v4, v5) )
  {
    *v4 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v8, v7, v4, v9) )
  {
    *v12 = v14;
    CanCastTo = 0;
LABEL_13:
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 8LL))(*v12, v10);
    return (unsigned int)CanCastTo;
  }
  IsEqualGUID = InlineIsEqualGUID(v11, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352, v12, v13);
  v10 = 2147500034LL;
  if ( IsEqualGUID )
  {
    *v12 = v17;
LABEL_21:
    CanCastTo = 0;
    goto LABEL_10;
  }
  if ( *v16 == -428157847
    && v16[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
    && v16[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
    && v16[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
  {
    *v12 = v17 + 40;
    goto LABEL_21;
  }
  if ( *v16 == 1834041537
    && v16[1] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data2
    && v16[2] == *(_DWORD *)GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4
    && v16[3] == *(_DWORD *)&GUID_6d5140c1_7436_11ce_8034_00aa006009fa.Data4[4] )
  {
    *v12 = v17 + 48;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = -2147467262;
  }
  if ( CanCastTo == -2147467262 )
    CanCastTo = -2147467262;
LABEL_10:
  if ( CanCastTo == -2147467262 )
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<ITabbingAwarePositioner>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::CanCastTo(
                  v17 + 104,
                  v16);
  if ( CanCastTo >= 0 )
    goto LABEL_13;
  return (unsigned int)CanCastTo;
}
