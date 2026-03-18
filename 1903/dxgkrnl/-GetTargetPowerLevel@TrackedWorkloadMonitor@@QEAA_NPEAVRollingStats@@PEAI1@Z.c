/*
 * XREFs of ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C00646F0
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C02971AC (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z.c)
 * Callees:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z @ 0x1C0064588 (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z.c)
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0064910 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0064A08 (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?Update@RollingStats@@IEAAXXZ @ 0x1C0064AD0 (-Update@RollingStats@@IEAAXXZ.c)
 */

char __fastcall TrackedWorkloadMonitor::GetTargetPowerLevel(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char v5; // r12
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // r15d
  int v11; // ebp
  int v12; // esi
  unsigned int v13; // ecx
  int v15; // ecx
  unsigned int *v16; // rax
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v18; // [rsp+70h] [rbp+18h]

  v18 = a3;
  v5 = 0;
  v8 = 5LL * *((unsigned int *)this + 54);
  v9 = *((_DWORD *)a2 + 5);
  v10 = *((_DWORD *)this + 10 * *((unsigned int *)this + 54) + 10);
  v11 = *((_DWORD *)this + 10 * *((unsigned int *)this + 54) + 4);
  v12 = v11;
  v13 = *((_DWORD *)a2 + 6);
  v17 = v10;
  if ( v9 < v13 )
  {
    if ( v11 != 1 )
      return 0;
    goto LABEL_27;
  }
  if ( v11 == 1 )
  {
LABEL_27:
    if ( *((_DWORD *)this + 2 * v8 + 11) || v9 < v13 )
      goto LABEL_15;
    v10 = 80;
    if ( *(_DWORD *)this )
      v10 = *(_DWORD *)this;
    v17 = v10;
    RollingStats::Update(a2);
    *((_QWORD *)this + v8 + 3) = *((_QWORD *)a2 + 4);
    RollingStats::Update(a2);
    *((_QWORD *)this + v8 + 4) = *((_QWORD *)a2 + 5);
    *((_DWORD *)this + 2 * v8 + 10) = v10;
LABEL_32:
    v12 = 6;
    goto LABEL_33;
  }
  if ( v11 == 3 )
  {
    if ( *((_DWORD *)this + 2 * v8 + 11) )
      goto LABEL_15;
    v12 = 6;
LABEL_35:
    TrackedWorkloadMonitor::ChangeState((__int64)this, v12, a2, v17);
    goto LABEL_17;
  }
  if ( v11 <= 3 )
    goto LABEL_15;
  if ( v11 <= 5 )
  {
    if ( *((_BYTE *)this + 8 * v8 + 49) || !TrackedWorkloadMonitor::ShouldIncreasePower(this, a2, &v17) )
    {
      if ( *((_DWORD *)this + 2 * v8 + 11) )
        goto LABEL_15;
      goto LABEL_32;
    }
    v12 = 4;
  }
  else
  {
    if ( v11 != 6 )
      goto LABEL_15;
    if ( !*((_BYTE *)this + 8 * v8 + 49) && TrackedWorkloadMonitor::ShouldIncreasePower(this, a2, &v17) )
    {
      v12 = 4;
      goto LABEL_35;
    }
    if ( TrackedWorkloadMonitor::ShouldDecreasePower(this, a2, &v17) )
    {
      v12 = 5;
      goto LABEL_35;
    }
    if ( *((_DWORD *)this + 2 * v8 + 11) )
      goto LABEL_15;
  }
  v5 = 1;
LABEL_33:
  if ( v12 != v11 || v5 )
    goto LABEL_35;
LABEL_15:
  v15 = *((_DWORD *)this + 2 * v8 + 11);
  if ( v15 )
    *((_DWORD *)this + 2 * v8 + 11) = v15 - 1;
LABEL_17:
  if ( v10 == v17 )
    return 0;
  v16 = v18;
  *a4 = v17;
  *v16 = v10;
  return 1;
}
