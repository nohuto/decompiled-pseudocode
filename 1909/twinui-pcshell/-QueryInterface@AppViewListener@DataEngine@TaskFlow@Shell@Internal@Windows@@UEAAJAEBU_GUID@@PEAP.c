/*
 * XREFs of ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802183B0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D97F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800D97F0.c)
 *     ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9800 (-QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9810 (-QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9820 (-QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAJAEBU_GUID@@P.c)
 *     ?QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D9830 (-QueryInterface@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCI@EAAJAEBU_GUID@@P.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIApplicationViewChangeListener@@UIAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180217770 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180217770.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::QueryInterface(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r10
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0) )
  {
    *v7 = v8;
    CanCastTo = 0;
LABEL_6:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)CanCastTo;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::CanCastTo(
                v8 + 8,
                v9);
  if ( CanCastTo >= 0 )
    goto LABEL_6;
  return (unsigned int)CanCastTo;
}
