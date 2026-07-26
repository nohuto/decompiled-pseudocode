/*
 * XREFs of ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C010B04C
 * Callers:
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C0103950 (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KLockHolder::ReleaseShared(KLockHolder *this)
{
  ExReleasePushLockEx(this->m_Lock, 0LL);
  this->m_State = Unlocked;
  this->m_Region.m_Entered = 0;
  KeLeaveCriticalRegion();
}
