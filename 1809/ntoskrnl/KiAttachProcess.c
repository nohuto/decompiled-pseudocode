/*
 * XREFs of KiAttachProcess @ 0x140016BD0
 * Callers:
 *     KeStackAttachProcess @ 0x140016610 (KeStackAttachProcess.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     KeAttachProcess @ 0x14012F630 (KeAttachProcess.c)
 * Callees:
 *     KiMoveApcState @ 0x140017480 (KiMoveApcState.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSetAddressPolicy @ 0x1400BA080 (KiSetAddressPolicy.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiInSwapSingleProcess @ 0x14010CA40 (KiInSwapSingleProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchVirtualAddressSpace @ 0x1402798B0 (HvlSwitchVirtualAddressSpace.c)
 */

unsigned __int64 __fastcall KiAttachProcess(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // r10
  int v12; // ebp
  struct _KPRCB *v13; // rcx
  __int64 v14; // r13
  unsigned __int64 GroupIndex; // r15
  __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *SchedulerAssist; // rcx
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rcx
  struct _KPRCB *v29; // rcx
  int v30; // [rsp+68h] [rbp+20h] BYREF

  v5 = a5;
  KiMoveApcState(a1 + 152, a5);
  v11[1] = v11;
  *v11 = v11;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  if ( v5 == a1 + 600 )
    *(_BYTE *)(a1 + 586) = 1;
  if ( (a4 & 1) == 0 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 572), 8u) & 7) != 0 )
  {
    KiReleaseThreadLockSafe(a1);
    KiInSwapSingleProcess(a1, a2, a3);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v30 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = SchedulerAssist[5];
        SchedulerAssist[5] = v23 + 1;
        if ( v23 == -1 )
LABEL_27:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb, v10);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v24 = CurrentPrcb->SchedulerAssist;
      if ( v24 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v25 = v24[5] - 1;
          v24[5] = v25;
          if ( !v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, v10);
        }
      }
      do
        KeYieldProcessorEx(&v30);
      while ( *(_QWORD *)(a1 + 64) );
      v26 = CurrentPrcb->SchedulerAssist;
      if ( v26 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v27 = v26[5];
          v26[5] = v27 + 1;
          if ( v27 == -1 )
            goto LABEL_27;
        }
      }
    }
  }
  *(_DWORD *)(a1 + 116) |= 0x800u;
  *(_QWORD *)(a1 + 184) = a2;
  v12 = a4 & 2;
  if ( !v12 )
    KiReleaseThreadLockSafe(a1);
  v13 = KeGetCurrentPrcb();
  v14 = *(_QWORD *)(v5 + 32);
  GroupIndex = v13->GroupIndex;
  v16 = 8LL * v13->Group + 280;
  _interlockedbittestandset64((volatile signed __int32 *)(v16 + a2), GroupIndex);
  v17 = *(_QWORD *)(a2 + 40);
  if ( KiKvaShadow )
  {
    v18 = *(_QWORD *)(a2 + 40);
    if ( (v17 & 2) != 0 )
      v18 = v17 | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v18);
    KiSetAddressPolicy(*(unsigned __int8 *)(a2 + 640));
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    result = HvlSwitchVirtualAddressSpace(v17);
  else
    __writecr3(v17);
  if ( !KiFlushPcid && KiKvaShadow )
  {
    v28 = __readcr4();
    if ( (v28 & 0x20080) != 0 )
    {
      result = v28 ^ 0x80;
      __writecr4(v28 ^ 0x80);
      __writecr4(v28);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v16 + v14), GroupIndex);
  *(_DWORD *)(a1 + 116) &= ~0x800u;
  if ( !v12 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a3 < 2u )
    {
      v29 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v29, v10);
    }
    result = a3;
    __writecr8(a3);
  }
  return result;
}
