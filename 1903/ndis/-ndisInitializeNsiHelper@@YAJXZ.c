/*
 * XREFs of ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FB0
 * Callers:
 *     ?ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1C0108FE0 (-ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002528C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00361D8 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C00361F8 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C00368FC (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     ?ndisStartNsiClient@@YAJXZ @ 0x1C0036D9C (-ndisStartNsiClient@@YAJXZ.c)
 *     ?ndisStopNsiProvider@@YAXXZ @ 0x1C006606C (-ndisStopNsiProvider@@YAXXZ.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010301C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C0106450 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C0109000 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C0109030 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisStartNsiProvider@@_Y2PAGE@@AJXZ @ 0x1C010916C (-ndisStartNsiProvider@@_Y2PAGE@@AJXZ.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C0113C64 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 ndisInitializeNsiHelper(void)
{
  int started; // ebx
  Ndis::BindRegistry *v1; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // r14
  int Network; // ebp
  struct _NDIS_IF_COMPARTMENT_BLOCK *v4; // rsi
  unsigned __int8 v5; // r12
  KIRQL v6; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // r15
  unsigned __int16 v8; // cx
  KIRQL v9; // bl
  KIRQL v11; // bl
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      16,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids);
  if ( ndisNsiInitialized == 1 )
  {
LABEL_16:
    started = 0;
    goto LABEL_17;
  }
  started = ndisStartNsiProvider();
  if ( started < 0 )
    goto LABEL_17;
  started = ndisStartNsiClient();
  if ( started >= 0 )
  {
    ndisNsiInitialized = 1;
    ndisIfInitGetCompartmentList();
    ndisIfInitGetNetworkList();
    Flink = ndisIfCompartmentList;
    Network = 0;
    if ( ndisIfCompartmentList != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
    {
      while ( 1 )
      {
        v4 = Flink;
        Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
        v5 = 0;
        v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        NetworkBlock = ndisIfFindNetworkBlock(&v4->LoopbackInfo.LoopbackIfNetworkGuid);
        KeReleaseSpinLock(&ndisIfListLock, v6);
        if ( NetworkBlock )
          goto LABEL_8;
        Network = ndisIfCreateNetwork(&v4->LoopbackInfo.LoopbackIfNetworkGuid, v4->CompartmentId);
        if ( Network >= 0 )
          break;
LABEL_14:
        if ( Flink == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
          goto LABEL_15;
      }
      v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NetworkBlock = ndisIfFindNetworkBlock(&v4->LoopbackInfo.LoopbackIfNetworkGuid);
      KeReleaseSpinLock(&ndisIfListLock, v11);
      if ( !NetworkBlock )
      {
LABEL_12:
        if ( Network >= 0 )
        {
          _InterlockedIncrement(&v4->Ref);
          ndisNsiNotifyClientCompartmentChange(v4, 1LL);
          v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          COMPARTMENTBLOCK_DECREMENT_REF(v4);
          KeReleaseSpinLock(&ndisIfListLock, v9);
        }
        goto LABEL_14;
      }
LABEL_8:
      v4->LoopbackNetwork = NetworkBlock;
      if ( v4->LoopbackIf )
        goto LABEL_12;
      v8 = *((_WORD *)&v4->LoopbackInfo.LoopbackIfLuid.Info + 3);
      if ( v8 )
      {
        v12 = (v4->LoopbackInfo.LoopbackIfLuid.Value >> 24) & 0xFFFFFF;
        if ( !(unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v8, &v12, 0, 0) )
        {
LABEL_11:
          Network = ndisIfCreateInterface(
                      NetworkBlock,
                      v5,
                      &v4->LoopbackInfo,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      NdisIfBlockSourceAutomaticLoopback);
          goto LABEL_12;
        }
        v4->LoopbackInfo.LoopbackIfLuid.Value = 0LL;
      }
      v5 = 1;
      goto LABEL_11;
    }
LABEL_15:
    Ndis::BindRegistry::ReadNetworkInterfaceListV2(v1);
    goto LABEL_16;
  }
  ndisStopNsiProvider();
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      17,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      started);
  return (unsigned int)started;
}
