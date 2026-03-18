/*
 * XREFs of NtReplyPort @ 0x140644E30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140647304 (AlpcpReplyLegacySynchronousRequest.c)
 */

NTSTATUS __stdcall NtReplyPort(HANDLE PortHandle, PPORT_MESSAGE LpcReply)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  struct _KTHREAD *v7; // rcx
  PVOID v8; // rdi
  char PreviousMode; // r9
  _QWORD v11[8]; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v7 = KeGetCurrentThread();
    v8 = Object;
    LODWORD(v11[6]) = 0;
    v11[0] = Object;
    if ( (*((_DWORD *)Object + 104) & 0x2000) != 0 )
    {
      LOBYTE(v6) = v7->PreviousMode;
      v5 = AlpcpReplyLegacySynchronousRequest(v11, LpcReply, v6);
    }
    else
    {
      PreviousMode = v7->PreviousMode;
      LODWORD(v11[6]) = 65537;
      v5 = AlpcpSendMessage((__int64)v11, (__m256i *)LpcReply, 0LL, PreviousMode);
      if ( v5 == -1073740029 )
        v5 = -1073741769;
    }
    ObfDereferenceObject(v8);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
