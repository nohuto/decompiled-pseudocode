/*
 * XREFs of KiIntSteerConnect @ 0x14016DFA4
 * Callers:
 *     KeConnectInterrupt @ 0x14016DC40 (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14012F790 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerSetDestination @ 0x140131B98 (KiIntSteerSetDestination.c)
 *     KiIntSteerLogState @ 0x14016E32C (KiIntSteerLogState.c)
 *     KiIntSteerChooseInitialTargetProcessors @ 0x14016E388 (KiIntSteerChooseInitialTargetProcessors.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 */

__int64 __fastcall KiIntSteerConnect(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  int v6; // r14d
  char v7; // bp
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  KIRQL v13; // r13
  ULONG_PTR *i; // rbx
  int v15; // r9d
  int v16; // ebp
  __int64 v17; // r8
  __int16 v18; // cx
  __int16 v19; // ax
  ULONG_PTR v20; // rax
  bool v21; // zf
  ULONG_PTR **v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  int v26; // ecx
  int v27; // eax
  unsigned __int16 v28; // cx
  __int64 v29; // rdx
  unsigned __int16 v30; // cx
  __int64 v31; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG_PTR v33; // [rsp+40h] [rbp-48h] BYREF
  __int16 v34; // [rsp+48h] [rbp-40h]
  int v35; // [rsp+A0h] [rbp+18h] BYREF
  int v36; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a2;
  if ( !KiIntSteerEtwHandle )
    EtwRegister(&INTSTEER_ETW_PROVIDER, KiIntSteerEventTraceControlCallback, 0LL, &KiIntSteerEtwHandle);
  if ( !*(_DWORD *)a3 )
  {
    v35 = *(_DWORD *)(a3 + 56);
    if ( (unsigned __int8)off_1403FF4C0[0]() )
    {
      v7 = 0;
      v27 = ((__int64 (__fastcall *)(__int64, int *))off_1403FF4A8[0])(a3, &v35);
      if ( !v27 )
        goto LABEL_33;
    }
    else
    {
      v7 = 1;
      v27 = 0;
    }
    if ( v27 < 0 )
      goto LABEL_36;
LABEL_33:
    v6 = v35;
LABEL_6:
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x98uLL, 0x6B725449u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[4] = a1;
    *((_DWORD *)PoolWithTag + 6) = v3;
    PoolWithTag[5] = 0LL;
    PoolWithTag[6] = 0LL;
    *((_BYTE *)PoolWithTag + 56) = v7;
    *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)a3;
    *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)(a3 + 48);
    *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)(a3 + 64);
    PoolWithTag[18] = *(_QWORD *)(a3 + 80);
    if ( (_DWORD)v3 )
    {
      v10 = a1;
      v11 = v3;
      do
      {
        v12 = (_QWORD *)*v10++;
        v12[22] = 0LL;
        v12[24] = 0LL;
        v12[25] = 0LL;
        v12[27] = 0LL;
        v12[21] = v9;
        --v11;
      }
      while ( v11 );
    }
    v13 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    if ( *(_DWORD *)a3 )
    {
LABEL_11:
      i = (ULONG_PTR *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x6B725449u);
      if ( i )
      {
        v16 = KiIntSteerChooseInitialTargetProcessors((_DWORD)a1, v3, a3, v15, v7, (__int64)&v33, (__int64)&v36);
        if ( v16 >= 0 )
        {
          memset(i, 0, 0xD0uLL);
          v18 = v34;
          i[3] = (ULONG_PTR)(i + 2);
          i[2] = (ULONG_PTR)(i + 2);
          i[19] = 0LL;
          *((_DWORD *)i + 8) = v6;
          *((_BYTE *)i + 132) = 0;
          v19 = *(_WORD *)(a3 + 32);
          i[17] = 0LL;
          *((_WORD *)i + 72) = v19;
          *((_DWORD *)i + 32) = v36;
          v20 = v33;
          i[20] = v33;
          *((_WORD *)i + 84) = v18;
          *((_WORD *)i + 92) = v18;
          i[22] = v20;
          v21 = *((_DWORD *)i + 32) == 2;
          *(_OWORD *)(i + 5) = *(_OWORD *)a3;
          *(_OWORD *)(i + 7) = *(_OWORD *)(a3 + 16);
          *(_OWORD *)(i + 9) = *(_OWORD *)(a3 + 32);
          *(_OWORD *)(i + 11) = *(_OWORD *)(a3 + 48);
          *(_OWORD *)(i + 13) = *(_OWORD *)(a3 + 64);
          i[15] = *(_QWORD *)(a3 + 80);
          if ( v21 )
            i[25] = *(_QWORD *)(*a1 + 240LL);
          v22 = (ULONG_PTR **)qword_14041C298;
          if ( *(ULONG_PTR **)qword_14041C298 != &KiIntTrackRootList )
            goto LABEL_48;
          *i = (ULONG_PTR)&KiIntTrackRootList;
          i[1] = (ULONG_PTR)v22;
          *v22 = i;
          ++KiIntTrackRootCount;
          qword_14041C298 = (__int64)i;
          KiIntSteerUpdateDeviceInterruptMask((__int64)(i + 20), 0, v17);
          if ( *((_DWORD *)i + 32) )
            KiIntSteerSetDestination((ULONG_PTR)i);
          v16 = 0;
        }
        if ( !v16 )
        {
LABEL_20:
          v9[2] = i;
          v23 = i + 2;
          v24 = (_QWORD *)v23[1];
          if ( (_QWORD *)*v24 == v23 )
          {
            *v9 = v23;
            v9[1] = v24;
            *v24 = v9;
            v23[1] = v9;
            KiIntSteerLogState(v9, &PPM_ETW_INTERRUPT_STEERING_STATE_CONNECT);
            goto LABEL_22;
          }
LABEL_48:
          __fastfail(3u);
        }
      }
      else
      {
        v16 = -1073741670;
      }
      ExFreePoolWithTag(v9, 0x6B725449u);
LABEL_22:
      KxReleaseSpinLock(&KiIntTrackSpinlock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v13);
      return (unsigned int)v16;
    }
    for ( i = (ULONG_PTR *)KiIntTrackRootList; ; i = (ULONG_PTR *)*i )
    {
      if ( i == &KiIntTrackRootList )
        goto LABEL_11;
      v26 = *((_DWORD *)i + 8);
      if ( v26 != -1 && v26 == v6 )
        break;
    }
    if ( *((_DWORD *)i + 32) == 2 )
    {
      *(_BYTE *)(i[25] + 16) = 0;
      *((_DWORD *)i + 32) = 0;
      *((_BYTE *)i + 132) = 0;
      v30 = *(_WORD *)(a3 + 32);
      v31 = *(_QWORD *)(a3 + 24);
      if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= v30 )
        LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v30 + 1;
      *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v30 + 2] |= v31;
    }
    v16 = 0;
    goto LABEL_20;
  }
  if ( *(_DWORD *)a3 == 3 )
  {
    v6 = -1;
    v7 = 1;
    v35 = -1;
    goto LABEL_6;
  }
LABEL_36:
  v28 = *(_WORD *)(a3 + 32);
  v29 = *(_QWORD *)(a3 + 24);
  if ( LOWORD(KiIntSteerAffinitizedInterrupts[0]) <= v28 )
    LOWORD(KiIntSteerAffinitizedInterrupts[0]) = v28 + 1;
  *(_QWORD *)&KiIntSteerAffinitizedInterrupts[2 * v28 + 2] |= v29;
  return 0LL;
}
