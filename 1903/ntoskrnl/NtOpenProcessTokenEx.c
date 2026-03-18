/*
 * XREFs of NtOpenProcessTokenEx @ 0x1405CFA00
 * Callers:
 *     NtOpenProcessToken @ 0x1405D0AE0 (NtOpenProcessToken.c)
 *     RtlpSysVolTakeOwnership @ 0x1408D4B7C (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObReferenceObjectByPointerWithTag @ 0x140006360 (ObReferenceObjectByPointerWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14003AE60 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObject @ 0x14003AF90 (ObFastReferenceObject.c)
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  KPROCESSOR_MODE PreviousMode; // r12
  int v6; // r14d
  ULONG v7; // r14d
  NTSTATUS result; // eax
  PVOID v9; // rbx
  _QWORD *v10; // rdi
  char *v11; // rsi
  POBJECT_TYPE *v12; // r15
  NTSTATUS v13; // ebx
  struct _KPROCESS *Process; // rbx
  __int64 v15; // rdx
  struct _KTHREAD *CurrentThread; // r15
  signed __int64 *v17; // rbx
  int v18; // [rsp+30h] [rbp-238h]
  PVOID Object; // [rsp+68h] [rbp-200h] BYREF
  void *v21; // [rsp+70h] [rbp-1F8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-1E8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v23[5]; // [rsp+A0h] [rbp-1C8h] BYREF
  _QWORD v24[28]; // [rsp+140h] [rbp-128h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 73714;
  if ( PreviousMode )
    v6 = 7666;
  v7 = HandleAttributes & v6;
  if ( PreviousMode )
  {
    v15 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x65537350u, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v9 = Object;
    v10 = (char *)Object + 864;
    v11 = (char *)ObFastReferenceObject((signed __int64 *)Object + 108);
    if ( !v11 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = (signed __int64 *)((char *)Object + 736);
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 736, 0LL);
      v11 = (char *)ObFastReferenceObjectLocked(v10);
      if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v17);
      KeAbPostRelease((ULONG_PTR)v17);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v9 = Object;
    }
    ObfDereferenceObjectWithTag(v9, 0x65537350u);
    v12 = SeTokenObjectType;
    memset(v24, 0, sizeof(v24));
    memset(v23, 0, sizeof(v23));
    v21 = 0LL;
    v13 = ObReferenceObjectByPointerWithTag(v11, 0, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, 0x6E48624Fu);
    if ( v13 >= 0 )
    {
      if ( !v12 )
        v12 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v11 - 48) >> 8)];
      if ( (v7 & (_DWORD)v12[9]) != 0 || (*(v11 - 21) & 1) != 0 && *((_QWORD *)v11 - 2) )
      {
        ++ObpInvalidOpenByPointer;
        ObfDereferenceObjectWithTag(v11, 0x6E48624Fu);
        v13 = -1073741811;
      }
      else
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        SeCaptureSubjectContextEx(KeGetCurrentThread(), Process, &SubjectContext);
        v13 = SepCreateAccessStateFromSubjectContext(
                &SubjectContext,
                v23,
                v24,
                DesiredAccess,
                (PGENERIC_MAPPING)((char *)v12 + 76));
        if ( v13 < 0 )
        {
          ObfDereferenceObjectWithTag(v11, 0x6E48624Fu);
        }
        else
        {
          LOBYTE(v18) = PreviousMode;
          v13 = ObpCreateHandle(1LL, v11, 0LL, v23, 0, v7, v18, 0LL, 0, 0LL, &v21);
          if ( v13 < 0 )
            ObfDereferenceObjectWithTag(v11, 0x6E48624Fu);
          SepDeleteAccessState((__int64)v23);
          SeReleaseSubjectContext(&v23[1]);
        }
      }
    }
    ObfDereferenceObject(v11);
    if ( v13 >= 0 )
      *TokenHandle = v21;
    return v13;
  }
  return result;
}
