/*
 * XREFs of KiSelectCandidateProcessor @ 0x1402B5B38
 * Callers:
 *     KiChooseTargetProcessor @ 0x1400691D0 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402AF2E8 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v6; // rdi
  volatile LONG *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  char v10; // cl
  int v11; // edx
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  int v18; // [rsp+40h] [rbp+8h] BYREF
  int v19; // [rsp+48h] [rbp+10h]

  v3 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v6 = *(_QWORD *)(v3 + 136) & *(_QWORD *)(a2 + 576);
  v7 = (volatile LONG *)(v3 + 104);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 104));
  v8 = *(_QWORD *)(v3 + 80) & v6;
  v9 = a3 & v8;
  if ( (a3 & v8) == 0 )
    v9 = v8;
  if ( v9 )
  {
    v10 = *(_BYTE *)(v4 + 209);
    _BitScanForward64((unsigned __int64 *)&v9, __ROR8__(v9, v10));
    v11 = *(unsigned __int8 *)(v4 + 208) << 6;
    v19 = ((_BYTE)v9 + v10) & 0x3F;
    v4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v19 + v11]];
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = SchedulerAssist[5];
        SchedulerAssist[5] = v14 + 1;
        if ( v14 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      break;
    v15 = CurrentPrcb->SchedulerAssist;
    if ( v15 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v15[5] - 1;
        v15[5] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v18);
    while ( *(_QWORD *)(v4 + 48) );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v7);
  return v4;
}
