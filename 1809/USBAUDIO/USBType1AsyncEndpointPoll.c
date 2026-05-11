/*
 * XREFs of USBType1AsyncEndpointPoll @ 0x1C0003D30
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00113C0 (memset.c)
 *     USBHwAbortOrResetPipe @ 0x1C002A5C8 (USBHwAbortOrResetPipe.c)
 */

void __fastcall USBType1AsyncEndpointPoll(PDEVICE_OBJECT DeviceObject, _QWORD *Context)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdi
  KSPIN_LOCK *v5; // rsi
  _DWORD *v6; // r15
  struct _DEVICE_OBJECT *v7; // r14
  IRP *v8; // r12
  KIRQL v9; // al
  KIRQL v10; // bp
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // r10
  signed int v16; // eax
  KIRQL v17; // al
  KIRQL v18; // bl
  KIRQL v19; // dl
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v21; // rax

  v2 = (_QWORD *)Context[2];
  v4 = v2[19];
  v5 = v2 + 14;
  v6 = *(_DWORD **)(v4 + 864);
  v7 = *(struct _DEVICE_OBJECT **)(v2[2] + 40LL);
  v8 = *(IRP **)(v4 + 872);
  v9 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
  v10 = v9;
  if ( *(_BYTE *)(v4 + 100) )
  {
    *(_BYTE *)(v4 + 917) = 1;
    KeReleaseSpinLock(v2 + 14, v9);
    if ( (int)USBHwAbortOrResetPipe(v7) >= 0 )
      goto LABEL_13;
    v11 = v2[19];
    v12 = 0LL;
    v13 = 0;
    v14 = *(_DWORD *)(v11 + 56);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v11 + 72);
      while ( *(_BYTE *)(v15 + 24LL * v13 + 2) != *(_BYTE *)(*(_QWORD *)(v2[18] + 176LL) + 2LL) )
      {
        if ( ++v13 >= v14 )
          goto LABEL_9;
      }
      v12 = *(_QWORD *)(v15 + 24LL * v13 + 8);
    }
LABEL_9:
    v16 = v12 == 0 ? 0xC000009C : 0;
    if ( v12 )
    {
      *(_QWORD *)(v4 + 888) = v12;
      v16 = USBHwAbortOrResetPipe(v7);
    }
    if ( v16 >= 0 )
    {
LABEL_13:
      memset(v6, 0, 0xA4uLL);
      *v6 = 655524;
      *((_QWORD *)v6 + 3) = *(_QWORD *)(v4 + 888);
      v6[8] = 1;
      v6[32] = *(_DWORD *)(v4 + 896);
      v6[33] = 1;
      v6[35] = 0;
      *((_QWORD *)v6 + 5) = v4 + 976;
      v6[9] = 3;
      IoInitializeIrp(v8, 72 * v7->StackSize + 208, v7->StackSize);
      CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].MajorFunction = 15;
      CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v6;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
      v21 = v8->Tail.Overlay.CurrentStackLocation;
      v21[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)USBType1AsyncEndpointPollCallback;
      v21[-1].Context = Context;
      v21[-1].Control = -32;
      IofCallDriver(v7, v8);
      return;
    }
    v17 = KeAcquireSpinLockRaiseToDpc(v2 + 14);
    *(_BYTE *)(v4 + 917) = 0;
    v18 = v17;
    KeSetEvent((PRKEVENT)(v4 + 920), 0, 0);
    *(_BYTE *)(v4 + 916) = 0;
    KeSetEvent((PRKEVENT)(v4 + 944), 0, 0);
    v19 = v18;
  }
  else
  {
    *(_BYTE *)(v4 + 916) = 0;
    KeSetEvent((PRKEVENT)(v4 + 944), 0, 0);
    v19 = v10;
  }
  KeReleaseSpinLock(v5, v19);
}
