/*
 * XREFs of ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C005D494
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C0260354 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z.c)
 * Callees:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z @ 0x1C005D348 (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z.c)
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C005D694 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C005D78C (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C005D854 (-Update@RollingStats@@IEAAXXZ.c)
 */

char __fastcall TrackedWorkloadMonitor::GetTargetPowerLevel(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v4; // rax
  char v6; // r12
  __int64 v9; // rsi
  unsigned int v10; // eax
  unsigned int v11; // r15d
  int v12; // ebp
  int v13; // edi
  unsigned int v14; // ecx
  int v16; // ecx
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v18; // [rsp+70h] [rbp+18h]

  v18 = a3;
  v4 = *((unsigned int *)this + 54);
  *a3 = 0;
  v6 = 0;
  *a4 = 0;
  v9 = 5 * v4;
  v10 = *((_DWORD *)a2 + 5);
  v11 = *((_DWORD *)this + 2 * v9 + 10);
  v12 = *((_DWORD *)this + 2 * v9 + 4);
  v13 = v12;
  v14 = *((_DWORD *)a2 + 6);
  v17 = v11;
  if ( v10 < v14 )
  {
    if ( v12 != 1 )
      return 0;
    goto LABEL_25;
  }
  if ( v12 == 1 )
  {
LABEL_25:
    if ( *((_DWORD *)this + 2 * v9 + 11) || v10 < v14 )
      goto LABEL_14;
    v11 = 80;
    if ( *(_DWORD *)this )
      v11 = *(_DWORD *)this;
    v17 = v11;
    RollingStats::Update(a2);
    *((_QWORD *)this + v9 + 3) = *((_QWORD *)a2 + 4);
    RollingStats::Update(a2);
    *((_QWORD *)this + v9 + 4) = *((_QWORD *)a2 + 5);
    *((_DWORD *)this + 2 * v9 + 10) = v11;
LABEL_30:
    v13 = 6;
    goto LABEL_31;
  }
  if ( v12 == 3 )
  {
    if ( *((_DWORD *)this + 2 * v9 + 11) )
      goto LABEL_14;
    v13 = 6;
LABEL_33:
    TrackedWorkloadMonitor::ChangeState((__int64)this, v13, a2, v17);
    goto LABEL_16;
  }
  if ( v12 <= 3 )
    goto LABEL_14;
  if ( v12 <= 5 )
  {
    if ( !TrackedWorkloadMonitor::ShouldIncreasePower(this, a2, &v17) )
    {
      if ( *((_DWORD *)this + 2 * v9 + 11) )
        goto LABEL_14;
      goto LABEL_30;
    }
    v13 = 4;
  }
  else
  {
    if ( v12 != 6 )
      goto LABEL_14;
    if ( TrackedWorkloadMonitor::ShouldIncreasePower(this, a2, &v17) )
    {
      v13 = 4;
      goto LABEL_33;
    }
    if ( TrackedWorkloadMonitor::ShouldDecreasePower(this, a2, &v17) )
    {
      v13 = 5;
      goto LABEL_33;
    }
    if ( *((_DWORD *)this + 2 * v9 + 11) )
      goto LABEL_14;
  }
  v6 = 1;
LABEL_31:
  if ( v13 != v12 || v6 )
    goto LABEL_33;
LABEL_14:
  v16 = *((_DWORD *)this + 2 * v9 + 11);
  if ( v16 )
    *((_DWORD *)this + 2 * v9 + 11) = v16 - 1;
LABEL_16:
  if ( v11 == v17 )
    return 0;
  *a4 = v17;
  *v18 = v11;
  return 1;
}
