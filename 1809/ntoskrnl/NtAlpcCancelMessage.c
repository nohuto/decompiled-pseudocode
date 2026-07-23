/*
 * XREFs of NtAlpcCancelMessage @ 0x1406CF330
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG MessageContext_high; // edi
  ULONG Sequence; // r15d
  PVOID PortContext_high; // rsi
  NTSTATUS v9; // ebx
  int v10; // edx
  _DWORD *v11; // rdi
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v14; // [rsp+88h] [rbp+20h] BYREF

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
    v10 = MessageContext_high;
    v11 = Object;
    v9 = AlpcpLookupMessage((__int64)Object, v10, Sequence, &v14);
    if ( v9 >= 0 )
    {
      if ( (Flags & 8) == 0 )
        goto LABEL_14;
      if ( (v11[104] & 6) == 4 )
      {
        if ( PortContext_high == *(PVOID *)(v14 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(v14 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(v14);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage((__int64)v11, v14, Flags);
          }
          goto LABEL_16;
        }
      }
      else if ( PortContext_high == *(PVOID *)(v14 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(v14);
      v9 = -1073740007;
    }
LABEL_16:
    ObfDereferenceObject(v11);
  }
LABEL_17:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v9;
}
