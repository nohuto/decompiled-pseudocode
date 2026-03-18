/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x14062F530
 * Callers:
 *     NtNotifyChangeKey @ 0x14062BE10 (NtNotifyChangeKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x140082030 (KeInitializeApc.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F94F0 (CmpUnlockKcb.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpLockKcbShared @ 0x1405FBB40 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x1405FFB10 (CmObReferenceObjectByHandle.c)
 *     CmpAllocatePostBlock @ 0x14062FC90 (CmpAllocatePostBlock.c)
 *     CmUnlockHive @ 0x14062FD8C (CmUnlockHive.c)
 *     CmLockHive @ 0x14062FDC8 (CmLockHive.c)
 *     CmpNotifyChangeKey @ 0x14062FDF0 (CmpNotifyChangeKey.c)
 *     UNLOCK_POST_LIST @ 0x1406300F4 (UNLOCK_POST_LIST.c)
 *     LOCK_POST_LIST @ 0x140630110 (LOCK_POST_LIST.c)
 *     CmpUnlockTwoKcbs @ 0x140663500 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x14066359C (CmpLockTwoKcbsShared.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 *     CmpFreePostBlock @ 0x1406D113C (CmpFreePostBlock.c)
 */

NTSTATUS __stdcall NtNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  _QWORD *v14; // r13
  __int64 v15; // r8
  KPROCESSOR_MODE PreviousMode; // cl
  unsigned int v17; // esi
  NTSTATUS v18; // edi
  _QWORD *v19; // r15
  __int64 PostBlock; // rax
  __int64 v21; // rsi
  unsigned int v22; // eax
  char *v23; // r14
  __int64 v24; // r9
  __int64 v25; // rcx
  ULONG_PTR v26; // rcx
  char v27; // r15
  unsigned __int64 v29; // rax
  unsigned __int8 v30; // r15
  struct _KTHREAD *CurrentThread; // rdx
  void *v32; // r8
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // r9
  __int16 v38; // ax
  ULONG_PTR v39; // rcx
  void *v40; // rcx
  __int64 v41; // rcx
  ULONG_PTR v42; // rcx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  void *CurrentIrql; // r8
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  NTSTATUS v49; // eax
  unsigned __int8 v50; // di
  __int64 v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rcx
  __int64 v57; // rdx
  _QWORD *v58; // rcx
  struct _KPRCB *v59; // rcx
  PIO_STATUS_BLOCK v60; // rax
  unsigned __int8 v61; // r15
  __int64 v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // rdx
  _QWORD *v65; // rcx
  __int64 v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // rdx
  _QWORD *v69; // rcx
  struct _KPRCB *v70; // rcx
  int Object; // [rsp+20h] [rbp-1F8h]
  char v72; // [rsp+40h] [rbp-1D8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1D7h]
  bool v74; // [rsp+42h] [rbp-1D6h]
  bool v75; // [rsp+43h] [rbp-1D5h]
  char v76; // [rsp+44h] [rbp-1D4h]
  unsigned int v77; // [rsp+48h] [rbp-1D0h]
  PVOID v79; // [rsp+50h] [rbp-1C8h]
  int v81; // [rsp+58h] [rbp-1C0h]
  __int64 v82; // [rsp+60h] [rbp-1B8h]
  PVOID v83; // [rsp+68h] [rbp-1B0h] BYREF
  PVOID v84; // [rsp+70h] [rbp-1A8h] BYREF
  PIO_STATUS_BLOCK v85; // [rsp+78h] [rbp-1A0h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v86; // [rsp+80h] [rbp-198h]
  HANDLE Handle; // [rsp+88h] [rbp-190h]
  _QWORD *v88; // [rsp+90h] [rbp-188h]
  PVOID v89; // [rsp+98h] [rbp-180h] BYREF
  _QWORD v90[38]; // [rsp+A0h] [rbp-178h] BYREF

  Handle = Event;
  v86 = SubordinateObjects;
  v85 = IoStatusBlock;
  v79 = 0LL;
  v14 = 0LL;
  v88 = 0LL;
  v77 = 1;
  memset(v90, 0, 0x128uLL);
  v76 = 0;
  v82 = 0LL;
  v72 = CmpAcquireShutdownRundown();
  if ( !v72 )
    return -1073741431;
  if ( Count <= 1 )
  {
    v75 = Count == 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AccessMode = PreviousMode;
    if ( PreviousMode )
    {
      if ( (CompletionFilter & 0x10000000) != 0 )
      {
        if ( Asynchronous && !ApcRoutine && Event )
        {
          v17 = 4;
          v77 = 4;
          goto LABEL_9;
        }
        goto LABEL_83;
      }
      v29 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
      if ( v29 && ((v38 = *(_WORD *)(v29 + 8), v38 == 332) || v38 == 452) )
      {
        v30 = 1;
        v76 = 1;
      }
      else
      {
        v30 = 0;
        v76 = 0;
      }
      ProbeForWrite(IoStatusBlock, 8 * (v30 ^ 1LL) + 8, 4u);
      ProbeForWrite(Buffer, BufferSize, 4u);
      if ( v30 )
      {
        IoStatusBlock->Pointer = (PVOID)259;
      }
      else
      {
        IoStatusBlock->Status = 259;
        IoStatusBlock->Information = 0LL;
      }
      PreviousMode = AccessMode;
      if ( Asynchronous )
      {
        v17 = 2;
        v77 = 2;
      }
      else
      {
        v17 = 1;
      }
LABEL_9:
      if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
      {
        v18 = -1073741811;
        goto LABEL_38;
      }
      v18 = CmObReferenceObjectByHandle(MasterKeyHandle, 0x10u, v15, PreviousMode, &v83, 0LL);
      if ( v18 < 0 )
      {
LABEL_38:
        CmpReleaseShutdownRundown();
        return v18;
      }
      v19 = 0LL;
      v84 = 0LL;
      if ( Count == 1 )
      {
        v90[19] = &v90[18];
        v90[18] = &v90[18];
        memset(&v90[27], 0, 0x50uLL);
        LOBYTE(Object) = AccessMode;
        v18 = ObReferenceObjectByNameEx(v86, v33, 16LL, CmKeyObjectType, Object, v90, &v84);
        CmpCleanupParseContext((__int64)v90, 0);
        if ( v18 < 0 )
          goto LABEL_36;
        v19 = v84;
        if ( *(_QWORD *)(*((_QWORD *)v83 + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)v84 + 1) + 32LL) )
        {
          ObfDereferenceObject(v84);
          v18 = -1073741811;
          goto LABEL_36;
        }
      }
      PostBlock = CmpAllocatePostBlock(v17, 0x10000LL, 0LL, 0LL);
      v21 = PostBlock;
      v86 = (OBJECT_ATTRIBUTES *)PostBlock;
      if ( !PostBlock )
      {
        if ( Count == 1 )
          ObfDereferenceObject(v19);
        goto LABEL_92;
      }
      if ( Count == 1 )
      {
        v14 = (_QWORD *)CmpAllocatePostBlock(v77, 0LL, v19, PostBlock);
        v88 = v14;
        if ( !v14 )
        {
          ObfDereferenceObject(v19);
          CmpFreePostBlock((PVOID)v21);
LABEL_92:
          v18 = -1073741670;
          goto LABEL_36;
        }
      }
      v22 = v77;
      if ( v77 != 1 )
      {
        if ( Handle )
        {
          v18 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v89, 0LL);
          v79 = v89;
          if ( v18 < 0 )
          {
            if ( Count != 1 )
            {
LABEL_95:
              v40 = (void *)v21;
LABEL_96:
              CmpFreePostBlock(v40);
              goto LABEL_36;
            }
LABEL_94:
            CmpFreePostBlock(v14);
            goto LABEL_95;
          }
          KeResetEvent((PRKEVENT)v89);
          v22 = v77;
        }
        if ( v22 == 2 )
        {
          *(_QWORD *)(*(_QWORD *)(v21 + 64) + 104LL) = v85;
          *(_QWORD *)(*(_QWORD *)(v21 + 64) + 8LL) = v79;
          CurrentThread = KeGetCurrentThread();
          v32 = AlpcMessageDeleteProcedure;
          if ( ApcRoutine )
            v32 = ApcRoutine;
          KeInitializeApc(
            *(_QWORD *)(v21 + 64) + 16LL,
            (__int64)CurrentThread,
            2,
            (__int64)CmpPostApc,
            (__int64)CmpPostApcRunDown,
            (__int64)v32,
            ApcRoutine != 0LL ? AccessMode : 0,
            (__int64)ApcContext);
          v19 = v84;
        }
        else
        {
          **(_QWORD **)(v21 + 64) = v79;
          if ( v22 != 4 )
          {
            *(_QWORD *)(*(_QWORD *)(v21 + 64) + 8LL) = ApcRoutine;
            *(_DWORD *)(*(_QWORD *)(v21 + 64) + 16LL) = (_DWORD)ApcContext;
          }
        }
      }
      CmpLockRegistry();
      if ( Count == 1 )
      {
        v23 = (char *)v83 + 8;
        CmpLockTwoKcbsShared(*((_QWORD *)v83 + 1), v19[1]);
      }
      else
      {
        v23 = (char *)v83 + 8;
        CmpLockKcbShared(*((_QWORD *)v83 + 1));
      }
      if ( !CmpIsKeyDeletedForKeyBody((__int64)v83, 0LL) )
      {
        if ( Count != 1 )
        {
LABEL_25:
          CmLockHive(*(_QWORD *)(*(_QWORD *)v23 + 32LL));
          v81 = 1;
          goto LABEL_26;
        }
        if ( !CmpIsKeyDeletedForKeyBody((__int64)v19, 0LL) )
        {
          v34 = *(_QWORD *)(*(_QWORD *)v23 + 32LL);
          v35 = v19[1];
          v36 = *(_QWORD *)(v35 + 32);
          if ( v34 < v36 )
          {
            ((void (*)(void))CmLockHive)();
            CmLockHive(*(_QWORD *)(v19[1] + 32LL));
            v81 = 2;
          }
          else
          {
            if ( v34 == v36 )
              goto LABEL_25;
            CmLockHive(*(_QWORD *)(v35 + 32));
            CmLockHive(*(_QWORD *)(*(_QWORD *)v23 + 32LL));
            v81 = 3;
          }
          v82 = *(_QWORD *)(v19[1] + 32LL);
LABEL_26:
          LOCK_POST_LIST();
          LOBYTE(v24) = WatchTree;
          v18 = CmpNotifyChangeKey(v83, v21, CompletionFilter, v24);
          if ( v18 >= 0 )
          {
            v74 = v75;
            if ( Count == 1 )
            {
              ObfReferenceObject(v19);
              if ( v18 )
              {
                LOBYTE(v37) = WatchTree;
                v18 = CmpNotifyChangeKey(v19, v14, CompletionFilter, v37);
                v74 = v75;
                if ( v18 < 0 )
                {
                  v43 = *(_QWORD *)v21;
                  v44 = *(_QWORD **)(v21 + 8);
                  if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21 || *v44 != v21 )
                    __fastfail(3u);
                  *v44 = v43;
                  *(_QWORD *)(v43 + 8) = v44;
                  CurrentIrql = (void *)KeGetCurrentIrql();
                  Handle = CurrentIrql;
                  __writecr8(1uLL);
                  v46 = *(_QWORD *)(v21 + 16);
                  v47 = *(_QWORD **)(v21 + 24);
                  if ( *(_QWORD *)(v46 + 8) != v21 + 16 || *v47 != v21 + 16 )
                    __fastfail(3u);
                  *v47 = v46;
                  *(_QWORD *)(v46 + 8) = v47;
                  if ( KiIrqlFlags
                    && (KiIrqlFlags & 1) != 0
                    && KeGetCurrentIrql() >= 2u
                    && (unsigned __int8)CurrentIrql < 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                    v19 = v84;
                    LOBYTE(CurrentIrql) = (_BYTE)Handle;
                  }
                  __writecr8((unsigned __int8)CurrentIrql);
                  v74 = v75;
                }
              }
              else
              {
                CmpFreePostBlock(v14);
                v74 = 0;
              }
            }
            UNLOCK_POST_LIST();
            if ( v81 != 1 )
            {
              if ( v81 != 2 )
              {
                CmUnlockHive(*(_QWORD *)(*(_QWORD *)v23 + 32LL));
                v25 = v82;
LABEL_30:
                CmUnlockHive(v25);
                v26 = *(_QWORD *)v23;
                if ( Count == 1 )
                  CmpUnlockTwoKcbs(v26, v19[1]);
                else
                  CmpUnlockKcb(v26);
                CmpUnlockRegistry();
                if ( v19 )
                  ObfDereferenceObject(v19);
                if ( v18 < 0 )
                {
                  CmpFreePostBlock((PVOID)v21);
                  if ( v79 )
                    ObfDereferenceObject(v79);
                  goto LABEL_36;
                }
                if ( v77 != 1 )
                {
LABEL_36:
                  v27 = v72;
                  goto LABEL_37;
                }
                CmpReleaseShutdownRundown();
                v72 = 0;
                v49 = KeWaitForSingleObject(*(PVOID *)(v21 + 64), Executive, AccessMode, 1u, 0LL);
                v18 = v49;
                if ( v49 != 257 && v49 != 192 )
                {
                  CmpLockRegistry();
                  LOCK_POST_LIST();
                  v50 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( v74 )
                  {
                    v51 = *v14;
                    if ( *v14 )
                    {
                      v52 = (_QWORD *)v14[1];
                      if ( *(_QWORD **)(v51 + 8) != v14 || (_QWORD *)*v52 != v14 )
                        __fastfail(3u);
                      *v52 = v51;
                      *(_QWORD *)(v51 + 8) = v52;
                    }
                    v53 = v14[2];
                    v54 = (_QWORD *)v14[3];
                    if ( *(_QWORD **)(v53 + 8) != v14 + 2 || (_QWORD *)*v54 != v14 + 2 )
                      __fastfail(3u);
                    *v54 = v53;
                    *(_QWORD *)(v53 + 8) = v54;
                  }
                  v55 = *(_QWORD *)v21;
                  if ( *(_QWORD *)v21 )
                  {
                    v56 = *(_QWORD **)(v21 + 8);
                    if ( *(_QWORD *)(v55 + 8) != v21 || *v56 != v21 )
                      __fastfail(3u);
                    *v56 = v55;
                    *(_QWORD *)(v55 + 8) = v56;
                  }
                  v57 = *(_QWORD *)(v21 + 16);
                  v58 = *(_QWORD **)(v21 + 24);
                  if ( *(_QWORD *)(v57 + 8) != v21 + 16 || *v58 != v21 + 16 )
                    __fastfail(3u);
                  *v58 = v57;
                  *(_QWORD *)(v57 + 8) = v58;
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v50 < 2u )
                  {
                    v59 = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)v59->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick((__int64)v59);
                  }
                  __writecr8(v50);
                  UNLOCK_POST_LIST();
                  CmpUnlockRegistry();
                  v18 = *(_DWORD *)(*(_QWORD *)(v21 + 64) + 24LL);
                  v60 = v85;
                  v85->Status = v18;
                  if ( v76 )
                    HIDWORD(v60->Pointer) = 0;
                  else
                    v60->Information = 0LL;
                  v27 = 0;
                  if ( v74 )
                    CmpFreePostBlock(v14);
                  CmpFreePostBlock((PVOID)v21);
LABEL_37:
                  ObfDereferenceObject(v83);
                  if ( !v27 )
                    return v18;
                  goto LABEL_38;
                }
                CmpLockRegistry();
                LOCK_POST_LIST();
                v61 = KeGetCurrentIrql();
                __writecr8(1uLL);
                if ( v74 )
                {
                  v62 = *v14;
                  if ( *v14 )
                  {
                    v63 = (_QWORD *)v14[1];
                    if ( *(_QWORD **)(v62 + 8) != v14 || (_QWORD *)*v63 != v14 )
                      __fastfail(3u);
                    *v63 = v62;
                    *(_QWORD *)(v62 + 8) = v63;
                  }
                  v64 = v14[2];
                  v65 = (_QWORD *)v14[3];
                  if ( *(_QWORD **)(v64 + 8) != v14 + 2 || (_QWORD *)*v65 != v14 + 2 )
                    __fastfail(3u);
                  *v65 = v64;
                  *(_QWORD *)(v64 + 8) = v65;
                }
                v66 = *(_QWORD *)v21;
                if ( *(_QWORD *)v21 )
                {
                  v67 = *(_QWORD **)(v21 + 8);
                  if ( *(_QWORD *)(v66 + 8) != v21 || *v67 != v21 )
                    __fastfail(3u);
                  *v67 = v66;
                  *(_QWORD *)(v66 + 8) = v67;
                }
                v68 = *(_QWORD *)(v21 + 16);
                v69 = *(_QWORD **)(v21 + 24);
                if ( *(_QWORD *)(v68 + 8) != v21 + 16 || *v69 != v21 + 16 )
                  __fastfail(3u);
                *v69 = v68;
                *(_QWORD *)(v68 + 8) = v69;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v61 < 2u )
                {
                  v70 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v70->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)v70);
                }
                __writecr8(v61);
                UNLOCK_POST_LIST();
                CmpUnlockRegistry();
                if ( !v74 )
                  goto LABEL_95;
                goto LABEL_94;
              }
              CmUnlockHive(v82);
            }
            v25 = *(_QWORD *)(*(_QWORD *)v23 + 32LL);
            goto LABEL_30;
          }
          UNLOCK_POST_LIST();
          if ( v81 != 1 )
          {
            if ( v81 != 2 )
            {
              CmUnlockHive(*(_QWORD *)(*(_QWORD *)v23 + 32LL));
              v41 = v82;
              goto LABEL_102;
            }
            CmUnlockHive(v82);
          }
          v41 = *(_QWORD *)(*(_QWORD *)v23 + 32LL);
LABEL_102:
          CmUnlockHive(v41);
          v42 = *(_QWORD *)v23;
          if ( Count == 1 )
            CmpUnlockTwoKcbs(v42, v19[1]);
          else
            CmpUnlockKcb(v42);
          CmpUnlockRegistry();
          if ( v79 )
            ObfDereferenceObject(v79);
          if ( Count != 1 )
            goto LABEL_36;
          v40 = v14;
          goto LABEL_96;
        }
      }
      v39 = *(_QWORD *)v23;
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v39, v19[1]);
      else
        CmpUnlockKcb(v39);
      CmpUnlockRegistry();
      if ( v79 )
        ObfDereferenceObject(v79);
      if ( Count == 1 )
        CmpFreePostBlock(v14);
      CmpFreePostBlock((PVOID)v21);
      v18 = -1073741444;
      goto LABEL_36;
    }
    if ( !Asynchronous )
    {
      v17 = 1;
      goto LABEL_9;
    }
    v17 = 3;
    v77 = 3;
    if ( !Count )
      goto LABEL_9;
  }
LABEL_83:
  CmpReleaseShutdownRundown();
  return -1073741811;
}
