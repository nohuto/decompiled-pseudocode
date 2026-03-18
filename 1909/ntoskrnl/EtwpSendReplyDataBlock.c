/*
 * XREFs of EtwpSendReplyDataBlock @ 0x1406AA8FC
 * Callers:
 *     NtTraceControl @ 0x14064C530 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     EtwpReleaseQueueEntry @ 0x1406942E8 (EtwpReleaseQueueEntry.c)
 *     EtwpQueueReply @ 0x1406AA9DC (EtwpQueueReply.c)
 */

__int64 __fastcall EtwpSendReplyDataBlock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  unsigned int v4; // edi
  NTSTATUS v5; // ebx
  PVOID v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(void **)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  v5 = ObReferenceObjectByHandle(v3, 4u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = Object;
    if ( (*((_BYTE *)Object + 98) & 2) != 0 )
    {
      if ( v4 >= 4 )
      {
        v5 = -1073741811;
      }
      else
      {
        v7 = _InterlockedExchange64((volatile __int64 *)Object + v4 + 6, 0LL);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 32);
          if ( (*(_BYTE *)(v8 + 98) & 0x40) != 0 )
            v5 = -1073741055;
          else
            v5 = EtwpQueueReply(*(PRKQUEUE *)(v8 + 48));
          EtwpReleaseQueueEntry((char *)v7, 2);
        }
        else
        {
          v5 = -1073741811;
        }
        v6 = Object;
      }
    }
    else
    {
      v5 = -1073741816;
    }
    ObfDereferenceObject(v6);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
