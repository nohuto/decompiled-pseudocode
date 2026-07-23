/*
 * XREFs of MmCleanProcessAddressSpace @ 0x1405F2BC8
 * Callers:
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 * Callees:
 *     MiCleanWorkingSet @ 0x14000FEA4 (MiCleanWorkingSet.c)
 *     MiBeginProcessClean @ 0x140011D68 (MiBeginProcessClean.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiReturnProcessCommitment @ 0x140065D14 (MiReturnProcessCommitment.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400767A8 (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140078284 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     PsReturnProcessQuota @ 0x1400917C8 (PsReturnProcessQuota.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     MiCleanCfg @ 0x14012F5A4 (MiCleanCfg.c)
 *     ExFreeSvmAsid @ 0x140132C78 (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x140132D90 (MiDeleteCloneZombies.c)
 *     MiClearCommitReleaseState @ 0x1402A3F68 (MiClearCommitReleaseState.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402C0230 (MiReturnPartitionResidentAvailable.c)
 *     MiCleanVad @ 0x140618088 (MiCleanVad.c)
 *     MiContractWsSwapPageFile @ 0x14066C944 (MiContractWsSwapPageFile.c)
 *     MiDereferenceSession @ 0x1406C069C (MiDereferenceSession.c)
 *     MiDeleteAweInfoPages @ 0x140850F98 (MiDeleteAweInfoPages.c)
 */

void __fastcall MmCleanProcessAddressSpace(__int64 a1, __int64 a2)
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
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rdx
  bool v24; // zf
  ULONG_PTR *ProcessPartition; // rax
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  __int64 v28; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+80h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 772);
  if ( (v3 & 0x20) == 0 )
  {
    v4 = v3 & 0xC00;
    if ( v4 > 0x400 )
    {
      if ( v4 != 2048 )
        goto LABEL_4;
      PsReturnProcessQuota((struct _KPROCESS *)a1, a2, *(_QWORD *)(a1 + 1392) - 4LL);
      ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(a1);
      if ( ProcessPartition == &MiSystemPartition )
        MiReturnResidentAvailable(*(_QWORD *)(a1 + 1392) - 4LL);
      else
        MiReturnPartitionResidentAvailable((__int64)ProcessPartition, *(_QWORD *)(a1 + 1392) - 4LL);
      v26 = *(_DWORD *)(a1 + 772);
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 772), v26 & 0xFFFFF3FF | 0x400, v26);
      }
      while ( v27 != v26 );
      v24 = (*(_DWORD *)(a1 + 772) & 0x10000) == 0;
LABEL_40:
      if ( !v24 )
        MiDereferenceSession();
      return;
    }
LABEL_39:
    v24 = (v3 & 0x10000) == 0;
    goto LABEL_40;
  }
  if ( (*(_BYTE *)(a1 + 1467) & 0x60) != 0x60 )
    goto LABEL_39;
LABEL_4:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentThread = KeGetCurrentThread();
  v30 = MiBeginProcessClean((__int64)CurrentThread, a1);
  v6 = MiGetProcessPartition(a1);
  v7 = *(_QWORD *)(a1 + 1296);
  v8 = (ULONG_PTR *)v6;
LABEL_5:
  while ( 1 )
  {
    v9 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v10 = *(_QWORD **)(a1 + 1576);
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
  *(_QWORD *)(v7 + 248) = &Event;
  v16 = _InterlockedAdd((volatile signed __int32 *)(v7 + 224), 0xFFFFFFFF) != 0;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v16 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(a1 + 1467) & 0x60) == 0x60 )
    MiClearCommitReleaseState(a1 + 1280);
  ExFreeSvmAsid();
  MiCleanCfg();
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  *(_QWORD *)(v7 + 248) = 0LL;
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 1296) + 344LL);
  if ( v19 )
  {
    v28 = MiDeleteAweInfoPages(v19);
    if ( v28 )
    {
      *(_QWORD *)(a1 + 1600) = 0LL;
      MiReturnProcessCommitment(a1, v28);
    }
  }
  v20 = *(_QWORD **)(a1 + 1064);
  if ( v20 && *v20 )
    *v20 = 0LL;
  MiDeleteCloneZombies(a1, 0LL, v17, v18);
  v22 = MiCleanWorkingSet(a1, v21);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  PsReturnProcessQuota((struct _KPROCESS *)a1, v23, v22);
  if ( v8 == &MiSystemPartition )
    MiReturnResidentAvailable(v22);
  else
    MiReturnPartitionResidentAvailable((__int64)v8, v22);
  if ( (*(_DWORD *)(a1 + 772) & 0x10000) != 0 )
    MiDereferenceSession();
  if ( v30 )
    MiContractWsSwapPageFile(v8);
}
