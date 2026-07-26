/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1C0103B6C
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C00163F8 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01292D8 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
