/*
 * XREFs of MmCleanProcessAddressSpace @ 0x14060B9E8
 * Callers:
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FA20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     MiGetProcessPartition @ 0x1400524D8 (MiGetProcessPartition.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140053970 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x140053A20 (MiReferenceVad.c)
 *     MiReturnProcessCommitment @ 0x1400590E4 (MiReturnProcessCommitment.c)
 *     LOCK_ADDRESS_SPACE @ 0x140071A78 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x14007323C (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140074010 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     MiBeginProcessClean @ 0x14008CD24 (MiBeginProcessClean.c)
 *     PsReturnProcessQuota @ 0x14008E8B8 (PsReturnProcessQuota.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiCleanWorkingSet @ 0x14012FDD4 (MiCleanWorkingSet.c)
 *     MiCleanCfg @ 0x1401310E8 (MiCleanCfg.c)
 *     ExFreeSvmAsid @ 0x140134AFC (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x140134D94 (MiDeleteCloneZombies.c)
 *     MiClearCommitReleaseState @ 0x1402BAE94 (MiClearCommitReleaseState.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402D96CC (MiReturnPartitionResidentAvailable.c)
 *     MiCleanVad @ 0x14060C580 (MiCleanVad.c)
 *     MiContractWsSwapPageFile @ 0x140673854 (MiContractWsSwapPageFile.c)
 *     MiDereferenceSession @ 0x1406E295C (MiDereferenceSession.c)
 *     MiDeleteAweInfoPages @ 0x140895ED0 (MiDeleteAweInfoPages.c)
 */

void __fastcall MmCleanProcessAddressSpace(ULONG_PTR a1, __int64 a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  ULONG_PTR *v8; // r14
  int v9; // r15d
  _QWORD *v10; // rax
  _QWORD *i; // rbx
  _QWORD **v12; // rax
  void *v13; // r12
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  BOOL v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  ULONG_PTR v21; // rbx
  __int64 v22; // rdx
  bool v23; // zf
  ULONG_PTR *ProcessPartition; // rax
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  __int64 v27; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  int v29; // [rsp+80h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 780);
  memset(&Event, 0, sizeof(Event));
  if ( (v3 & 0x20) == 0 )
  {
    v4 = v3 & 0xC00;
    if ( v4 > 0x400 )
    {
      if ( v4 != 2048 )
        goto LABEL_4;
      PsReturnProcessQuota(a1, a2, *(_QWORD *)(a1 + 1392) - 4LL);
      ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
      if ( ProcessPartition == &MiSystemPartition )
        MiReturnResidentAvailable(*(_QWORD *)(a1 + 1392) - 4LL);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, *(_QWORD *)(a1 + 1392) - 4LL);
      v25 = *(_DWORD *)(a1 + 780);
      do
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 780), v25 & 0xFFFFF3FF | 0x400, v25);
      }
      while ( v26 != v25 );
      v23 = (*(_DWORD *)(a1 + 780) & 0x10000) == 0;
LABEL_41:
      if ( !v23 )
        MiDereferenceSession();
      return;
    }
LABEL_40:
    v23 = (v3 & 0x10000) == 0;
    goto LABEL_41;
  }
  if ( (*(_BYTE *)(a1 + 1467) & 0x60) != 0x60 )
    goto LABEL_40;
LABEL_4:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentThread = KeGetCurrentThread();
  v29 = MiBeginProcessClean((__int64)CurrentThread, a1);
  v6 = MiGetProcessPartition(a1);
  v7 = *(_QWORD *)(a1 + 1296);
  v8 = (ULONG_PTR *)v6;
LABEL_5:
  while ( 1 )
  {
    v9 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v10 = *(_QWORD **)(a1 + 1624);
    i = 0LL;
    while ( v10 )
    {
      i = v10;
      v10 = (_QWORD *)*v10;
    }
    if ( !i )
      break;
    MiReferenceVad((__int64)i);
    while ( 1 )
    {
      v12 = (_QWORD **)i[1];
      v13 = i;
      v14 = i;
      if ( v12 )
      {
        v15 = *v12;
        for ( i = (_QWORD *)i[1]; v15; v15 = (_QWORD *)*v15 )
          i = v15;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v14 )
            break;
          v14 = i;
        }
      }
      if ( i )
        MiReferenceVad((__int64)i);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiLockVad((__int64)CurrentThread, (__int64)v13);
      if ( (unsigned int)MiCleanVad(v13) )
        v9 = 1;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      if ( !i )
        break;
      MiLockVad((__int64)CurrentThread, (__int64)i);
      if ( (unsigned int)MiVadDeleted((__int64)i) )
      {
        MiUnlockVad((__int64)CurrentThread, (__int64)i);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, (__int64)i);
        MiCleanVad(i);
        goto LABEL_5;
      }
      MiUnlockVad((__int64)CurrentThread, (__int64)i);
    }
    if ( !v9 )
      break;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  }
  *(_QWORD *)(v7 + 312) = &Event;
  v16 = _InterlockedAdd((volatile signed __int32 *)(v7 + 280), 0xFFFFFFFF) != 0;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v16 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(a1 + 1467) & 0x60) == 0x60 )
    MiClearCommitReleaseState(a1 + 1280);
  ExFreeSvmAsid();
  MiCleanCfg();
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  *(_QWORD *)(v7 + 312) = 0LL;
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 392LL);
  if ( v19 )
  {
    v27 = MiDeleteAweInfoPages(v19);
    if ( v27 )
    {
      *(_QWORD *)(a1 + 1648) = 0LL;
      MiReturnProcessCommitment(a1, v27);
    }
  }
  v20 = *(_QWORD **)(a1 + 1064);
  if ( v20 && *v20 )
    *v20 = 0LL;
  MiDeleteCloneZombies(a1, 0LL, v17, v18);
  v21 = MiCleanWorkingSet(a1);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  PsReturnProcessQuota(a1, v22, v21);
  if ( v8 == &MiSystemPartition )
    MiReturnResidentAvailable(v21);
  else
    MiReturnPartitionResidentAvailable((__int64)v8, v21);
  if ( (*(_DWORD *)(a1 + 780) & 0x10000) != 0 )
    MiDereferenceSession();
  if ( v29 )
    MiContractWsSwapPageFile(v8);
}
