/*
 * XREFs of MiIncrementAweMapCount @ 0x1402B0FA4
 * Callers:
 *     MiReferenceIncomingPhysicalPages @ 0x14085119C (MiReferenceIncomingPhysicalPages.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangeAwePageAttributes @ 0x1402B01A4 (MiChangeAwePageAttributes.c)
 */

__int64 __fastcall MiIncrementAweMapCount(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int i; // r14d
  unsigned __int8 v7; // bl
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // r15
  int v11; // r14d
  struct _KPRCB *v12; // rcx
  bool v13; // zf
  unsigned __int64 v14; // rsi
  struct _KPRCB *v15; // rcx
  int v16; // r12d
  struct _KPRCB *v17; // rcx
  struct _KTHREAD *v18; // r15
  _QWORD *v19; // r14
  _QWORD *v20; // rsi
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rbx
  struct _KPRCB *v26; // rcx
  __int64 v27; // rdx
  struct _KPRCB *v28; // rcx
  _QWORD v29[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v30; // [rsp+30h] [rbp-20h] BYREF
  char v31; // [rsp+32h] [rbp-1Eh]
  int v32; // [rsp+34h] [rbp-1Ch]
  _QWORD v33[3]; // [rsp+38h] [rbp-18h] BYREF

  for ( i = a3; ; i = a3 )
  {
    while ( 1 )
    {
      v7 = MiLockPageInline(a2);
      if ( (*(_DWORD *)a1 & 1) != 0 && (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_54;
      v8 = *(_BYTE *)(a2 + 34);
      if ( (v8 & 0x20) == 0 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v7);
      CurrentThread = KeGetCurrentThread();
      v32 = 0;
      v33[1] = v33;
      v33[0] = v33;
      v29[1] = a2;
      v30 = 263;
      v31 = 6;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
      MiLockPageInline(a2);
      if ( (*(_BYTE *)(a2 + 34) & 0x20) != 0 )
      {
        v11 = 1;
        v29[0] = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 48) = v29;
      }
      else
      {
        v11 = 0;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
      {
        v12 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v12);
      }
      __writecr8(v7);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
      KeAbPostRelease(a1 + 40);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v13 = v11 == 0;
      i = a3;
      if ( !v13 )
        KeWaitForGate((__int64)&v30, 0x12u);
    }
    v14 = *(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v8 >> 6 == i )
      goto LABEL_51;
    if ( *(_WORD *)(a2 + 32) > 2u || v14 != 1 || (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_54;
    if ( *(_QWORD *)(a1 + 8) == 1LL )
      break;
    *(_BYTE *)(a2 + 34) = v8 | 0x20;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v15 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v15);
    }
    __writecr8(v7);
    v16 = MiChangeAwePageAttributes(a1, a2, i);
    MiLockPageInline(a2);
    *(_BYTE *)(a2 + 34) &= ~0x20u;
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v17);
    }
    __writecr8(v7);
    v18 = KeGetCurrentThread();
    v19 = (_QWORD *)(a1 + 48);
    v20 = 0LL;
    --v18->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
    v21 = *(_QWORD **)(a1 + 48);
    if ( v21 )
    {
      do
      {
        v22 = (_QWORD *)*v21;
        if ( v21[1] == a2 )
        {
          *v21 = v20;
          v20 = v21;
          *v19 = v22;
        }
        else
        {
          v19 = v21;
        }
        v21 = v22;
      }
      while ( v22 );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
    KeAbPostRelease(a1 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)v18);
    if ( v20 )
    {
      do
      {
        v24 = (_QWORD *)*v20;
        KeSignalGate((__int64)(v20 + 2), 1LL, v23);
        v20 = v24;
      }
      while ( v24 );
    }
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  MiChangePageAttribute(a2, i, 1);
LABEL_51:
  if ( v14 > 1 && (*(_DWORD *)a1 & 1) != 0 || v14 >= 0x3FFFFFFFFFFFFFFFLL )
  {
LABEL_54:
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v26);
    }
    __writecr8(v7);
    return 3221225496LL;
  }
  v27 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 8) = a4;
  *(_QWORD *)(a2 + 24) = v27 ^ ((v27 + 1) ^ v27) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    v28 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v28);
  }
  __writecr8(v7);
  return 0LL;
}
