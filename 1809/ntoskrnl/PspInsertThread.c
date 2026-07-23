/*
 * XREFs of PspInsertThread @ 0x140622450
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     PspCreateThread @ 0x140622D64 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x14088D6A0 (PspCreatePicoThread.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeReadyThread @ 0x1400A2760 (KeReadyThread.c)
 *     MmDeleteKernelStack @ 0x1400CA580 (MmDeleteKernelStack.c)
 *     KeStartThread @ 0x1400D3A34 (KeStartThread.c)
 *     KeRequestTerminationThread @ 0x1400F13C8 (KeRequestTerminationThread.c)
 *     KeForceResumeThread @ 0x1400F1C1C (KeForceResumeThread.c)
 *     KeSuspendThread @ 0x1400F26E8 (KeSuspendThread.c)
 *     ObReferenceObjectExWithTag @ 0x140111F40 (ObReferenceObjectExWithTag.c)
 *     KeRaiseUserException @ 0x140290890 (KeRaiseUserException.c)
 *     MmDeleteTeb @ 0x1405E066C (MmDeleteTeb.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     PspCallProcessNotifyRoutines @ 0x1405F5C14 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1405F5F90 (PspCallThreadNotifyRoutines.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PspChangeProcessExecutionState @ 0x1406045AC (PspChangeProcessExecutionState.c)
 *     SeCreateAccessStateEx @ 0x140613280 (SeCreateAccessStateEx.c)
 *     PspCreateObjectHandle @ 0x140622C88 (PspCreateObjectHandle.c)
 *     EtwTraceThread @ 0x1406247EC (EtwTraceThread.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     EtwTraceProcess @ 0x14066D6E8 (EtwTraceProcess.c)
 *     PoEnergyContextStart @ 0x14069FDCC (PoEnergyContextStart.c)
 *     PspDeleteUserStack @ 0x1406CC310 (PspDeleteUserStack.c)
 *     KeSetUmsThreadKernelLock @ 0x1408466C8 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x140846794 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x140846808 (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x14088BCFC (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x14088BDAC (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        ULONG_PTR BugCheckParameter2,
        PEPROCESS Process,
        __int64 a3,
        _DWORD *a4,
        ACCESS_MASK a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8,
        PACCESS_STATE AccessState,
        PVOID *a10,
        _OWORD *a11)
{
  unsigned int *v14; // r15
  __int64 v15; // r14
  unsigned __int64 *v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  int SecureThread; // ecx
  __int64 v20; // rdx
  unsigned int DirectoryTableBase_high; // edx
  unsigned int v23; // ecx
  struct _KPROCESS *v24; // rcx
  PEPROCESS *v25; // rdx
  int v26; // r12d
  struct _KPROCESS *v27; // rdx
  signed int inserted; // r14d
  volatile signed __int64 *v29; // r12
  __int64 v30; // r8
  _BYTE *v31; // rbx
  _DWORD *v32; // r13
  __int64 v33; // rdx
  int v34; // r12d
  __int64 v35; // rdx
  __int64 v36; // r8
  KPROCESSOR_MODE v37; // dl
  char v38; // [rsp+40h] [rbp-78h]
  unsigned __int64 *v39; // [rsp+48h] [rbp-70h]
  unsigned __int64 v40; // [rsp+50h] [rbp-68h]
  _KPROCESS *v41; // [rsp+60h] [rbp-58h]

  v38 = 0;
  v41 = KeGetCurrentThread()->ApcState.Process;
  v40 = *(_QWORD *)(BugCheckParameter2 + 240);
  v14 = 0LL;
  v15 = 0LL;
  if ( a7 )
  {
    v16 = *(unsigned __int64 **)(a7 + 24);
    v14 = (unsigned int *)((a7 + 252) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x4000) != 0));
    v15 = (a7 + 320) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x1000) != 0);
  }
  else
  {
    v16 = 0LL;
  }
  v39 = v16;
  if ( (*a4 & 0x20) == 0 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1], 0LL);
  v17 = Process[1].Affinity.Bitmap[16];
  if ( v17 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) == 0 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
      v38 = 1;
      if ( v15 )
      {
        if ( (*(_DWORD *)(v17 + 848) & 0x10) != 0 )
        {
          v18 = *(_QWORD *)(v17 + 8LL * *(unsigned __int16 *)(v15 + 8) + 624);
          if ( !v18 || (v18 & *(_QWORD *)v15) != *(_QWORD *)v15 )
            v38 = 5;
        }
      }
    }
  }
  if ( (v38 & 4) == 0
    && (HIDWORD(Process[1].DirectoryTableBase) & 0x4000008) == 0x4000000
    && ((Process[1].DirectoryTableBase & 0x4000000000000000LL) == 0
     || (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0
     || (*a4 & 2) != 0) )
  {
    SecureThread = 0;
  }
  else
  {
    SecureThread = -1073741823;
  }
  if ( SecureThread < 0 )
    goto LABEL_24;
  if ( (Process->SecureState.SecureHandle & 1) != 0 )
    SecureThread = PspCreateSecureThread((PVOID)BugCheckParameter2);
  if ( SecureThread < 0 )
  {
LABEL_24:
    if ( (v38 & 1) != 0 )
      ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
    KeAbPostRelease((ULONG_PTR)&Process[1]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 1728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 1728));
    KeAbPostRelease(BugCheckParameter2 + 1728);
    MmDeleteKernelStack(*(_QWORD *)(BugCheckParameter2 + 56), 2);
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    if ( a6 )
    {
      if ( v40 )
        MmDeleteTeb(Process, v40);
      if ( *a6 )
        PspDeleteUserStack(Process, v20, a3, a6);
    }
    return (Process[1].DirectoryTableBase & 0x4000000800000000LL) != 0 ? -1073741558 : -1073741823;
  }
  KeStartThread(BugCheckParameter2, (unsigned __int64 *)v15, v14);
  if ( (v38 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    v38 &= ~1u;
  }
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( (DirectoryTableBase_high & 0x40000000) != 0 && (*a4 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1748) |= 0x40u;
    DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  }
  v23 = (((DirectoryTableBase_high >> 27) & 7) << 9) | *(_DWORD *)(BugCheckParameter2 + 1744) & 0xFFFFF1FF;
  *(_DWORD *)(BugCheckParameter2 + 1744) = v23;
  *(_DWORD *)(BugCheckParameter2 + 1744) = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)LODWORD(Process[1].DirectoryTableBase)) & 0x7000;
  if ( ++Process[1].ThreadSeed[0] > LODWORD(Process[2].ReadyListHead.Flink) )
    LODWORD(Process[2].ReadyListHead.Flink) = Process[1].ThreadSeed[0];
  if ( Process[1].ThreadSeed[0] == 1 )
  {
    v38 |= 2u;
  }
  else if ( Process[1].ThreadSeed[0] == 2 && (Process[1].DirectoryTableBase & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFu);
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].ReadyListHead.Blink, 0LL);
  v24 = (struct _KPROCESS *)(BugCheckParameter2 + 1704);
  v25 = *(PEPROCESS **)&Process[1].0;
  if ( *v25 != (PEPROCESS)&Process[1].ActiveProcessors.Bitmap[19] )
    __fastfail(3u);
  *(_QWORD *)&v24->Header.Lock = (char *)Process + 1160;
  *(_QWORD *)(BugCheckParameter2 + 1712) = v25;
  *v25 = v24;
  *(_QWORD *)&Process[1].0 = v24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].ReadyListHead.Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[2].ReadyListHead.Blink);
  KeAbPostRelease((ULONG_PTR)&Process[2].ReadyListHead.Blink);
  if ( Process->InstrumentationCallback )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x19u);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  if ( (*a4 & 0x40) != 0 )
    PspChangeProcessExecutionState(Process);
  ObReferenceObjectExWithTag(BugCheckParameter2, 2);
  *(_DWORD *)(BugCheckParameter2 + 1812) = 1;
  if ( (*a4 & 1) != 0 )
  {
    KeSuspendThread(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 1744) & 1) != 0 )
      KeForceResumeThread(BugCheckParameter2);
  }
  v26 = 0;
  if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*a4 & 0x10) != 0 )
  {
    v27 = Process;
    v26 = 1;
  }
  else
  {
    v27 = v41;
  }
  inserted = SeCreateAccessStateEx(
               0LL,
               v27,
               AccessState,
               &AccessState[1].OperationID,
               a5,
               (GENERIC_MAPPING *)((char *)PsThreadType + 76));
  if ( inserted < 0 )
  {
    ObfDereferenceObject((PVOID)BugCheckParameter2);
  }
  else
  {
    inserted = ObInsertObjectEx((PVOID)BugCheckParameter2, AccessState, v26, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      ObfDereferenceObject((PVOID)BugCheckParameter2);
      if ( v39 )
        *v39 = v40;
      if ( a11 )
        *a11 = *(_OWORD *)(BugCheckParameter2 + 1592);
    }
    if ( inserted < 0 )
    {
      SepDeleteAccessState((__int64)AccessState);
      SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    }
  }
  v29 = (volatile signed __int64 *)(BugCheckParameter2 + 1728);
  if ( inserted < 0 )
  {
    if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 1728));
    KeAbPostRelease(BugCheckParameter2 + 1728);
    v32 = a4;
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread(BugCheckParameter2);
    v31 = a6;
    if ( a6 && *a6 )
      PspDeleteUserStack(Process, v33, a3, a6);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 1744), 2u);
    if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 1728));
    KeAbPostRelease(BugCheckParameter2 + 1728);
    v31 = a6;
    v32 = a4;
  }
  v34 = 0;
  if ( (v38 & 2) != 0 )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess(Process);
    if ( Process[2].ActiveProcessors.Bitmap[14] )
      PoEnergyContextStart((ULONG_PTR)Process);
    if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 || Process[2].ActiveProcessors.Bitmap[9] )
      v34 = PspCallProcessNotifyRoutines(Process, a7, 1);
  }
  if ( (PerfGlobalGroupMask & 2) != 0 )
  {
    LOBYTE(v30) = 1;
    EtwTraceThread(BugCheckParameter2, a3, v30);
  }
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 || Process[2].ActiveProcessors.Bitmap[9] )
    PspCallThreadNotifyRoutines((_QWORD *)BugCheckParameter2, 1u, 0);
  if ( inserted >= 0 )
  {
    if ( v34 < 0 )
      inserted = v34;
    else
      inserted = PspCreateObjectHandle(BugCheckParameter2, AccessState, PsThreadType);
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    if ( inserted >= 0 )
    {
      if ( a7 && *(_QWORD *)(a7 + 392) )
        inserted = PspAssignProcessToJobList((ULONG_PTR)Process);
      if ( inserted >= 0 )
      {
        *a10 = AccessState[2].AuxData;
        goto LABEL_123;
      }
      v37 = ((__int64)AccessState[2].SecurityDescriptor & 0x200) == 0
         && (v41[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0;
      ObCloseHandle(AccessState[2].AuxData, v37);
      if ( v31 && (*v31 & 1) != 0 )
        KeRaiseUserException(inserted);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 1744), 0) )
      v38 |= 8u;
    if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0 )
    {
      if ( (*v32 & 1) != 0 )
        KeForceResumeThread(BugCheckParameter2);
    }
    else
    {
      if ( (v38 & 8) != 0 )
        *(_DWORD *)(BugCheckParameter2 + 1792) = inserted;
      KeRequestTerminationThread(BugCheckParameter2, v35, v36);
    }
  }
LABEL_123:
  if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0x40) != 0 && inserted < 0 )
  {
    KeSetUmsThreadKernelLock(**(_QWORD **)(BugCheckParameter2 + 496), 0LL);
    KeUpdateUmsThreadState(**(_QWORD **)(BugCheckParameter2 + 496), 2LL, 0LL);
    ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(BugCheckParameter2 + 496) + 16LL));
    KeUnInitializeUmsThread(BugCheckParameter2);
  }
  KeReadyThread(BugCheckParameter2);
  return (unsigned int)inserted;
}
