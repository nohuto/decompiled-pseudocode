/*
 * XREFs of ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001E9DC
 * Callers:
 *     ?ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1C00CB430 (-ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001C2F0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ndisStartNsiClient @ 0x1C001E888 (ndisStartNsiClient.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C001EBA8 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C001EBC8 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C0020084 (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     ndisStopNsiProvider @ 0x1C0042FD4 (ndisStopNsiProvider.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C3AC8 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C4374 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ndisStartNsiProvider @ 0x1C00CB450 (ndisStartNsiProvider.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00CB49C (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00CB4CC (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00E2324 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 */

__int64 ndisInitializeNsiHelper(void)
{
  int started; // ebx
  Ndis::BindRegistry *v1; // rcx
  struct _LIST_ENTRY *Flink; // r14
  int Network; // ebp
  struct _LIST_ENTRY *v4; // rsi
  unsigned __int8 v5; // r12
  KIRQL v6; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // r15
  unsigned __int64 v8; // rcx
  KIRQL v9; // bl
  KIRQL v11; // bl
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_(16LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids);
  if ( ndisNsiInitialized == 1 )
  {
LABEL_16:
    started = 0;
  }
  else
  {
    started = ndisStartNsiProvider();
    if ( started >= 0 )
    {
      started = ndisStartNsiClient();
      if ( started >= 0 )
      {
        ndisNsiInitialized = 1;
        ndisIfInitGetCompartmentList();
        ndisIfInitGetNetworkList();
        Flink = ndisIfCompartmentList.Flink;
        Network = 0;
        while ( 1 )
        {
          if ( Flink == &ndisIfCompartmentList )
          {
            Ndis::BindRegistry::ReadNetworkInterfaceListV2(v1);
            goto LABEL_16;
          }
          v4 = Flink;
          Flink = Flink->Flink;
          v5 = 0;
          v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)&v4[5]);
          KeReleaseSpinLock(&ndisIfListLock, v6);
          if ( NetworkBlock )
            goto LABEL_9;
          Network = ndisIfCreateNetwork((struct _GUID *)&v4[5], (unsigned int)v4[1].Flink);
          if ( Network >= 0 )
          {
            v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
            NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)&v4[5]);
            KeReleaseSpinLock(&ndisIfListLock, v11);
            if ( !NetworkBlock )
              goto LABEL_13;
LABEL_9:
            v4[3].Blink = &NetworkBlock->Link;
            if ( !v4[106].Blink )
            {
              if ( HIWORD(v4[4].Blink) )
              {
                v8 = (unsigned __int64)v4[4].Blink >> 48;
                v12 = ((unsigned __int64)v4[4].Blink >> 24) & 0xFFFFFF;
                if ( !(unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v8, &v12, 0, 0) )
                {
LABEL_12:
                  Network = ndisIfCreateInterface(
                              NetworkBlock,
                              v5,
                              (struct _NDIS_NSI_COMPARTMENT_RW *)&v4[4],
                              0LL,
                              0LL,
                              0LL,
                              0LL,
                              NdisIfBlockSourceAutomaticLoopback);
                  goto LABEL_13;
                }
                v4[4].Blink = 0LL;
              }
              v5 = 1;
              goto LABEL_12;
            }
LABEL_13:
            if ( Network >= 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)&v4[2].Blink + 1);
              ndisNsiNotifyClientCompartmentChange(v4, 1LL);
              v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              COMPARTMENTBLOCK_DECREMENT_REF(v4);
              KeReleaseSpinLock(&ndisIfListLock, v9);
            }
          }
        }
      }
      ndisStopNsiProvider();
    }
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_D(17LL, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (unsigned int)started);
  return (unsigned int)started;
}
