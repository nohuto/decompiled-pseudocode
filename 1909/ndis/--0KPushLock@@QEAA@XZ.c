/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1C0123FCC
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C002CEFC (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0146360 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
