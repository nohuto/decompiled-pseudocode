/*
 * XREFs of NtAlpcCancelMessage @ 0x1406EDB90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG MessageContext_high; // edi
  ULONG Sequence; // r15d
  PVOID PortContext_high; // rsi
  NTSTATUS v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rdi
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (Flags & 4) != 0 )
    {
      if ( ((unsigned __int8)MessageContext & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      MessageContext_high = HIDWORD(MessageContext->MessageContext);
      Sequence = MessageContext->Sequence;
      PortContext_high = (PVOID)HIDWORD(MessageContext->PortContext);
    }
    else
    {
      if ( ((unsigned __int8)MessageContext & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      MessageContext_high = MessageContext->MessageId;
      Sequence = MessageContext->CallbackId;
      PortContext_high = MessageContext->MessageContext;
    }
  }
  else
  {
    MessageContext_high = MessageContext->MessageId;
    Sequence = MessageContext->CallbackId;
    PortContext_high = MessageContext->MessageContext;
  }
  if ( !MessageContext_high )
  {
    v9 = -1073741559;
    goto LABEL_17;
  }
  v9 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v11 = MessageContext_high;
    v12 = Object;
    v9 = AlpcpLookupMessage((__int64)Object, v11, Sequence, v10, &BugCheckParameter2);
    if ( v9 >= 0 )
    {
      if ( (Flags & 8) == 0 )
        goto LABEL_14;
      if ( (v12[104] & 6) == 4 )
      {
        if ( PortContext_high == *(PVOID *)(BugCheckParameter2 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(BugCheckParameter2);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage((__int64)v12, BugCheckParameter2, Flags);
          }
          goto LABEL_16;
        }
      }
      else if ( PortContext_high == *(PVOID *)(BugCheckParameter2 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(BugCheckParameter2);
      v9 = -1073740007;
    }
LABEL_16:
    ObfDereferenceObject(v12);
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
