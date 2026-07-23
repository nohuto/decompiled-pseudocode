/*
 * XREFs of KiInterruptDispatchCommon @ 0x1402B0B24
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14029E8C0 (IopPassiveInterruptWorker.c)
 *     KeDispatchSecondaryInterrupt @ 0x1402A9CD0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1400B1150 (KeGetCurrentProcessorNumberEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400F85B0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     IoProcessPassiveInterrupts @ 0x14029E488 (IoProcessPassiveInterrupts.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1402A9D4C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402B0FD0 (KiInvokeInterruptServiceRoutine.c)
 *     KiProcessDisconnectList @ 0x1402B1308 (KiProcessDisconnectList.c)
 *     KiProcessPendingDisconnect @ 0x1402B1360 (KiProcessPendingDisconnect.c)
 */

char __fastcall KiInterruptDispatchCommon(unsigned int a1, unsigned int a2, char a3, _QWORD *a4, int *a5)
{
  unsigned int v5; // r15d
  int v7; // r12d
  _QWORD *v8; // rbx
  char v9; // r13
  unsigned __int8 v10; // di
  _WORD *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  __int64 v15; // rbx
  char v16; // r15
  unsigned int v17; // r12d
  struct _KPRCB *v18; // rcx
  KSPIN_LOCK *v19; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r14
  struct _KPRCB *v24; // rcx
  struct _KPRCB *v25; // rcx
  unsigned __int8 v27; // [rsp+20h] [rbp-61h] BYREF
  char v28; // [rsp+21h] [rbp-60h]
  unsigned int v29; // [rsp+24h] [rbp-5Dh]
  int v30; // [rsp+28h] [rbp-59h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+2Ch] [rbp-55h] BYREF
  unsigned int v32; // [rsp+30h] [rbp-51h]
  int v33; // [rsp+34h] [rbp-4Dh]
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-49h]
  int v35; // [rsp+40h] [rbp-41h]
  _QWORD *v36; // [rsp+48h] [rbp-39h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-31h]
  struct _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-29h] BYREF
  int *v39; // [rsp+68h] [rbp-19h]
  _QWORD v40[2]; // [rsp+70h] [rbp-11h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp-1h] BYREF

  v5 = a1;
  v29 = a1;
  v39 = a5;
  v32 = a2;
  v40[0] = 0LL;
  ProcNumber = 0;
  v7 = 0;
  v30 = 0;
  v40[1] = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v8 = v40;
  v28 = 0;
  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  if ( a4 )
    v8 = a4;
  v33 = 0;
  v36 = v8;
  v9 = 0;
  v8[1] = v8;
  *v8 = v8;
  if ( a1 )
  {
    v12 = a2 - 256;
    SpinLock = (PKSPIN_LOCK)(KiGlobalSecondaryIDT + 48 * v12);
    KiAcquireSecondaryInterruptConnectLock(SpinLock, &v27);
    v11 = 0LL;
    if ( (unsigned int)v12 < 0x100 )
      v11 = *(_WORD **)(KiGlobalSecondaryIDT + 48 * v12 + 40);
    v8 = v36;
    v5 = v29;
    goto LABEL_13;
  }
  SpinLock = 0LL;
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  *(_QWORD *)&Affinity.Group = ProcNumber.Group;
  Affinity.Mask = 1LL << ProcNumber.Number;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  v10 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v11 = 0LL;
  v27 = v10;
  if ( v32 <= 0xFF )
  {
    _mm_lfence();
    v11 = KeGetCurrentPrcb()->InterruptObject[v32];
LABEL_13:
    v10 = v27;
  }
  if ( v11 )
  {
    v13 = 1LL;
    v14 = v11;
    ++v11[51];
    if ( (a3 & 1) != 0 )
    {
      while ( *((_BYTE *)v14 + 93) )
      {
        v15 = v14[1];
        if ( !v15 )
        {
          v14 = 0LL;
          break;
        }
        v14 = (_QWORD *)(v15 - 8);
        if ( v14 == (_QWORD *)v11 )
        {
          if ( *((_BYTE *)v14 + 93) )
            v14 = 0LL;
          break;
        }
      }
    }
    if ( v14 )
    {
      v35 = *((_DWORD *)v11 + 27);
LABEL_25:
      v16 = 0;
      v17 = 0;
      while ( (unsigned __int8)CurrentIrql <= 2u || *((_BYTE *)v14 + 93) )
      {
        if ( (v14[13] & 1) != 0 )
        {
          v23 = v14[1];
        }
        else
        {
          ++*((_WORD *)v14 + 51);
          ++v17;
          if ( v29 )
          {
            v19 = SpinLock;
            KxReleaseSpinLock(SpinLock);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              v10 = v27;
            }
          }
          else
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
            {
              v18 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)v18);
              v10 = v27;
            }
            v19 = SpinLock;
          }
          __writecr8(v10);
          LOBYTE(v13) = v10;
          v9 = KiInvokeInterruptServiceRoutine(v14, v13, v32);
          v30 = 2;
          if ( v29 )
          {
            KiAcquireSecondaryInterruptConnectLock(v19, &v27);
            v10 = v27;
          }
          else
          {
            v10 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v27 = v10;
          }
          v21 = v36;
          v22 = v29;
          --*((_WORD *)v14 + 51);
          v23 = v14[1];
          KiProcessPendingDisconnect(v22, v14, v21);
          v13 = 1LL;
        }
        v14 = (_QWORD *)(v23 - 8);
        if ( v35 )
        {
          if ( v9 )
            v16 = 1;
          if ( v14 == (_QWORD *)v11 )
          {
            if ( v16 && v17 > 1 )
            {
              v9 = 0;
              goto LABEL_25;
            }
            v9 = 1;
LABEL_64:
            v7 = v30;
            goto LABEL_65;
          }
        }
        else if ( v9 || v14 == (_QWORD *)v11 )
        {
          goto LABEL_64;
        }
      }
      v7 = v30;
      v28 = 1;
      if ( v30 != 2 )
        v7 = 1;
      v33 = *((_DWORD *)v14 + 22);
LABEL_65:
      v5 = v29;
    }
    --v11[51];
    v8 = v36;
    KiProcessPendingDisconnect(v5, v11, v36);
  }
  if ( v5 )
  {
    KxReleaseSpinLock(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v25);
      v10 = v27;
    }
    __writecr8(v10);
  }
  else
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
    {
      v24 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v24);
      v10 = v27;
    }
    __writecr8(v10);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  if ( v28 )
    IoProcessPassiveInterrupts();
  if ( (unsigned __int8)CurrentIrql < 2u )
    KiProcessDisconnectList(v8);
  if ( v39 )
    *v39 = v7;
  return v9;
}
