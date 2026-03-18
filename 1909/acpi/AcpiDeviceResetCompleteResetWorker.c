/*
 * XREFs of AcpiDeviceResetCompleteResetWorker @ 0x1C00521B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     AcpiDeviceResetDereference @ 0x1C00523D0 (AcpiDeviceResetDereference.c)
 *     AcpiResetDeviceAlreadyProcessed @ 0x1C005290C (AcpiResetDeviceAlreadyProcessed.c)
 */

__int64 __fastcall AcpiDeviceResetCompleteResetWorker(PVOID P)
{
  PVOID v1; // rsi
  KIRQL v2; // al
  __int64 v3; // r8
  __int64 v4; // r15
  __int64 v5; // r9
  _QWORD *v6; // r14
  _QWORD *v7; // rdi
  _QWORD *v8; // rbp
  char v9; // bl
  KIRQL v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  PIRP Irp; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  void *v17; // rbx
  __int64 v18; // rcx
  _QWORD v20[5]; // [rsp+20h] [rbp-58h] BYREF

  v1 = P;
  memset(v20, 0, sizeof(v20));
  _InterlockedAdd((volatile signed __int32 *)v1, 1u);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v4 = *((_QWORD *)v1 + 9);
  LOBYTE(v5) = v2;
  v6 = (_QWORD *)(v4 + 48);
  v7 = *(_QWORD **)(v4 + 48);
  if ( v7 != (_QWORD *)(v4 + 48) )
  {
    do
    {
      v8 = v7 - 5;
      v7 = (_QWORD *)*v7;
      v9 = AcpiResetDeviceAlreadyProcessed(v4, v8, v3, v5);
      KeReleaseSpinLock(&AcpiPowerLock, v10);
      if ( !v9 && (v11 = v8[4]) != 0 && (v12 = *(_QWORD *)(v11 + 720)) != 0 )
        Irp = IoAllocateIrp(*(_BYTE *)(v12 + 76), 0);
      else
        Irp = 0LL;
      if ( Irp )
      {
        Irp->IoStatus.Information = 0LL;
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
        Irp->IoStatus.Status = -1073741637;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)v20;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_REENUMERATE_SELF_INTERFACE_STANDARD;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
        CurrentStackLocation[-1].Parameters.Create.Options = 65576;
        if ( (int)IoSynchronousCallDriver(*(_QWORD *)(v8[4] + 720LL), Irp) >= 0 )
        {
          ((void (__fastcall *)(_QWORD))v20[4])(v20[1]);
          ((void (__fastcall *)(_QWORD))v20[3])(v20[1]);
        }
        IoFreeIrp(Irp);
      }
      LOBYTE(v5) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    }
    while ( v7 != v6 );
    v15 = *(_QWORD **)(v4 + 48);
    v1 = P;
    while ( v15 != v6 )
    {
      v16 = *(v15 - 1);
      v15 = (_QWORD *)*v15;
      v17 = *(void **)(v16 + 904);
      *(_QWORD *)(v16 + 904) = 0LL;
      KeReleaseSpinLock(&AcpiPowerLock, v5);
      if ( v17 )
        AcpiDeviceResetDereference(v17);
      LOBYTE(v5) = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  v18 = *((_QWORD *)v1 + 3);
  if ( v18 )
  {
    *(_DWORD *)(v18 + 48) = *((_DWORD *)v1 + 8);
    IofCompleteRequest(*((PIRP *)v1 + 3), 0);
  }
  *((_QWORD *)v1 + 3) = 0LL;
  return AcpiDeviceResetDereference(v1);
}
