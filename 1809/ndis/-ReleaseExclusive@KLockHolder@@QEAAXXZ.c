/*
 * XREFs of ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C
 * Callers:
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00B8FF8 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00BEAB8 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00C080C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00C0AFC (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z @ 0x1C00C324C (-DispatchPendingWork@BindEngine@Ndis@@AEAAXW4CallRunMode@@AEAVKLockThisExclusive@@@Z.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C956C (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C00D0F70 (-UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ.c)
 *     ndisNdkPcwMiniportCleanup @ 0x1C00F7E38 (ndisNdkPcwMiniportCleanup.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C00FE3CC (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C0100D90 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C0101214 (-ndisPDCleanupPDBlock@@YAXPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C01013F0 (-ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z.c)
 *     ?NdisPDBMRemoveMemberFromDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C0103070 (-NdisPDBMRemoveMemberFromDomain@@YAXPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C0106CDC (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C0107808 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0107920 (-ReferenceWdi@@YA_NXZ.c)
 *     ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x1C0107D28 (-Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ.c)
 *     ?Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS@@@Z @ 0x1C0107DF4 (-Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS.c)
 *     ?Iterate@@YA_NXZ @ 0x1C0107FF0 (-Iterate@@YA_NXZ.c)
 *     ?NetPacketStateUpdate@@YAXXZ @ 0x1C01081EC (-NetPacketStateUpdate@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KLockHolder::ReleaseExclusive(KLockHolder *this)
{
  ExReleasePushLockExclusiveEx(this->m_Lock, 0LL);
  this->m_State = Unlocked;
  this->m_Region.m_Entered = 0;
  KeLeaveCriticalRegion();
}
