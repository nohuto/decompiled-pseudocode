/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x1405DF5B0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400443F0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     AlpcpSignal @ 0x14000D690 (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     AlpcpReceiveMessage @ 0x1405DF870 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0F10 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     AlpcpTrackPortReferences @ 0x1406E5294 (AlpcpTrackPortReferences.c)
 */

__int64 __fastcall NtAlpcSendWaitReceivePort(
        void *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        volatile void *Address,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  unsigned __int8 v12; // r14
  NTSTATUS v13; // esi
  int v14; // r9d
  PVOID v15; // rdi
  struct _KTHREAD *v17; // rax
  $C6908ADE9723D0A04AF8EE82D8D15C40 *v19; // rcx
  char v21; // al
  int v22; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v24[2]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v25; // [rsp+70h] [rbp-48h]
  PVOID v26; // [rsp+80h] [rbp-38h]
  __int64 v27; // [rsp+88h] [rbp-30h]
  unsigned int v28; // [rsp+90h] [rbp-28h] BYREF
  __int64 v29; // [rsp+94h] [rbp-24h]
  int v30; // [rsp+9Ch] [rbp-1Ch]

  v24[1] = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v30 = 0;
  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = a2 & 0xFFFF0000;
  v12 = KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  v13 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, v12, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v15 = Object;
    if ( (v11 & 0x40000) != 0 )
      AlpcpTrackPortReferences(Object);
    if ( (v11 & 0x20000) != 0 )
    {
      if ( a3 )
      {
        if ( (v11 & 0x10000) != 0 )
        {
          v13 = -1073741584;
        }
        else if ( (v11 & 0x1000000) != 0 )
        {
          v13 = -1073741584;
        }
        else if ( a5 )
        {
          if ( (v11 & 0x100000) != 0 )
            v21 = 1;
          else
            v21 = v12;
          LOBYTE(v22) = v12;
          v13 = AlpcpProcessSynchronousRequest((int)v15, v11, a3, a4, a5, a6, Address, a8, v22, v21);
        }
        else
        {
          v13 = -1073740027;
        }
      }
      else
      {
        v13 = -1073741584;
      }
    }
    else
    {
      v24[0] = v15;
      v28 = v11;
      if ( !a3 )
      {
LABEL_6:
        if ( a5 )
          v13 = AlpcpReceiveMessage(v24, a5, a6, Address, a8);
        if ( _bittestandreset((signed __int32 *)&v28, 2u) )
        {
          AlpcpSignal((__int64)v24, 0LL, 0LL, v14);
          if ( v26 )
            ObfDereferenceObject(v26);
        }
        goto LABEL_9;
      }
      if ( (v11 & 0x1000000) != 0 )
      {
        v13 = -1073741584;
      }
      else
      {
        v26 = 0LL;
        v28 = v11 | 4;
        *((_QWORD *)&v25 + 1) = 0LL;
        v27 = 0LL;
        v13 = AlpcpSendMessage(v24, a3, a4, v12);
        if ( v13 >= 0 )
          goto LABEL_6;
      }
    }
LABEL_9:
    ObfDereferenceObject(v15);
  }
  v17 = KeGetCurrentThread();
  if ( v17->KernelApcDisable++ == -1 )
  {
    v19 = &v17->152;
    if ( ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v19->ApcState.ApcListHead[0].Flink != v19 && !v17->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v19);
  }
  return (unsigned int)v13;
}
