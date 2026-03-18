/*
 * XREFs of KiDisconnectInterruptCommon @ 0x14017BE74
 * Callers:
 *     KeDisconnectInterrupt @ 0x14017BB10 (KeDisconnectInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402A9FC4 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KiDisconnectInterruptInternal @ 0x14017BFBC (KiDisconnectInterruptInternal.c)
 *     KiAcquireInterruptConnectLock @ 0x14017C5D0 (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1402A9D4C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x1402AA0D4 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiSignalWaitDisconnectLock @ 0x1402B13E0 (KiSignalWaitDisconnectLock.c)
 */

__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *v4; // rcx
  unsigned int v7; // esi
  char v8; // r12
  KSPIN_LOCK *v9; // rdi
  __int64 v10; // rdx
  struct _KPRCB *v12; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v17; // [rsp+38h] [rbp-38h]
  _QWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+50h] [rbp-20h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-18h] BYREF

  v18[1] = a3;
  v15 = 0LL;
  v16 = 0LL;
  v4 = *(struct _KTHREAD **)(a2 + 152);
  v17 = 0LL;
  PreviousAffinity.Mask = 0LL;
  v7 = -1073741585;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  v8 = 0;
  v18[0] = 0LL;
  v19 = 0LL;
  if ( v4 != KeGetCurrentThread() )
  {
    LOWORD(v15) = 1;
    v17 = &v16;
    v16 = (__int64)&v16;
    v18[0] = &v15;
    BYTE2(v15) = 6;
    HIDWORD(v15) = 0;
  }
  if ( a1 )
  {
    v9 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    KiAcquireSecondaryInterruptConnectLock(v9);
  }
  else
  {
    v9 = 0LL;
    KiAcquireInterruptConnectLock(*(unsigned int *)(a2 + 96), v14, &PreviousAffinity);
  }
  if ( *(_BYTE *)(a2 + 95) && (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    if ( *(_WORD *)(a2 + 102) )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
      v8 = 1;
      *(_QWORD *)(a2 + 144) = v18;
    }
    else
    {
      if ( !a1 )
      {
        v7 = KiDisconnectInterruptInternal(a2, a3);
        goto LABEL_10;
      }
      v7 = KiDisconnectSecondaryInterruptInternal(a2);
    }
  }
  if ( !a1 )
  {
LABEL_10:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14[0] < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v14[0]);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    goto LABEL_12;
  }
  KxReleaseSpinLock(v9);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14[0] < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v12);
  }
  __writecr8(v14[0]);
LABEL_12:
  if ( v18[0] && v8 )
  {
    LOBYTE(v10) = 1;
    KiSignalWaitDisconnectLock(v18[0], v10);
    return (unsigned int)v19;
  }
  return v7;
}
