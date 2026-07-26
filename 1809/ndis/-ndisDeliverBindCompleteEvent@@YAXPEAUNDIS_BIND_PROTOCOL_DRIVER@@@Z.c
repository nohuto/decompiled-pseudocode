/*
 * XREFs of ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00BEAB8
 * Callers:
 *     _lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_ @ 0x1C00BFBE0 (_lambda_544ec5177f50874f26890ac2c9d93654_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C001A488 (ndisReferenceProtocol.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2F4C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisDeliverBindCompleteEvent(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  _NDIS_PROTOCOL_BLOCK *RunningDriver; // rbx
  KLockHolder v3; // [rsp+20h] [rbp-28h] BYREF

  v3.m_State = Unlocked;
  v3.m_Region.m_Entered = 0;
  v3.m_Lock = (KPushLockBase *)(qword_1C00A07D8 + 16);
  KLockHolder::AcquireExclusive(&v3);
  RunningDriver = a1->RunningDriver;
  if ( RunningDriver && (RunningDriver->MajorNdisVersion >= 6u || RunningDriver->PnPEventHandler) )
  {
    if ( ndisReferenceProtocol((__int64)RunningDriver, 0xCu) )
    {
      KLockHolder::ReleaseExclusive(&v3);
      if ( _InterlockedCompareExchange(&RunningDriver->NotifyBindCompleteWorkItem.m_queued, 1, 0) )
        ndisDereferenceProtocol(RunningDriver, 1LL, 0xCu);
      else
        ExQueueWorkItem(&RunningDriver->NotifyBindCompleteWorkItem.m_workitem, NormalWorkQueue);
    }
  }
  KLockHolder::~KLockHolder(&v3);
}
