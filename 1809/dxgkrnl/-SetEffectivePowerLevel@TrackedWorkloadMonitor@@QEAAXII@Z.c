/*
 * XREFs of ?SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXII@Z @ 0x1C005D67C
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C0260354 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackedWorkloadMonitor::SetEffectivePowerLevel(TrackedWorkloadMonitor *this, int a2)
{
  *((_DWORD *)this + 10 * *((unsigned int *)this + 54) + 10) = a2;
}
