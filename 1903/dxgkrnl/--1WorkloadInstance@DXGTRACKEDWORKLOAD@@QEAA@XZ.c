/*
 * XREFs of ??1WorkloadInstance@DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C0049DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1C0296FDC (-DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::WorkloadInstance::~WorkloadInstance(DXGTRACKEDWORKLOAD::WorkloadInstance *this)
{
  MonitoredFenceHelper::DestroySynchObject((DXGTRACKEDWORKLOAD::WorkloadInstance *)((char *)this + 48));
}
