/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x1405CF180
 * Callers:
 *     NtNotifyChangeKey @ 0x1405D0350 (NtNotifyChangeKey.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x14008A350 (KeInitializeApc.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmObReferenceObjectByName @ 0x140582128 (CmObReferenceObjectByName.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     CmObReferenceObjectByHandle @ 0x1405CE4CC (CmObReferenceObjectByHandle.c)
 *     CmpAllocatePostBlock @ 0x1405CFF38 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1405D0040 (CmpNotifyChangeKey.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpFreePostBlock @ 0x1406961EC (CmpFreePostBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1406BD8D8 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406BD924 (CmpLockTwoKcbsShared.c)
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
  void *v14; // r13
  struct _KTHREAD *CurrentThread; // rcx
  NTSTATUS v16; // edi
  __int64 v17; // r8
  KPROCESSOR_MODE PreviousMode; // cl
  unsigned int v19; // r14d
  unsigned __int64 v20; // rax
  __int16 v21; // ax
  unsigned __int8 v22; // di
  _QWORD *v24; // r15
  ULONG v25; // edi
  __int64 v26; // r9
  PUNICODE_STRING ObjectName; // rcx
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) PostBlock; // r14
  unsigned int v29; // eax
  void *v30; // rcx
  PVOID v31; // rcx
  struct _KTHREAD *v32; // rdx
  void *v33; // r8
  ULONG_PTR *v34; // r13
  ULONG_PTR v35; // rdi
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r14
  __int64 v40; // r14
  __int64 v41; // r14
  ULONG_PTR v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r9
  OBJECT_ATTRIBUTES *v45; // rcx
  OBJECT_ATTRIBUTES **RootDirectory; // rax
  void *CurrentIrql; // r8
  PUNICODE_STRING v48; // rdx
  OBJECT_ATTRIBUTES **v49; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v51; // r15
  __int64 v52; // r15
  __int64 v53; // r15
  ULONG_PTR v54; // rcx
  __int64 v55; // rcx
  NTSTATUS v56; // eax
  __int64 v57; // rcx
  unsigned __int8 v58; // bl
  char *v59; // rax
  PVOID *v60; // rcx
  PVOID *v61; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // rcx
  __int64 v65; // rax
  OBJECT_ATTRIBUTES **v66; // rcx
  PUNICODE_STRING v67; // rdx
  OBJECT_ATTRIBUTES **v68; // rcx
  struct _KPRCB *v69; // rcx
  __int64 v70; // rcx
  PIO_STATUS_BLOCK v71; // rax
  BOOLEAN v72; // bl
  unsigned __int8 v73; // r13
  _QWORD *v74; // rbx
  PVOID *v75; // rax
  PVOID *v76; // rcx
  _QWORD **v77; // rdx
  PVOID *v78; // rcx
  __int64 v79; // rax
  OBJECT_ATTRIBUTES **v80; // rcx
  PUNICODE_STRING v81; // rdx
  OBJECT_ATTRIBUTES **v82; // rcx
  struct _KPRCB *v83; // rcx
  __int64 v84; // rcx
  ULONG_PTR v85; // rcx
  __int64 v86; // rcx
  BOOLEAN v87; // [rsp+40h] [rbp-1D8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-1D7h]
  bool v89; // [rsp+42h] [rbp-1D6h]
  bool v90; // [rsp+43h] [rbp-1D5h]
  char v91; // [rsp+44h] [rbp-1D4h]
  unsigned int v92; // [rsp+48h] [rbp-1D0h]
  PVOID Object; // [rsp+50h] [rbp-1C8h] BYREF
  PVOID P; // [rsp+58h] [rbp-1C0h]
  PVOID v96; // [rsp+60h] [rbp-1B8h]
  HANDLE v97; // [rsp+68h] [rbp-1B0h]
  __int64 v98; // [rsp+70h] [rbp-1A8h]
  PVOID v99; // [rsp+78h] [rbp-1A0h] BYREF
  PIO_STATUS_BLOCK v100; // [rsp+80h] [rbp-198h]
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v101; // [rsp+88h] [rbp-190h]
  HANDLE Handle; // [rsp+90h] [rbp-188h]
  PVOID v103[2]; // [rsp+98h] [rbp-180h] BYREF
  PVOID v104; // [rsp+A8h] [rbp-170h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v105[38]; // [rsp+B0h] [rbp-168h] BYREF

  Handle = Event;
  v101 = SubordinateObjects;
  v97 = MasterKeyHandle;
  v100 = IoStatusBlock;
  v96 = 0LL;
  v14 = 0LL;
  P = 0LL;
  v92 = 1;
  v91 = 0;
  v98 = 0LL;
  CmpInitializeThreadInfo(v103);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v87 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v87 )
  {
    v17 = 1LL;
    if ( Count > 1 )
      goto LABEL_10;
    v90 = Count == 1;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AccessMode = PreviousMode;
    if ( PreviousMode )
    {
      if ( (CompletionFilter & 0x10000000) != 0 )
      {
        if ( Asynchronous && !ApcRoutine && Event )
        {
          v19 = 4;
          v92 = 4;
          goto LABEL_26;
        }
LABEL_10:
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v16 = -1073741811;
        goto LABEL_185;
      }
      v20 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v20 && ((v21 = *(_WORD *)(v20 + 8), v21 == 332) || v21 == 452) )
      {
        v22 = 1;
        v91 = 1;
      }
      else
      {
        v22 = 0;
        v91 = 0;
      }
      ProbeForWrite(IoStatusBlock, 8 * (v22 ^ 1LL) + 8, 4u);
      ProbeForWrite(Buffer, BufferSize, 4u);
      if ( v22 )
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
        v19 = 2;
        v92 = 2;
      }
      else
      {
        v19 = 1;
      }
    }
    else if ( Asynchronous )
    {
      v19 = 3;
      v92 = 3;
      if ( Count )
      {
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        CmCleanupThreadInfo(v103);
        return -1073741811;
      }
    }
    else
    {
      v19 = 1;
    }
LABEL_26:
    if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
    {
      v16 = -1073741811;
      goto LABEL_184;
    }
    v16 = CmObReferenceObjectByHandle(v97, 0x10u, v17, PreviousMode, &v99, 0LL);
    if ( v16 < 0 )
      goto LABEL_184;
    v24 = 0LL;
    Object = 0LL;
    v25 = Count;
    if ( Count == 1 )
    {
      memset(v105, 0, 0x128uLL);
      v105[19] = (struct _OBJECT_HANDLE_INFORMATION)&v105[18];
      v105[18] = (struct _OBJECT_HANDLE_INFORMATION)&v105[18];
      memset(&v105[27], 0, 0x50uLL);
      v16 = CmObReferenceObjectByName((__int64)v101, 0LL, 16LL, v26, AccessMode, (__int64)v105, &Object);
      CmpCleanupParseContext((__int64)v105, 0);
      if ( v16 < 0 )
        goto LABEL_182;
      v24 = Object;
      if ( *(_QWORD *)(*((_QWORD *)v99 + 1) + 24LL) == *(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) )
      {
        ObfDereferenceObject(Object);
        v16 = -1073741811;
        goto LABEL_182;
      }
      v25 = 1;
    }
    PostBlock = (OBJECT_ATTRIBUTES *)CmpAllocatePostBlock(v19, 0x10000LL, 0LL, 0LL);
    v101 = PostBlock;
    if ( !PostBlock )
    {
      if ( v25 == 1 )
        ObfDereferenceObject(v24);
      goto LABEL_37;
    }
    if ( v25 == 1 )
    {
      v14 = (void *)CmpAllocatePostBlock(v92, 0LL, v24, PostBlock);
      P = v14;
      if ( !v14 )
      {
        ObfDereferenceObject(v24);
        CmpFreePostBlock(PostBlock);
LABEL_37:
        v16 = -1073741670;
        goto LABEL_182;
      }
    }
    v29 = v92;
    if ( v92 != 1 )
    {
      if ( Handle )
      {
        v16 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v104, 0LL);
        v96 = v104;
        if ( v16 < 0 )
        {
          if ( Count != 1 )
          {
LABEL_47:
            v31 = PostBlock;
LABEL_48:
            CmpFreePostBlock(v31);
            goto LABEL_182;
          }
          v30 = v14;
LABEL_46:
          CmpFreePostBlock(v30);
          goto LABEL_47;
        }
        KeResetEvent((PRKEVENT)v104);
        v25 = Count;
        v29 = v92;
      }
      if ( v29 == 2 )
      {
        PostBlock[1].ObjectName[6].Buffer = (wchar_t *)v100;
        PostBlock[1].ObjectName->Buffer = (wchar_t *)v96;
        v32 = KeGetCurrentThread();
        v33 = AlpcMessageDeleteProcedure;
        if ( ApcRoutine )
          v33 = ApcRoutine;
        KeInitializeApc(
          (__int64)&PostBlock[1].ObjectName[1],
          (__int64)v32,
          2,
          (__int64)CmpPostApc,
          (__int64)CmpPostApcRunDown,
          (__int64)v33,
          ApcRoutine != 0LL ? AccessMode : 0,
          (__int64)ApcContext);
        v24 = Object;
      }
      else
      {
        ObjectName = PostBlock[1].ObjectName;
        *(_QWORD *)&ObjectName->Length = v96;
        if ( v29 != 4 )
        {
          PostBlock[1].ObjectName->Buffer = (wchar_t *)ApcRoutine;
          ObjectName = PostBlock[1].ObjectName;
          *(_DWORD *)&ObjectName[1].Length = (_DWORD)ApcContext;
        }
      }
    }
    CmpLockRegistry(ObjectName);
    v34 = (ULONG_PTR *)((char *)v99 + 8);
    if ( v25 == 1 )
    {
      CmpLockTwoKcbsShared(*v34, v24[1]);
    }
    else
    {
      v35 = *v34;
      ExAcquirePushLockSharedEx(*v34 + 40, 0LL);
      _InterlockedAdd((volatile signed __int32 *)(v35 + 48), 1u);
      v24 = Object;
      v25 = Count;
    }
    if ( (*((_DWORD *)v99 + 12) & 9) == 0 )
    {
      if ( v25 != 1 )
        goto LABEL_67;
      if ( !(unsigned __int8)CmpIsKeyDeletedForKeyBody(v24, 0LL) )
      {
        v36 = *(_QWORD *)(*v34 + 24);
        v37 = *(_QWORD *)(v24[1] + 24LL);
        if ( v36 != v37 )
        {
          if ( v36 >= v37 )
          {
            ExAcquirePushLockExclusiveEx(v37 + 1672, 0LL);
            ExAcquirePushLockExclusiveEx(*(_QWORD *)(*v34 + 24) + 1672LL, 0LL);
            LODWORD(v97) = 3;
          }
          else
          {
            ExAcquirePushLockExclusiveEx(v36 + 1672, 0LL);
            ExAcquirePushLockExclusiveEx(*(_QWORD *)(v24[1] + 24LL) + 1672LL, 0LL);
            LODWORD(v97) = 2;
          }
          v98 = *(_QWORD *)(v24[1] + 24LL);
LABEL_68:
          ExAcquireFastMutexUnsafe(&CmpPostLock);
          LOBYTE(v38) = WatchTree;
          v16 = CmpNotifyChangeKey(v99, PostBlock, CompletionFilter, v38);
          if ( v16 < 0 )
          {
            ExReleaseFastMutexUnsafe(&CmpPostLock);
            if ( (_DWORD)v97 != 1 )
            {
              if ( (_DWORD)v97 != 2 )
              {
                if ( (_DWORD)v97 != 3 )
                {
LABEL_82:
                  v42 = *v34;
                  if ( Count == 1 )
                    CmpUnlockTwoKcbs(v42, v24[1]);
                  else
                    CmpUnlockKcb(v42);
                  CmpUnlockRegistry(v43);
                  if ( v96 )
                    ObfDereferenceObject(v96);
                  if ( Count != 1 )
                    goto LABEL_182;
                  v31 = P;
                  goto LABEL_48;
                }
                v41 = *(_QWORD *)(*v34 + 24);
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v41 + 1672));
                KeAbPostRelease(v41 + 1672);
                v39 = v98;
LABEL_79:
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v39 + 1672));
                KeAbPostRelease(v39 + 1672);
                v24 = Object;
                goto LABEL_82;
              }
              v40 = v98;
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v98 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v40 + 1672));
              KeAbPostRelease(v40 + 1672);
            }
            v39 = *(_QWORD *)(*v34 + 24);
            goto LABEL_79;
          }
          v89 = v90;
          if ( Count == 1 )
          {
            ObfReferenceObject(v24);
            if ( v16 )
            {
              LOBYTE(v44) = WatchTree;
              v16 = CmpNotifyChangeKey(v24, P, CompletionFilter, v44);
              v89 = v90;
              if ( v16 < 0 )
              {
                v45 = *(OBJECT_ATTRIBUTES **)&PostBlock->Length;
                RootDirectory = (OBJECT_ATTRIBUTES **)PostBlock->RootDirectory;
                if ( *(OBJECT_ATTRIBUTES **)(*(_QWORD *)&PostBlock->Length + 8LL) != PostBlock )
                  goto LABEL_171;
                if ( *RootDirectory != PostBlock )
                  goto LABEL_171;
                *RootDirectory = v45;
                v45->RootDirectory = RootDirectory;
                CurrentIrql = (void *)KeGetCurrentIrql();
                Handle = CurrentIrql;
                __writecr8(1uLL);
                v48 = PostBlock->ObjectName;
                v49 = *(OBJECT_ATTRIBUTES ***)&PostBlock->Attributes;
                if ( (PUNICODE_STRING *)v48->Buffer != &PostBlock->ObjectName
                  || *v49 != (OBJECT_ATTRIBUTES *)&PostBlock->ObjectName )
                {
                  goto LABEL_171;
                }
                *v49 = (OBJECT_ATTRIBUTES *)v48;
                v48->Buffer = (wchar_t *)v49;
                if ( KiIrqlFlags
                  && (KiIrqlFlags & 1) != 0
                  && KeGetCurrentIrql() >= 2u
                  && (unsigned __int8)CurrentIrql < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  v24 = Object;
                  LOBYTE(CurrentIrql) = (_BYTE)Handle;
                }
                __writecr8((unsigned __int8)CurrentIrql);
                v89 = v90;
              }
            }
            else
            {
              CmpFreePostBlock(P);
              v89 = 0;
            }
          }
          ExReleaseFastMutexUnsafe(&CmpPostLock);
          if ( (_DWORD)v97 != 1 )
          {
            if ( (_DWORD)v97 != 2 )
            {
              if ( (_DWORD)v97 != 3 )
                goto LABEL_116;
              v53 = *(_QWORD *)(*v34 + 24);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v53 + 1672));
              KeAbPostRelease(v53 + 1672);
              v51 = v98;
LABEL_113:
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v51 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v51 + 1672));
              KeAbPostRelease(v51 + 1672);
              v24 = Object;
LABEL_116:
              v54 = *v34;
              if ( Count == 1 )
                CmpUnlockTwoKcbs(v54, v24[1]);
              else
                CmpUnlockKcb(v54);
              CmpUnlockRegistry(v55);
              if ( v24 )
                ObfDereferenceObject(v24);
              if ( v16 < 0 )
              {
                CmpFreePostBlock(PostBlock);
                if ( v96 )
                  ObfDereferenceObject(v96);
                goto LABEL_182;
              }
              if ( v92 == 1 )
              {
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                v87 = 0;
                v56 = KeWaitForSingleObject(PostBlock[1].ObjectName, Executive, AccessMode, 1u, 0LL);
                v16 = v56;
                if ( v56 == 257 || v56 == 192 )
                {
                  CmpLockRegistry(v57);
                  ExAcquireFastMutexUnsafe(&CmpPostLock);
                  v73 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  v74 = P;
                  if ( v89 )
                  {
                    v75 = *(PVOID **)P;
                    if ( *(_QWORD *)P )
                    {
                      v76 = (PVOID *)*((_QWORD *)P + 1);
                      if ( v75[1] != P || *v76 != P )
                        goto LABEL_171;
                      *v76 = v75;
                      v75[1] = v76;
                    }
                    v77 = (_QWORD **)v74[2];
                    v78 = (PVOID *)v74[3];
                    if ( v77[1] != v74 + 2 || *v78 != v74 + 2 )
                      goto LABEL_171;
                    *v78 = v77;
                    v77[1] = v78;
                  }
                  v79 = *(_QWORD *)&PostBlock->Length;
                  if ( *(_QWORD *)&PostBlock->Length )
                  {
                    v80 = (OBJECT_ATTRIBUTES **)PostBlock->RootDirectory;
                    if ( *(OBJECT_ATTRIBUTES **)(v79 + 8) != PostBlock || *v80 != PostBlock )
                      goto LABEL_171;
                    *v80 = (OBJECT_ATTRIBUTES *)v79;
                    *(_QWORD *)(v79 + 8) = v80;
                  }
                  v81 = PostBlock->ObjectName;
                  v82 = *(OBJECT_ATTRIBUTES ***)&PostBlock->Attributes;
                  if ( (PUNICODE_STRING *)v81->Buffer == &PostBlock->ObjectName
                    && *v82 == (OBJECT_ATTRIBUTES *)&PostBlock->ObjectName )
                  {
                    *v82 = (OBJECT_ATTRIBUTES *)v81;
                    v81->Buffer = (wchar_t *)v82;
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v73 < 2u )
                    {
                      v83 = KeGetCurrentPrcb();
                      _InterlockedAnd((volatile signed __int32 *)v83->SchedulerAssist, 0xFFFEFFFF);
                      KiRemoveSystemWorkPriorityKick((__int64)v83);
                    }
                    __writecr8(v73);
                    ExReleaseFastMutexUnsafe(&CmpPostLock);
                    CmpUnlockRegistry(v84);
                    if ( !v89 )
                      goto LABEL_47;
                    v30 = v74;
                    goto LABEL_46;
                  }
                }
                else
                {
                  CmpLockRegistry(v57);
                  ExAcquireFastMutexUnsafe(&CmpPostLock);
                  v58 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  if ( v89 )
                  {
                    v59 = (char *)P;
                    v60 = *(PVOID **)P;
                    if ( *(_QWORD *)P )
                    {
                      v61 = (PVOID *)*((_QWORD *)P + 1);
                      if ( v60[1] != P || *v61 != P )
                        goto LABEL_171;
                      *v61 = v60;
                      v60[1] = v61;
                    }
                    v62 = v59 + 16;
                    v63 = *v62;
                    v64 = (_QWORD *)v62[1];
                    if ( *(_QWORD **)(*v62 + 8LL) != v62 || (_QWORD *)*v64 != v62 )
                      goto LABEL_171;
                    *v64 = v63;
                    *(_QWORD *)(v63 + 8) = v64;
                  }
                  v65 = *(_QWORD *)&PostBlock->Length;
                  if ( *(_QWORD *)&PostBlock->Length )
                  {
                    v66 = (OBJECT_ATTRIBUTES **)PostBlock->RootDirectory;
                    if ( *(OBJECT_ATTRIBUTES **)(v65 + 8) != PostBlock || *v66 != PostBlock )
                      goto LABEL_171;
                    *v66 = (OBJECT_ATTRIBUTES *)v65;
                    *(_QWORD *)(v65 + 8) = v66;
                  }
                  v67 = PostBlock->ObjectName;
                  v68 = *(OBJECT_ATTRIBUTES ***)&PostBlock->Attributes;
                  if ( (PUNICODE_STRING *)v67->Buffer == &PostBlock->ObjectName
                    && *v68 == (OBJECT_ATTRIBUTES *)&PostBlock->ObjectName )
                  {
                    *v68 = (OBJECT_ATTRIBUTES *)v67;
                    v67->Buffer = (wchar_t *)v68;
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v58 < 2u )
                    {
                      v69 = KeGetCurrentPrcb();
                      _InterlockedAnd((volatile signed __int32 *)v69->SchedulerAssist, 0xFFFEFFFF);
                      KiRemoveSystemWorkPriorityKick((__int64)v69);
                    }
                    __writecr8(v58);
                    ExReleaseFastMutexUnsafe(&CmpPostLock);
                    CmpUnlockRegistry(v70);
                    v16 = (NTSTATUS)PostBlock[1].ObjectName[1].Buffer;
                    v71 = v100;
                    v100->Status = v16;
                    if ( v91 )
                      HIDWORD(v71->Pointer) = 0;
                    else
                      v71->Information = 0LL;
                    v72 = 0;
                    if ( v89 )
                      CmpFreePostBlock(P);
                    CmpFreePostBlock(PostBlock);
LABEL_183:
                    ObfDereferenceObject(v99);
                    if ( !v72 )
                      goto LABEL_185;
LABEL_184:
                    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                    goto LABEL_185;
                  }
                }
LABEL_171:
                __fastfail(3u);
              }
LABEL_182:
              v72 = v87;
              goto LABEL_183;
            }
            v52 = v98;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v98 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v52 + 1672));
            KeAbPostRelease(v52 + 1672);
          }
          v51 = *(_QWORD *)(*v34 + 24);
          goto LABEL_113;
        }
LABEL_67:
        ExAcquirePushLockExclusiveEx(*(_QWORD *)(*v34 + 24) + 1672LL, 0LL);
        LODWORD(v97) = 1;
        goto LABEL_68;
      }
    }
    v85 = *v34;
    if ( v25 == 1 )
      CmpUnlockTwoKcbs(v85, v24[1]);
    else
      CmpUnlockKcb(v85);
    CmpUnlockRegistry(v86);
    if ( v96 )
      ObfDereferenceObject(v96);
    if ( v25 == 1 )
      CmpFreePostBlock(P);
    CmpFreePostBlock(PostBlock);
    v16 = -1073741444;
    goto LABEL_182;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v16 = -1073741431;
LABEL_185:
  CmCleanupThreadInfo(v103);
  return v16;
}
