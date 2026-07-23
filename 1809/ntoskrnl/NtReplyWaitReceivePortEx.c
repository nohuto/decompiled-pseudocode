/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x140614CE0
 * Callers:
 *     NtReplyWaitReceivePort @ 0x140614CC0 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x140764630 (NtListenPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     AlpcpReceiveLegacyMessage @ 0x140614E70 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140615128 (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140616538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // r15
  __int64 v11; // rax
  int v12; // esi
  PVOID v13; // rdi
  int v15; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v17[8]; // [rsp+40h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( v10 )
  {
    v11 = (__int64)ReceiveMessage;
    if ( ((unsigned __int8)ReceiveMessage & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)ReceiveMessage >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 39) = *(_BYTE *)(v11 + 39);
  }
  v12 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v10, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = Object;
    v17[0] = Object;
    LODWORD(v17[6]) = 0;
    if ( ReplyMessage
      && ((memset(&v17[3], 0, 24), (*((_DWORD *)Object + 104) & 0x2000) == 0)
        ? (LODWORD(v17[6]) = 65541, v15 = AlpcpSendMessage(v17, ReplyMessage, 0LL, v10))
        : (LODWORD(v17[6]) = 4, v15 = AlpcpReplyLegacySynchronousRequest(v17, ReplyMessage, v10)),
          v12 = v15,
          v15 < 0) )
    {
      ObfDereferenceObject(v13);
      if ( v12 == -1073740029 )
        v12 = -1073741769;
    }
    else
    {
      v12 = AlpcpReceiveLegacyMessage(v17, ReceiveMessage, Timeout, PortContext);
      AlpcpCompleteDeferSignalRequest(v17);
      ObfDereferenceObject(v13);
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}
