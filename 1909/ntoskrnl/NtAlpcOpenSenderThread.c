/*
 * XREFs of NtAlpcOpenSenderThread @ 0x1406DA870
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14065AD68 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsOpenThread @ 0x140678030 (PsOpenThread.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderThread(
        PHANDLE ThreadHandle,
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
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-70h] BYREF
  int v21[2]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE Source2[40]; // [rsp+48h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES v23; // [rsp+70h] [rbp-38h] BYREF

  memset(Source2, 0, sizeof(Source2));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v12 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    if ( PreviousMode )
    {
      v14 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ThreadHandle < 0x7FFFFFFF0000LL )
        v14 = (__int64)ThreadHandle;
      *(_QWORD *)v14 = *(_QWORD *)v14;
      AlpcpProbeAndCaptureMessageHeader((unsigned __int64)PortMessage, (__int64)Source2, Flags);
      if ( ObjectAttributes < v13 )
        v13 = ObjectAttributes;
      v23 = *v13;
    }
    else
    {
      *(_OWORD *)Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
      *($1C37251571326AB4BADEA5CD0641E50F *)&Source2[16] = *($1C37251571326AB4BADEA5CD0641E50F *)((char *)&PortMessage->8
                                                                                                + 8);
      *(_QWORD *)&Source2[32] = PortMessage->ClientViewSize;
      v23 = *ObjectAttributes;
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
    }
    else
    {
      v16 = BugCheckParameter2;
      if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(BugCheckParameter2);
        ObfDereferenceObject(v15);
        v12 = -1073740029;
      }
      else
      {
        v17 = *(_QWORD *)(BugCheckParameter2 + 32);
        if ( v17 && RtlCompareMemory((const void *)(v17 + 1608), &Source2[8], 0x10uLL) == 16 )
        {
          ObfReferenceObject((PVOID)v17);
          AlpcpUnlockMessage(v16);
          v12 = PsOpenThread((unsigned __int64)v21, DesiredAccess, (__int64)&v23, &Source2[8], 0, PreviousMode);
          ObfDereferenceObject((PVOID)v17);
          ObfDereferenceObject(v15);
          if ( v12 >= 0 )
            *ThreadHandle = *(HANDLE *)v21;
        }
        else
        {
          AlpcpUnlockMessage(v16);
          ObfDereferenceObject(v15);
          v12 = -1073741790;
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
