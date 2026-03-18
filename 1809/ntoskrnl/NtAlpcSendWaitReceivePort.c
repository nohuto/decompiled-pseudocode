/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x140632020
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     AlpcpSignal @ 0x1400D37D0 (AlpcpSignal.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     AlpcpReceiveMessage @ 0x1406322B0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140633A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1406348F0 (AlpcpSendMessage.c)
 *     AlpcpTrackPortReferences @ 0x1406C3FE4 (AlpcpTrackPortReferences.c)
 */

__int64 __fastcall NtAlpcSendWaitReceivePort(
        HANDLE Handle,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        volatile void *Address,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // edi
  unsigned __int8 v14; // r14
  NTSTATUS v15; // esi
  __int64 v16; // r9
  PVOID v17; // rbx
  struct _KTHREAD *v19; // rax
  $FFD56A4B518EFE5E17FDE2C5CC486782 *v21; // rcx
  char v23; // al
  int v24; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v26[8]; // [rsp+60h] [rbp-58h] BYREF

  memset(v26, 0, sizeof(v26));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = a2 & 0xFFFF0000;
  v14 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v15 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, v14, &Object, 0LL);
  if ( v15 >= 0 )
  {
    v17 = Object;
    if ( (v13 & 0x40000) != 0 )
      AlpcpTrackPortReferences(Object);
    if ( (v13 & 0x20000) != 0 )
    {
      if ( a3 )
      {
        if ( (v13 & 0x10000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( (v13 & 0x1000000) != 0 )
        {
          v15 = -1073741584;
        }
        else if ( a5 )
        {
          if ( (v13 & 0x100000) != 0 )
            v23 = 1;
          else
            v23 = v14;
          LOBYTE(v24) = v14;
          v15 = AlpcpProcessSynchronousRequest((int)v17, v13, a3, a4, a5, a6, Address, a8, v24, v23);
        }
        else
        {
          v15 = -1073740027;
        }
      }
      else
      {
        v15 = -1073741584;
      }
    }
    else
    {
      v26[0] = v17;
      LODWORD(v26[6]) = v13;
      if ( !a3 )
      {
LABEL_6:
        if ( a5 )
          v15 = AlpcpReceiveMessage(v26, a5, a6, Address, a8);
        if ( _bittestandreset((signed __int32 *)&v26[6], 2u) )
        {
          AlpcpSignal((__int64)v26, 0LL, 0LL, v16);
          if ( v26[4] )
            ObfDereferenceObject((PVOID)v26[4]);
        }
        goto LABEL_9;
      }
      if ( (v13 & 0x1000000) != 0 )
      {
        v15 = -1073741584;
      }
      else
      {
        LODWORD(v26[6]) = v13 | 4;
        memset(&v26[3], 0, 24);
        v15 = AlpcpSendMessage(v26, a3, a4, v14);
        if ( v15 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    ObfDereferenceObject(v17);
  }
  v19 = KeGetCurrentThread();
  if ( v19->KernelApcDisable++ == -1 )
  {
    v21 = &v19->152;
    if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v21->ApcState.ApcListHead[0].Flink != v21 && !v19->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v21);
  }
  return (unsigned int)v15;
}
