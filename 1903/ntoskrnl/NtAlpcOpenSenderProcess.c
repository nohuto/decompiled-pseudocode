/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x1406467C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsOpenProcess @ 0x1405CFD00 (PsOpenProcess.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x140647008 (AlpcpProbeAndCaptureMessageHeader.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderProcess(
        PHANDLE ProcessHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v12; // ebx
  POBJECT_ATTRIBUTES v13; // r9
  __int64 v14; // rcx
  PVOID v15; // rdi
  ULONG_PTR v16; // rbx
  __int64 v17; // rsi
  _QWORD *v18; // rsi
  __int64 v20; // rsi
  signed __int64 *v21; // rbx
  PVOID v22; // rcx
  PVOID Object; // [rsp+30h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-A0h] BYREF
  HANDLE v25; // [rsp+40h] [rbp-98h] BYREF
  _BYTE Source2[40]; // [rsp+48h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES v27; // [rsp+70h] [rbp-68h] BYREF

  memset(Source2, 0, sizeof(Source2));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v12 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 < 0 )
    goto LABEL_15;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessHandle < 0x7FFFFFFF0000LL )
      v14 = (__int64)ProcessHandle;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    AlpcpProbeAndCaptureMessageHeader(PortMessage, Source2, Flags);
    if ( ObjectAttributes < v13 )
      v13 = ObjectAttributes;
    v27 = *v13;
  }
  else
  {
    *(_OWORD *)Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
    *($2657DBAE15456219A4320FD9B175FD9B *)&Source2[16] = *($2657DBAE15456219A4320FD9B175FD9B *)((char *)&PortMessage->8
                                                                                              + 8);
    *(_QWORD *)&Source2[32] = PortMessage->ClientViewSize;
    v27 = *ObjectAttributes;
  }
  v15 = Object;
  v12 = AlpcpLookupMessage(
          (__int64)Object,
          *(unsigned int *)&Source2[24],
          *(int *)&Source2[32],
          (__int64)v13,
          &BugCheckParameter2);
  if ( v12 < 0 )
  {
    ObfDereferenceObject(v15);
    goto LABEL_15;
  }
  v16 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(BugCheckParameter2);
    ObfDereferenceObject(v15);
    v12 = -1073740029;
    goto LABEL_15;
  }
  v17 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( v17 )
  {
    if ( RtlCompareMemory((const void *)(v17 + 1608), &Source2[8], 0x10uLL) != 16 )
    {
      AlpcpUnlockMessage(v16);
      ObfDereferenceObject(v15);
      v12 = -1073741813;
      goto LABEL_15;
    }
    v18 = *(_QWORD **)(v17 + 544);
    ObfReferenceObjectWithTag(v18, 0x63706C41u);
    goto LABEL_13;
  }
  v20 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v20 )
  {
    AlpcpUnlockMessage(BugCheckParameter2);
    v22 = v15;
    goto LABEL_28;
  }
  v21 = (signed __int64 *)(v20 + 352);
  ExAcquirePushLockSharedEx(v20 + 352, 0LL);
  if ( (*(_DWORD *)(v20 + 416) & 0x40) == 0 )
  {
    v18 = *(_QWORD **)(v20 + 24);
    if ( v18[93] == *(_QWORD *)&Source2[8] )
    {
      ObfReferenceObjectWithTag(v18, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((ULONG_PTR)v21);
      v16 = BugCheckParameter2;
      v15 = Object;
LABEL_13:
      AlpcpUnlockMessage(v16);
      v12 = PsOpenProcess(&v25, DesiredAccess, (__int64)&v27, &Source2[8], 0, PreviousMode);
      ObfDereferenceObjectWithTag(v18, 0x63706C41u);
      ObfDereferenceObject(v15);
      if ( v12 >= 0 )
        *ProcessHandle = v25;
      goto LABEL_15;
    }
    if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v21);
    KeAbPostRelease((ULONG_PTR)v21);
    AlpcpUnlockMessage(BugCheckParameter2);
    v22 = Object;
LABEL_28:
    ObfDereferenceObject(v22);
    v12 = -1073741790;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v20 + 352));
  KeAbPostRelease(v20 + 352);
  AlpcpUnlockMessage(BugCheckParameter2);
  ObfDereferenceObject(Object);
  v12 = -1073741769;
LABEL_15:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
