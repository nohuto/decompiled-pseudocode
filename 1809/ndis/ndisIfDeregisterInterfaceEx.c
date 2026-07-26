/*
 * XREFs of ndisIfDeregisterInterfaceEx @ 0x1C0042598
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0042394 (ndisIfCreateOrUpdateInterface.c)
 *     NdisIfDeregisterInterface @ 0x1C00E2EB0 (NdisIfDeregisterInterface.c)
 * Callees:
 *     ndisIfDereferenceMiniport @ 0x1C000A8E0 (ndisIfDereferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C000E020 (ndisIfReferenceMiniport.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001C21C (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterface @ 0x1C0022DB4 (ndisIfFindInterface.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     NdisMRemoveMiniportInternal @ 0x1C00650EC (NdisMRemoveMiniportInternal.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C4184 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00F8554 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

void __fastcall ndisIfDeregisterInterfaceEx(int a1, int a2)
{
  struct _LIST_ENTRY *Interface; // rax
  KIRQL v5; // r10
  struct _NDIS_IF_BLOCK *v6; // rdi
  unsigned __int16 v7; // cx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  KIRQL v11; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_D(0x25u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Interface = ndisIfFindInterface(a1);
  v6 = (struct _NDIS_IF_BLOCK *)Interface;
  if ( LOBYTE(Interface[87].Blink) )
    v6 = 0LL;
  else
    LOBYTE(Interface[87].Blink) = 1;
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( !v6 )
  {
    if ( (unsigned __int8)byte_1C00A0265 < 3u )
      return;
    v7 = 38;
    goto LABEL_17;
  }
  v8 = ndisIfReferenceMiniport((__int64)v6, 0x14u);
  v9 = v8;
  if ( v8 )
  {
    ndisMSetMiniportReadyForBinding(v8, 0LL, 0x800000LL);
    NdisMRemoveMiniportInternal(v9, 76LL);
    ndisIfDereferenceMiniport((__int64)v6, v10, 0x14u);
  }
  ndisPcwNotifyIfBlockRemoval(v6);
  ndisNsiNotifyClientInterfaceChange(v6, 2LL, 0LL, 1LL);
  if ( !a2 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6->AsyncEvent = &Event;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF(v6, 0xFFu);
  KeReleaseSpinLock(&ndisIfListLock, v11);
  if ( !a2 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
  {
    v7 = 39;
LABEL_17:
    WPP_SF_D(v7, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1);
  }
}
