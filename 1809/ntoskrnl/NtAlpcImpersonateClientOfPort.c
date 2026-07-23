/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x140638760
 * Callers:
 *     NtImpersonateClientOfPort @ 0x14084AD70 (NtImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     AlpcpUnlockBlob @ 0x140638060 (AlpcpUnlockBlob.c)
 *     AlpcpImpersonateMessage @ 0x1406388C0 (AlpcpImpersonateMessage.c)
 *     AlpcpCaptureIdMessage @ 0x140638B00 (AlpcpCaptureIdMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14084B7F8 (AlpcpEnterStateChangeEventMessageLog.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r12
  int v7; // esi
  int v8; // r15d
  NTSTATUS v9; // edi
  int v10; // edx
  PVOID v11; // rsi
  ULONG_PTR v12; // rbx
  int v14; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2[5]; // [rsp+40h] [rbp-28h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(Message, &v17, &v14);
  v7 = v17;
  if ( v17 && (unsigned int)((unsigned __int64)Flags >> 2) <= 3 )
  {
    v8 = 0;
    v9 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v9 >= 0 )
    {
      v10 = v7;
      v11 = Object;
      v9 = AlpcpLookupMessage((__int64)Object, v10, v14, BugCheckParameter2);
      if ( v9 >= 0 )
      {
        LOBYTE(v8) = (((4 * (unsigned int)((unsigned __int64)Flags >> 2)) | 2) & (unsigned int)Flags) != 0LL;
        v12 = BugCheckParameter2[0];
        v9 = AlpcpImpersonateMessage(
               (_DWORD)v11,
               BugCheckParameter2[0],
               (unsigned __int8)Flags & 1,
               v8,
               (unsigned __int64)Flags >> 2);
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v12);
        AlpcpUnlockBlob(v12);
      }
      ObfDereferenceObject(v11);
    }
  }
  else
  {
    v9 = -1073741811;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v9;
}
