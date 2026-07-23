/*
 * XREFs of PspInsertProcess @ 0x14060A3A8
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x14075871C (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14075F000 (PspCreateProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PspUnlockProcessListExclusive @ 0x140091D20 (PspUnlockProcessListExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x140129D40 (PsGetProcessImageFileName.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     PspImplicitAssignProcessToJob @ 0x1406057A0 (PspImplicitAssignProcessToJob.c)
 *     DbgkCopyProcessDebugPort @ 0x14060A650 (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060B3C0 (SeAuditingWithTokenForSubcategory.c)
 *     SeCreateAccessStateEx @ 0x140613280 (SeCreateAccessStateEx.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     PspValidateJobAffinityState @ 0x1406C32F4 (PspValidateJobAffinityState.c)
 *     SeAuditProcessCreation @ 0x14074A7A0 (SeAuditProcessCreation.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        struct _KPROCESS *a2,
        int a3,
        unsigned int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        PACCESS_STATE AccessState)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  PVOID v13; // r14
  int inserted; // esi
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  int v17; // r14d
  int v18; // edx
  struct _ACCESS_STATE *v19; // rbp
  __int64 v20; // rcx
  NTSTATUS v22; // eax
  const CHAR *ProcessImageFileName; // rax
  struct _KTHREAD *v24; // rax
  _STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-48h] BYREF
  char v27; // [rsp+A0h] [rbp+8h]
  PVOID v28; // [rsp+A8h] [rbp+10h] BYREF
  int v29; // [rsp+B0h] [rbp+18h]
  unsigned int v30; // [rsp+B8h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 131) + 40LL) = *((_DWORD *)Object + 184);
  v13 = 0LL;
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL, 0LL) )
    SeAuditProcessCreation((ULONG_PTR)Object);
  if ( !a2
    || !a2[1].Affinity.Bitmap[16]
    || (inserted = PspImplicitAssignProcessToJob(a2[1].Affinity.Bitmap[16], (volatile signed __int32 *)Object, a4),
        inserted >= 0) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v15 = (_QWORD *)qword_14040F548;
    v16 = Object + 744;
    if ( *(__int64 **)qword_14040F548 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 94) = qword_14040F548;
    *v16 = &PsActiveProcessHead;
    *v15 = v16;
    qword_14040F548 = (__int64)(Object + 744);
    *((_QWORD *)Object + 233) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      inserted = -1073741558;
    }
    else if ( !Handle
           || (v22 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &v28,
                       0LL),
               v13 = v28,
               inserted = v22,
               v22 >= 0) )
    {
      inserted = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
      if ( v13 )
        ObfDereferenceObject(v13);
      if ( inserted >= 0 )
      {
        if ( v27 && (v30 & 2) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 193, 2u);
        v17 = 0;
        if ( !a2 || (v18 = (int)PsInitialSystemProcess, a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v18 = (int)Object;
            v17 = 1;
          }
          else
          {
            v18 = (int)Process;
          }
        }
        v19 = AccessState;
        inserted = SeCreateAccessStateEx(
                     0,
                     v18,
                     (_DWORD)AccessState,
                     (int)AccessState + 160,
                     v29,
                     (__int64)PsProcessType + 76);
        if ( inserted >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          inserted = ObInsertObjectEx(Object, v19, v17, 0LL, 0LL);
          if ( inserted >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v20 = *((_QWORD *)Object + 118);
            if ( !v20 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 193, 0x4000000u);
LABEL_21:
              if ( (ObpTraceFlags & 0x20) != 0 )
              {
                ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)Object);
                RtlInitAnsiString(&DestinationString, ProcessImageFileName);
                if ( DestinationString.Length )
                {
                  if ( RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u) >= 0 )
                  {
                    v24 = KeGetCurrentThread();
                    --v24->SpecialApcDisable;
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
                    if ( (ObpTraceFlags & 0x20) != 0 && RtlPrefixUnicodeString(&String1, ObpTraceProcessName, 1u) )
                      _InterlockedOr((volatile signed __int32 *)Object + 192, 0x200u);
                    if ( (_InterlockedExchangeAdd64(
                            (volatile signed __int64 *)&ObpStackTraceLock,
                            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
                    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
                    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
                    RtlFreeAnsiString(&String1);
                  }
                }
              }
              if ( (a6 & 1) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)Object + 91);
                KeAbPostRelease((ULONG_PTR)(Object + 728));
                KeLeaveCriticalRegionThread((__int64)CurrentThread);
              }
              return 0LL;
            }
            inserted = PspValidateJobAffinityState(v20, Object);
            if ( inserted >= 0 )
              goto LABEL_21;
          }
          SepDeleteAccessState((__int64)v19);
          SeReleaseSubjectContext(&v19->SubjectSecurityContext);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 91, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 91);
    KeAbPostRelease((ULONG_PTR)(Object + 728));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return (unsigned int)inserted;
}
