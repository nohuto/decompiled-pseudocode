/*
 * XREFs of KiDisconnectInterruptCommon @ 0x14016D794
 * Callers:
 *     KeDisconnectInterrupt @ 0x14016D3C0 (KeDisconnectInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402937D4 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KiDisconnectInterruptInternal @ 0x14016D8D4 (KiDisconnectInterruptInternal.c)
 *     KiAcquireInterruptConnectLock @ 0x14016DF38 (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14029355C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x1402938E4 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiSignalWaitDisconnectLock @ 0x14029A2D0 (KiSignalWaitDisconnectLock.c)
 */

__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r14d
  char v7; // r13
  KSPIN_LOCK *v8; // rsi
  __int64 v9; // rdx
  struct _KPRCB *v11; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v14; // [rsp+28h] [rbp-58h] BYREF
  char v15; // [rsp+2Ah] [rbp-56h]
  int v16; // [rsp+2Ch] [rbp-54h]
  _QWORD v17[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+58h] [rbp-28h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-20h] BYREF

  v18[1] = a3;
  v18[0] = 0LL;
  v19 = 0LL;
  v6 = -1073741585;
  v7 = 0;
  if ( *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
  {
    v14 = 1;
    v17[1] = v17;
    v17[0] = v17;
    v18[0] = &v14;
    v15 = 6;
    v16 = 0;
  }
  if ( a1 )
  {
    v8 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    KiAcquireSecondaryInterruptConnectLock(v8);
  }
  else
  {
    v8 = 0LL;
    KiAcquireInterruptConnectLock(*(unsigned int *)(a2 + 96), v13, &PreviousAffinity);
  }
  if ( *(_BYTE *)(a2 + 95) && (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    if ( *(_WORD *)(a2 + 102) )
    {
      v20 = 2;
      _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
      v7 = 1;
      *(_QWORD *)(a2 + 144) = v18;
    }
    else
    {
      if ( !a1 )
      {
        v6 = KiDisconnectInterruptInternal(a2, a3);
        goto LABEL_10;
      }
      v6 = KiDisconnectSecondaryInterruptInternal(a2);
    }
  }
  if ( !a1 )
  {
LABEL_10:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13[0] < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v13[0]);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    goto LABEL_12;
  }
  KxReleaseSpinLock(v8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13[0] < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v11);
  }
  __writecr8(v13[0]);
LABEL_12:
  if ( v18[0] && v7 )
  {
    LOBYTE(v9) = 1;
    KiSignalWaitDisconnectLock(v18[0], v9);
    return (unsigned int)v19;
  }
  return v6;
}
