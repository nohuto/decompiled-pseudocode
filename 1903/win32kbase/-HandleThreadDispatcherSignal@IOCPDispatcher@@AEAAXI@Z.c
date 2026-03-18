/*
 * XREFs of ?HandleThreadDispatcherSignal@IOCPDispatcher@@AEAAXI@Z @ 0x1C0034694
 * Callers:
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0034660 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ApiSetEditionHandleMitSignal @ 0x1C003471C (ApiSetEditionHandleMitSignal.c)
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C00347B4 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 */

void __fastcall IOCPDispatcher::HandleThreadDispatcherSignal(IOCPDispatcher *this, unsigned int a2)
{
  _QWORD *v4; // rbx
  LPCWSTR *v5; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 < *((_DWORD *)this + 684) )
  {
    v4 = (_QWORD *)((char *)this + 16 * a2 + 2576);
    if ( v4[1] )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v5, L"HandleMitSignal", 0LL);
      IOCPDispatcher::SetupIOCPForDispatcherHandle(this, v4[1], *v4, 2LL, a2);
      ApiSetEditionHandleMitSignal(*v4);
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v5);
    }
  }
}
