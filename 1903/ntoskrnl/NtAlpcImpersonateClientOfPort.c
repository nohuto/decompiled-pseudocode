/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x1405E4390
 * Callers:
 *     NtImpersonateClientOfPort @ 0x140884FF0 (NtImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     AlpcpImpersonateMessage @ 0x1405E4570 (AlpcpImpersonateMessage.c)
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885AD8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  int v3; // r12d
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r11
  __int64 v7; // rcx
  unsigned int MessageId; // esi
  unsigned int CallbackId; // r15d
  unsigned __int64 v10; // rbx
  NTSTATUS v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  PVOID v14; // rsi
  BOOL v15; // r14d
  ULONG_PTR v16; // rbx
  int Object; // [rsp+20h] [rbp-38h]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+38h] [rbp-20h] BYREF
  PVOID v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = (int)Flags;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = (unsigned __int8)Message & 3;
    if ( ((unsigned __int8)Message & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v7 = (unsigned __int8)Message & 3;
  }
  if ( (Message->u2.s2.Type & 0x1000) != 0 )
  {
    MessageId = *((_DWORD *)&Message->DoNotUseThisField + 2);
    CallbackId = *((_DWORD *)&Message->DoNotUseThisField + 3);
  }
  else
  {
    if ( PreviousMode && v7 )
      ExRaiseDatatypeMisalignment();
    MessageId = Message->MessageId;
    CallbackId = Message->CallbackId;
  }
  if ( MessageId && (v10 = (unsigned __int64)Flags >> 2, (unsigned int)((unsigned __int64)Flags >> 2) <= 3) )
  {
    v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &v20, 0LL);
    if ( v11 >= 0 )
    {
      v13 = MessageId;
      v14 = v20;
      v11 = AlpcpLookupMessage((__int64)v20, v13, CallbackId, v12, BugCheckParameter2);
      if ( v11 >= 0 )
      {
        v15 = (((4 * (_DWORD)v10) | 2) & v3) != 0LL;
        Object = v10;
        v16 = BugCheckParameter2[0];
        v11 = AlpcpImpersonateMessage((_DWORD)v14, BugCheckParameter2[0], v3 & 1, v15, Object);
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v16);
        AlpcpUnlockBlob(v16);
      }
      ObfDereferenceObject(v14);
    }
  }
  else
  {
    v11 = -1073741811;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
