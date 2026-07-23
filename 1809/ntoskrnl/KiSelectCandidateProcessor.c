/*
 * XREFs of KiSelectCandidateProcessor @ 0x14029D55C
 * Callers:
 *     KiChooseTargetProcessor @ 0x1400C4310 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x14029887C (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v6; // rdi
  volatile LONG *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rax
  char v12; // cl
  __int64 v13; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  int v20; // [rsp+40h] [rbp+8h] BYREF
  int v21; // [rsp+48h] [rbp+10h]

  v3 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v6 = *(_QWORD *)(v3 + 136) & *(_QWORD *)(a2 + 576);
  v7 = (volatile LONG *)(v3 + 96);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 96));
  v10 = *(_QWORD *)(v3 + 80) & v6;
  v11 = a3 & v10;
  if ( (a3 & v10) == 0 )
    v11 = v10;
  if ( v11 )
  {
    v12 = *(_BYTE *)(v4 + 209);
    _BitScanForward64((unsigned __int64 *)&v11, __ROR8__(v11, v12));
    v8 = *(unsigned __int8 *)(v4 + 208) << 6;
    v13 = (unsigned int)KiProcessorNumberToIndexMappingTable[(unsigned int)v8 + (((_BYTE)v11 + v12) & 0x3F)];
    v21 = v13;
    v4 = KiProcessorBlock[v13];
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = SchedulerAssist[5];
        SchedulerAssist[5] = v16 + 1;
        if ( v16 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      break;
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = v17[5] - 1;
        v17[5] = v18;
        if ( !v18 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v20, v8, v9);
    while ( *(_QWORD *)(v4 + 48) );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v7);
  return v4;
}
