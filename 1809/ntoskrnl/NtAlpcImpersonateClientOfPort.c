/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x140637740
 * Callers:
 *     NtImpersonateClientOfPort @ 0x140849B10 (NtImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x140636970 (AlpcpLookupMessage.c)
 *     AlpcpUnlockBlob @ 0x140637040 (AlpcpUnlockBlob.c)
 *     AlpcpImpersonateMessage @ 0x1406378A0 (AlpcpImpersonateMessage.c)
 *     AlpcpCaptureIdMessage @ 0x140637AE0 (AlpcpCaptureIdMessage.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14084A598 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall NtAlpcImpersonateClientOfPort(HANDLE Handle, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r12
  int v7; // esi
  int v8; // r15d
  int v9; // edi
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
  AlpcpCaptureIdMessage(a2, &v17, &v14);
  v7 = v17;
  if ( v17 && (unsigned int)(a3 >> 2) <= 3 )
  {
    v8 = 0;
    v9 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v9 >= 0 )
    {
      v10 = v7;
      v11 = Object;
      v9 = AlpcpLookupMessage((__int64)Object, v10, v14, BugCheckParameter2);
      if ( v9 >= 0 )
      {
        LOBYTE(v8) = (((4 * (unsigned int)(a3 >> 2)) | 2) & (unsigned int)a3) != 0LL;
        v12 = BugCheckParameter2[0];
        v9 = AlpcpImpersonateMessage((_DWORD)v11, BugCheckParameter2[0], a3 & 1, v8, a3 >> 2);
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
  return (unsigned int)v9;
}
