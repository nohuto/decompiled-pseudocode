/*
 * XREFs of NdisIfDeleteIfStackEntry @ 0x1C0041380
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z @ 0x1C0022DEC (-ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z.c)
 *     WPP_SF_dL @ 0x1C0041D30 (WPP_SF_dL.c)
 */

void __stdcall NdisIfDeleteIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  KIRQL v4; // si
  struct _NDIS_IF_STACK_ENTRY *StackEntry; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  __int64 v8; // rdx

  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_dL(46LL, LowerLayerIfIndex, HigherLayerIfIndex, LowerLayerIfIndex);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  StackEntry = ndisIfFindStackEntry(HigherLayerIfIndex, LowerLayerIfIndex);
  if ( StackEntry )
  {
    --StackEntry->HigherLayerIf->LowerLayerIfCount;
    --StackEntry->LowerLayerIf->HigherLayerIfCount;
    Flink = StackEntry->Link.Flink;
    if ( (struct _NDIS_IF_STACK_ENTRY *)StackEntry->Link.Flink->Blink != StackEntry
      || (Blink = StackEntry->Link.Blink, (struct _NDIS_IF_STACK_ENTRY *)Blink->Flink != StackEntry) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    ExFreePoolWithTag(StackEntry, 0);
  }
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_dL(47LL, v8, HigherLayerIfIndex, LowerLayerIfIndex);
}
