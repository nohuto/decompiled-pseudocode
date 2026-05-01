/*
 * XREFs of ?Create@AppViewListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x180217830
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x180217064 (--$MakeAndInitialize@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEA.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIApplicationViewChangeListener@@UIAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180217770 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180217770.c)
 *     ?InternalRelease@?$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180217EC0 (-InternalRelease@-$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory::Create(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListenerFactory *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *a2,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener **a3)
{
  int v4; // eax
  int CanCastTo; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *v10; // r9
  _DWORD *v11; // rdx
  struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter *v15; // [rsp+48h] [rbp+10h] BYREF
  struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener *v16; // [rsp+50h] [rbp+18h] BYREF

  v15 = a2;
  *a3 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(&v16);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
         (volatile signed __int64 **)&v16,
         &v15);
  CanCastTo = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 30LL;
    goto LABEL_12;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_e9821dd9_a9b2_47c8_9aac_7b6b042ef0b0, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v12 = v16;
    *a3 = v16;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener *))(*(_QWORD *)v12 + 8LL))(v12);
    CanCastTo = 0;
    goto LABEL_10;
  }
  if ( InlineIsEqualGUID(v9, v10) )
  {
    *a3 = v16;
    CanCastTo = 0;
LABEL_8:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    goto LABEL_10;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationViewChangeListener,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewListener,IWindowSnappingEvents,Microsoft::WRL::FtmBase>::CanCastTo(
                (__int64)v16 + 8,
                v11);
  if ( CanCastTo >= 0 )
    goto LABEL_8;
LABEL_10:
  if ( CanCastTo >= 0 )
  {
    CanCastTo = 0;
    goto LABEL_14;
  }
  v6 = (unsigned int)CanCastTo;
  v7 = 31LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
    (const char *)v6);
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(&v16);
  return (unsigned int)CanCastTo;
}
