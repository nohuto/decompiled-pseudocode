/*
 * XREFs of ?SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z @ 0x1C0064934
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C02975BC (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackedWorkloadMonitor::SetEffectivePowerLevel(TrackedWorkloadMonitor *this, int a2, char a3)
{
  __int64 v3; // r9

  v3 = 5LL * *((unsigned int *)this + 54);
  *((_DWORD *)this + 2 * v3 + 10) = a2;
  *((_BYTE *)this + 8 * v3 + 49) = a3;
}
