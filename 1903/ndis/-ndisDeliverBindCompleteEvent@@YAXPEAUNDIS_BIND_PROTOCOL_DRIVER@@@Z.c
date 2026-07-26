/*
 * XREFs of ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C0105388
 * Callers:
 *     _lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_ @ 0x1C0105420 (_lambda_544ec5177f50874f26890ac2c9d93654_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C00280F0 (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0028420 (ndisReferenceProtocol.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C010A050 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisDeliverBindCompleteEvent(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rbx
  int v3; // r9d
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  v4.m_State = Unlocked;
  v4.m_Region.m_Entered = 0;
  v4.m_Lock = (KPushLockBase *)(qword_1C00E67B8 + 16);
  KLockHolder::AcquireExclusive(&v4);
  RunningDriver = a1->RunningDriver;
  if ( RunningDriver
    && (RunningDriver->MajorNdisVersion >= 6u || RunningDriver->PnPEventHandler)
    && ndisReferenceProtocol((__int64)RunningDriver, 0xCu) )
  {
    KLockHolder::ReleaseExclusive(&v4);
    if ( _InterlockedCompareExchange(&RunningDriver->NotifyBindCompleteWorkItem.m_queued, 1, 0) )
      ndisDereferenceProtocol(RunningDriver, 1LL, 0xCu, v3);
    else
      ExQueueWorkItem(&RunningDriver->NotifyBindCompleteWorkItem.m_workitem, NormalWorkQueue);
  }
  KLockHolder::~KLockHolder(&v4);
}
