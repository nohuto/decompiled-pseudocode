/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x140614400
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14061BE2C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     PsOpenProcess @ 0x1406477E0 (PsOpenProcess.c)
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
  int v11; // ebx
  __int64 v12; // rcx
  POBJECT_ATTRIBUTES v13; // r9
  PVOID v14; // rdi
  ULONG_PTR v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rsi
  __int64 v19; // rsi
  signed __int64 *v20; // rbx
  PVOID v21; // rcx
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR v23; // [rsp+38h] [rbp-90h] BYREF
  void *v24; // [rsp+40h] [rbp-88h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-80h] BYREF
  __int128 v26; // [rsp+58h] [rbp-70h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-60h]
  OBJECT_ATTRIBUTES v28; // [rsp+70h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_15;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessHandle < 0x7FFFFFFF0000LL )
      v12 = (__int64)ProcessHandle;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    AlpcpProbeAndCaptureMessageHeader(PortMessage, &Source2, Flags);
    if ( ObjectAttributes < v13 )
      v13 = ObjectAttributes;
    v28 = *v13;
  }
  else
  {
    Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
    v26 = *(__int128 *)((char *)&PortMessage->8 + 8);
    ClientViewSize = PortMessage->ClientViewSize;
    v28 = *ObjectAttributes;
  }
  v14 = Object;
  v11 = AlpcpLookupMessage(Object, DWORD2(v26), (unsigned int)ClientViewSize, &v23);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v14);
    goto LABEL_15;
  }
  v15 = v23;
  if ( (*(_DWORD *)(v23 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(v23);
    ObfDereferenceObject(v14);
    v11 = -1073740029;
    goto LABEL_15;
  }
  v16 = *(_QWORD *)(v23 + 32);
  if ( v16 )
  {
    if ( RtlCompareMemory((const void *)(v16 + 1592), (char *)&Source2 + 8, 0x10uLL) != 16 )
    {
      AlpcpUnlockMessage(v15);
      ObfDereferenceObject(v14);
      v11 = -1073741813;
      goto LABEL_15;
    }
    v17 = *(_QWORD **)(v16 + 544);
    ObfReferenceObjectWithTag(v17, 0x63706C41u);
    goto LABEL_13;
  }
  v19 = *(_QWORD *)(v23 + 24);
  if ( !v19 )
  {
    AlpcpUnlockMessage(v23);
    v21 = v14;
    goto LABEL_28;
  }
  v20 = (signed __int64 *)(v19 + 352);
  ExAcquirePushLockSharedEx(v19 + 352, 0LL);
  if ( (*(_DWORD *)(v19 + 416) & 0x40) == 0 )
  {
    v17 = *(_QWORD **)(v19 + 24);
    if ( v17[92] == *((_QWORD *)&Source2 + 1) )
    {
      ObfReferenceObjectWithTag(v17, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      v15 = v23;
      v14 = Object;
LABEL_13:
      AlpcpUnlockMessage(v15);
      v11 = PsOpenProcess(
              (unsigned int)&v24,
              DesiredAccess,
              (unsigned int)&v28,
              (unsigned int)&Source2 + 8,
              0,
              PreviousMode);
      ObfDereferenceObjectWithTag(v17, 0x63706C41u);
      ObfDereferenceObject(v14);
      if ( v11 >= 0 )
        *ProcessHandle = v24;
      goto LABEL_15;
    }
    if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v20);
    KeAbPostRelease((ULONG_PTR)v20);
    AlpcpUnlockMessage(v23);
    v21 = Object;
LABEL_28:
    ObfDereferenceObject(v21);
    v11 = -1073741790;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v19 + 352));
  KeAbPostRelease(v19 + 352);
  AlpcpUnlockMessage(v23);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_15:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v11;
}
