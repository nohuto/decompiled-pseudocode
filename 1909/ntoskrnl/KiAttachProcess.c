/*
 * XREFs of KiAttachProcess @ 0x140043560
 * Callers:
 *     KeStackAttachProcess @ 0x140013D00 (KeStackAttachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KeAttachProcess @ 0x140130690 (KeAttachProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiSetAddressPolicy @ 0x140043BF0 (KiSetAddressPolicy.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x140109250 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchVirtualAddressSpace @ 0x14028D770 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiAttachProcess(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, __int64 a5)
{
  __int64 v5; // rdi
  _QWORD *v6; // r10
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  int v14; // ebp
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  struct _KPRCB *v17; // rcx
  __int64 v18; // r12
  unsigned __int64 GroupIndex; // r15
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  __int64 *v24; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v28; // rcx
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  int v34; // eax
  unsigned __int64 v35; // rcx
  struct _KPRCB *v36; // rcx
  int v37; // [rsp+68h] [rbp+20h] BYREF

  v5 = a5;
  v6 = (_QWORD *)(a1 + 152);
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(a1 + 184);
  *(_BYTE *)(v5 + 40) = *(_BYTE *)(a1 + 192);
  *(_BYTE *)(v5 + 41) = *(_BYTE *)(a1 + 193);
  *(_BYTE *)(v5 + 42) = *(_BYTE *)(a1 + 194);
  v11 = *(_QWORD **)(a1 + 152);
  if ( v11 == v6 )
  {
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    *(_BYTE *)(v5 + 41) = 0;
  }
  else
  {
    v24 = (__int64 *)v6[1];
    *(_QWORD *)v5 = v11;
    *(_QWORD *)(v5 + 8) = v24;
    v11[1] = v5;
    *v24 = v5;
  }
  v12 = (_QWORD *)v6[2];
  v13 = (_QWORD *)(v5 + 16);
  if ( v12 == v6 + 2 )
  {
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *v13 = v13;
    *(_BYTE *)(v5 + 42) = 0;
  }
  else
  {
    v28 = (_QWORD *)v6[3];
    *v13 = v12;
    *(_QWORD *)(v5 + 24) = v28;
    v12[1] = v13;
    *v28 = v13;
  }
  v6[1] = v6;
  *v6 = v6;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  if ( v5 == a1 + 600 )
    *(_BYTE *)(a1 + 586) = 1;
  if ( (a4 & 1) == 0 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 576), 8u) & 7) != 0 )
  {
    KiReleaseThreadLockSafe(a1);
    KiInSwapSingleProcess(a1, a2, a3);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v37 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = SchedulerAssist[5];
        SchedulerAssist[5] = v29 + 1;
        if ( v29 == -1 )
LABEL_33:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v30 = CurrentPrcb->SchedulerAssist;
      if ( v30 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v31 = v30[5] - 1;
          v30[5] = v31;
          if ( !v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v37);
      while ( *(_QWORD *)(a1 + 64) );
      v32 = CurrentPrcb->SchedulerAssist;
      if ( v32 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v33 = v32[5];
          v32[5] = v33 + 1;
          if ( v33 == -1 )
            goto LABEL_33;
        }
      }
    }
  }
  *(_DWORD *)(a1 + 116) |= 0x800u;
  *(_QWORD *)(a1 + 184) = a2;
  v14 = a4 & 2;
  if ( !v14 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v34 = v16[5] - 1;
        v16[5] = v34;
        if ( !v34 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
  }
  v17 = KeGetCurrentPrcb();
  v18 = *(_QWORD *)(v5 + 32);
  GroupIndex = v17->GroupIndex;
  v20 = 8LL * v17->Group + 280;
  _interlockedbittestandset64((volatile signed __int32 *)(v20 + a2), GroupIndex);
  v21 = *(_QWORD *)(a2 + 40);
  if ( KiKvaShadow )
  {
    v22 = *(_QWORD *)(a2 + 40);
    if ( (v21 & 2) != 0 )
      v22 = v21 | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v22);
    KiSetAddressPolicy(*(unsigned __int8 *)(a2 + 648));
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    result = HvlSwitchVirtualAddressSpace(v21);
  else
    __writecr3(v21);
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v35 = __readcr4();
    if ( (v35 & 0x20080) != 0 )
    {
      result = v35 ^ 0x80;
      __writecr4(v35 ^ 0x80);
      __writecr4(v35);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v20 + v18), GroupIndex);
  *(_DWORD *)(a1 + 116) &= ~0x800u;
  if ( !v14 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a3 < 2u )
    {
      v36 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v36);
    }
    result = a3;
    __writecr8(a3);
  }
  return result;
}
