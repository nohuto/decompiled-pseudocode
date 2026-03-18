/*
 * XREFs of PspInsertThread @ 0x1405E8D54
 * Callers:
 *     PspCreateThread @ 0x14060CCFC (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x1408CA870 (PspCreatePicoThread.c)
 * Callees:
 *     KeStartThread @ 0x14001BC90 (KeStartThread.c)
 *     KeReadyThread @ 0x14001C19C (KeReadyThread.c)
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeForceResumeThread @ 0x140081304 (KeForceResumeThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeRequestTerminationThread @ 0x1400AE89C (KeRequestTerminationThread.c)
 *     KeSuspendThread @ 0x1400AF684 (KeSuspendThread.c)
 *     MmDeleteKernelStack @ 0x1400C4CB0 (MmDeleteKernelStack.c)
 *     ObReferenceObjectExWithTag @ 0x14010AAE0 (ObReferenceObjectExWithTag.c)
 *     KeRaiseUserException @ 0x1402A70B0 (KeRaiseUserException.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     PspCreateObjectHandle @ 0x1405E95CC (PspCreateObjectHandle.c)
 *     PspCallProcessNotifyRoutines @ 0x1405EB524 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1405EB7B0 (PspCallThreadNotifyRoutines.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     MmDeleteTeb @ 0x140670684 (MmDeleteTeb.c)
 *     SeCreateAccessStateEx @ 0x140672F30 (SeCreateAccessStateEx.c)
 *     EtwTraceProcess @ 0x140690330 (EtwTraceProcess.c)
 *     PoEnergyContextStart @ 0x140693CC4 (PoEnergyContextStart.c)
 *     PspChangeProcessExecutionState @ 0x140694A24 (PspChangeProcessExecutionState.c)
 *     EtwTraceThread @ 0x1406C4A70 (EtwTraceThread.c)
 *     PspDeleteUserStack @ 0x1406EA7A4 (PspDeleteUserStack.c)
 *     KeSetUmsThreadKernelLock @ 0x140880A54 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x140880B20 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x140880B94 (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x1408C8AE0 (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x1408C8B90 (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        char *Object,
        PEPROCESS Process,
        __int64 a3,
        _DWORD *a4,
        int a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8,
        PACCESS_STATE AccessState,
        PVOID *a10,
        _OWORD *a11)
{
  unsigned int *v14; // r12
  __int64 v15; // r15
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  int SecureThread; // ecx
  char v19; // al
  char v20; // bl
  unsigned int DirectoryTableBase_high; // edx
  unsigned int v23; // ecx
  struct _KPROCESS *v24; // rcx
  PEPROCESS *v25; // rdx
  char v26; // al
  char v27; // al
  char v28; // r12
  struct _KPROCESS *v29; // rdx
  signed int inserted; // r15d
  char v31; // bl
  __int64 v32; // rdx
  __int64 v33; // r8
  _BYTE *v34; // rbx
  char v35; // bl
  int v36; // r12d
  KPROCESSOR_MODE v37; // dl
  char v38; // [rsp+40h] [rbp-A8h]
  _QWORD *v39; // [rsp+48h] [rbp-A0h]
  __int64 v40; // [rsp+50h] [rbp-98h]
  _KPROCESS *v41; // [rsp+60h] [rbp-88h]

  v38 = 0;
  v41 = KeGetCurrentThread()->ApcState.Process;
  v40 = *((_QWORD *)Object + 30);
  v14 = 0LL;
  v15 = 0LL;
  if ( a7 )
  {
    v39 = *(_QWORD **)(a7 + 24);
    v14 = (unsigned int *)((a7 + 252) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x4000) != 0));
    v15 = (a7 + 320) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x1000) != 0);
  }
  else
  {
    v39 = 0LL;
  }
  if ( (*a4 & 0x20) == 0 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1], 0LL);
  v16 = Process[1].Affinity.Bitmap[16];
  if ( v16 )
  {
    if ( (*((_DWORD *)Object + 29) & 0x400) == 0 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v16 + 56), 1u);
      v38 = 1;
      if ( v15 )
      {
        if ( (*(_DWORD *)(v16 + 848) & 0x10) != 0 )
        {
          v17 = *(_QWORD *)(v16 + 8LL * *(unsigned __int16 *)(v15 + 8) + 624);
          if ( !v17 || (v17 & *(_QWORD *)v15) != *(_QWORD *)v15 )
            v38 = 5;
        }
      }
    }
  }
  if ( (v38 & 4) == 0
    && (HIDWORD(Process[1].DirectoryTableBase) & 0x4000008) == 0x4000000
    && ((Process[1].DirectoryTableBase & 0x4000000000000000LL) == 0
     || (*((_DWORD *)Object + 29) & 0x400) != 0
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
    SecureThread = PspCreateSecureThread(Object);
  if ( SecureThread < 0 )
  {
LABEL_24:
    if ( (v38 & 1) != 0 )
      ExReleaseResourceLite((PERESOURCE)(v16 + 56));
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
    KeAbPostRelease((ULONG_PTR)&Process[1]);
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object + 218, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 218);
    KeAbPostRelease((ULONG_PTR)(Object + 1744));
    MmDeleteKernelStack(*((_QWORD *)Object + 7), 2);
    *((_QWORD *)Object + 5) = 0LL;
    if ( a6 )
    {
      if ( v40 )
        MmDeleteTeb((ULONG_PTR)Process);
      if ( *a6 )
        PspDeleteUserStack((ULONG_PTR)Process);
    }
    return (Process[1].DirectoryTableBase & 0x4000000800000000LL) != 0 ? -1073741558 : -1073741823;
  }
  KeStartThread((__int64)Object, (unsigned __int64 *)v15, v14);
  if ( (v38 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(v16 + 56));
    v38 &= ~1u;
  }
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( (DirectoryTableBase_high & 0x40000000) != 0 && (*a4 & 2) != 0 )
  {
    *((_DWORD *)Object + 441) |= 0x40u;
    DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  }
  v23 = (((DirectoryTableBase_high >> 27) & 7) << 9) | *((_DWORD *)Object + 440) & 0xFFFFF1FF;
  *((_DWORD *)Object + 440) = v23;
  *((_DWORD *)Object + 440) = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)LODWORD(Process[1].DirectoryTableBase)) & 0x7000;
  if ( ++*(_DWORD *)&Process[1].0 > LODWORD(Process[2].ActiveProcessors.Bitmap[0]) )
    LODWORD(Process[2].ActiveProcessors.Bitmap[0]) = Process[1].0;
  if ( *(_DWORD *)&Process[1].0 == 1 )
  {
    v38 |= 2u;
  }
  else if ( *(_DWORD *)&Process[1].0 == 2 && (Process[1].DirectoryTableBase & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFu);
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[1], 0LL);
  v24 = (struct _KPROCESS *)(Object + 1720);
  v25 = (PEPROCESS *)Process[1].ActiveProcessors.Bitmap[19];
  if ( *v25 != (PEPROCESS)&Process[1].ActiveProcessors.Bitmap[18] )
    __fastfail(3u);
  *(_QWORD *)&v24->Header.Lock = (char *)Process + 1160;
  *((_QWORD *)Object + 216) = v25;
  *v25 = v24;
  Process[1].ActiveProcessors.Bitmap[19] = (unsigned __int64)v24;
  v26 = _InterlockedExchangeAdd64(
          (volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[1],
          0xFFFFFFFFFFFFFFFFuLL);
  if ( (v26 & 2) != 0 && (v26 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[2].ActiveProcessors.Bitmap[1]);
  KeAbPostRelease((ULONG_PTR)&Process[2].ActiveProcessors.Bitmap[1]);
  if ( Process->InstrumentationCallback )
    _interlockedbittestandset((volatile signed __int32 *)Object, 0x19u);
  v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v27 & 2) != 0 && (v27 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  if ( (*a4 & 0x40) != 0 )
    PspChangeProcessExecutionState(Process);
  ObReferenceObjectExWithTag((ULONG_PTR)Object, 2);
  *((_DWORD *)Object + 457) = 1;
  if ( (*a4 & 1) != 0 )
  {
    KeSuspendThread((__int64)Object);
    if ( (*((_DWORD *)Object + 440) & 1) != 0 )
      KeForceResumeThread((__int64)Object);
  }
  v28 = 0;
  if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*a4 & 0x10) != 0 )
  {
    v29 = Process;
    v28 = 1;
  }
  else
  {
    v29 = v41;
  }
  inserted = SeCreateAccessStateEx(0LL, v29, a5, (__int64)PsThreadType + 76);
  if ( inserted < 0 )
  {
    ObfDereferenceObject(Object);
LABEL_82:
    v35 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object + 218, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v35 & 2) != 0 && (v35 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 218);
    KeAbPostRelease((ULONG_PTR)(Object + 1744));
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread((__int64)Object);
    v34 = a6;
    if ( a6 && *a6 )
      PspDeleteUserStack((ULONG_PTR)Process);
    goto LABEL_90;
  }
  inserted = ObInsertObjectEx(Object, AccessState, a5, 0, v28, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    ObfDereferenceObject(Object);
    if ( v39 )
      *v39 = v40;
    if ( a11 )
      *a11 = *(_OWORD *)(Object + 1608);
  }
  if ( inserted < 0 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    goto LABEL_82;
  }
  _InterlockedOr((volatile signed __int32 *)Object + 440, 2u);
  v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object + 218, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v31 & 2) != 0 && (v31 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 218);
  KeAbPostRelease((ULONG_PTR)(Object + 1744));
  v34 = a6;
LABEL_90:
  v36 = 0;
  if ( (v38 & 2) != 0 )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((ULONG_PTR)Process);
    if ( Process[2].ActiveProcessors.Bitmap[18] )
      PoEnergyContextStart((ULONG_PTR)Process);
    if ( (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) == 0 || Process[2].ActiveProcessors.Bitmap[13] )
    {
      LOBYTE(v33) = 1;
      v36 = PspCallProcessNotifyRoutines(Process, a7, v33);
    }
  }
  if ( (PerfGlobalGroupMask & 2) != 0 )
  {
    LOBYTE(v33) = 1;
    EtwTraceThread(Object, a3, v33);
  }
  if ( (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) == 0 || Process[2].ActiveProcessors.Bitmap[13] )
  {
    LOBYTE(v32) = 1;
    PspCallThreadNotifyRoutines(Object, v32);
  }
  if ( inserted < 0 )
    goto LABEL_128;
  if ( v36 < 0 )
    inserted = v36;
  else
    inserted = PspCreateObjectHandle(Object, AccessState, PsThreadType);
  SepDeleteAccessState((__int64)AccessState);
  SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
  if ( inserted < 0 )
    goto LABEL_120;
  if ( a7 )
  {
    v32 = *(_QWORD *)(a7 + 392);
    if ( v32 )
      inserted = PspAssignProcessToJobList((ULONG_PTR)Process);
  }
  if ( inserted < 0 )
  {
    v37 = ((__int64)AccessState[2].SecurityDescriptor & 0x200) == 0
       && (v41[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0;
    ObCloseHandle(AccessState[2].AuxData, v37);
    if ( v34 && (*v34 & 1) != 0 )
      KeRaiseUserException(inserted);
LABEL_120:
    if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 440, 0) )
      v38 |= 8u;
    if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
    {
      if ( (*a4 & 1) != 0 )
        KeForceResumeThread((__int64)Object);
    }
    else
    {
      if ( (v38 & 8) != 0 )
        *((_DWORD *)Object + 452) = inserted;
      KeRequestTerminationThread((__int64)Object);
    }
    goto LABEL_128;
  }
  *a10 = AccessState[2].AuxData;
LABEL_128:
  if ( (Object[3] & 0x40) != 0 && inserted < 0 )
  {
    KeSetUmsThreadKernelLock(**((_QWORD **)Object + 62), 0LL);
    KeUpdateUmsThreadState(**((_QWORD **)Object + 62), 2LL, 0LL);
    ObfDereferenceObject(*(PVOID *)(*((_QWORD *)Object + 62) + 16LL));
    KeUnInitializeUmsThread(Object);
  }
  KeReadyThread((__int64)Object, v32, v33);
  return (unsigned int)inserted;
}
