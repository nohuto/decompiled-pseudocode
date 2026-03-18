/*
 * XREFs of NtReplyWaitReceivePortEx @ 0x140645B30
 * Callers:
 *     NtReplyWaitReceivePort @ 0x140645B10 (NtReplyWaitReceivePort.c)
 *     NtListenPort @ 0x140789E40 (NtListenPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpReceiveLegacyMessage @ 0x140645CD0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140645F90 (AlpcpCompleteDeferSignalRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140647304 (AlpcpReplyLegacySynchronousRequest.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtReplyWaitReceivePortEx(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v9; // r15
  __int64 v10; // rax
  int v11; // esi
  PVOID v12; // rdi
  int v14; // eax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+60h] [rbp-38h]
  __int64 v19; // [rsp+68h] [rbp-30h]
  int v20; // [rsp+70h] [rbp-28h]
  __int64 v21; // [rsp+74h] [rbp-24h]
  int v22; // [rsp+7Ch] [rbp-1Ch]

  v16[1] = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeGetCurrentThread()->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  if ( v9 )
  {
    v10 = (__int64)ReceiveMessage;
    if ( ((unsigned __int8)ReceiveMessage & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)ReceiveMessage >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 39) = *(_BYTE *)(v10 + 39);
  }
  v11 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, v9, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = Object;
    v16[0] = Object;
    v20 = 0;
    if ( ReplyMessage
      && ((v18 = 0LL, *((_QWORD *)&v17 + 1) = 0LL, v19 = 0LL, (*((_DWORD *)Object + 104) & 0x2000) == 0)
        ? (v20 = 65541, v14 = AlpcpSendMessage((__int64)v16, (__m256i *)ReplyMessage, 0LL, v9))
        : (v20 = 4, v14 = AlpcpReplyLegacySynchronousRequest(v16, ReplyMessage, v9)),
          v11 = v14,
          v14 < 0) )
    {
      ObfDereferenceObject(v12);
      if ( v11 == -1073740029 )
        v11 = -1073741769;
    }
    else
    {
      v11 = AlpcpReceiveLegacyMessage(v16, ReceiveMessage, Timeout, PortContext);
      AlpcpCompleteDeferSignalRequest(v16);
      ObfDereferenceObject(v12);
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
