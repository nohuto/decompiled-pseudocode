/*
 * XREFs of KeyboardClassPowerComplete @ 0x1C0001490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00017A0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall KeyboardClassPowerComplete(__int64 a1, IRP *a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  char v5; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  UCHAR MinorFunction; // al
  ULONG Options; // edx
  POWER_STATE v10; // ebx
  PIRP Irp; // rax
  IRP *v12; // rbx
  struct _FILE_OBJECT *FileObject; // r8
  __int64 v14; // rdx
  struct _IO_STACK_LOCATION *v15; // rax
  struct _IO_STACK_LOCATION *v16; // rax
  IRP *v17; // r15
  struct _DEVICE_OBJECT *v19; // rcx
  NTSTATUS v20; // eax
  int RemlockSize; // [rsp+20h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v5 = 1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v10.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( MinorFunction )
  {
    if ( MinorFunction == 2 )
    {
      if ( Options )
      {
        if ( Options == 1 )
        {
          PoSetPowerState(*(PDEVICE_OBJECT *)v2, DevicePowerState, v10);
          *(POWER_STATE *)(v2 + 188) = v10;
          Irp = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
          v12 = Irp;
          if ( Irp )
          {
            if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 32), Irp, File, 1u, 0x20u) < 0 )
            {
              IoFreeIrp(v12);
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 100, RemlockSize, a1, (char)v12);
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                v14 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 156LL;
                FileObject = (struct _FILE_OBJECT *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                                    + 3 * *(unsigned int *)(v2 + 196));
              }
              else
              {
                FileObject = CurrentStackLocation->FileObject;
                v14 = v2 + 156;
              }
              v15 = v12->Tail.Overlay.CurrentStackLocation;
              v15[-1].MajorFunction = 15;
              v15[-1].Parameters.Read.ByteOffset.LowPart = 720904;
              v15[-1].Parameters.Create.Options = 4;
              v15[-1].Parameters.Read.Length = 0;
              v15[-1].FileObject = FileObject;
              v16 = v12->Tail.Overlay.CurrentStackLocation;
              v16[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&KeyboardClassSetLedsComplete;
              v16[-1].Context = (PVOID)v2;
              v16[-1].Control = -32;
              v12->AssociatedIrp.MasterIrp = (struct _IRP *)v14;
              v17 = (IRP *)_InterlockedExchange64((volatile __int64 *)(v2 + 368), 0LL);
              if ( v17 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qq(
                    WPP_GLOBAL_Control->DeviceExtension,
                    4,
                    4,
                    89,
                    RemlockSize,
                    *(_QWORD *)v2,
                    (char)v17);
                IoCancelIrp(v17);
                if ( _InterlockedExchange((volatile __int32 *)(v2 + 376), 2) == 3 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_SF_qq(
                      WPP_GLOBAL_Control->DeviceExtension,
                      4,
                      4,
                      90,
                      RemlockSize,
                      *(_QWORD *)v2,
                      (char)v17);
                  IoFreeIrp(v17);
                }
              }
              _InterlockedExchange64((volatile __int64 *)(v2 + 368), (__int64)v12);
              _InterlockedExchange((volatile __int32 *)(v2 + 376), 1);
              IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 16), v12);
            }
          }
        }
      }
      else
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v2, SystemPowerState, v10);
        v19 = *(struct _DEVICE_OBJECT **)v2;
        *(POWER_STATE *)(v2 + 192) = v10;
        v20 = PoRequestPowerIrp(
                v19,
                2u,
                (POWER_STATE)1,
                (PREQUEST_POWER_COMPLETE)KeyboardClassPoRequestComplete,
                0LL,
                0LL);
        if ( v20 < 0 )
          a2->IoStatus.Status = v20;
      }
    }
  }
  else
  {
    v5 = 0;
    if ( a2 == *(IRP **)(v2 + 296) && _InterlockedExchange((volatile __int32 *)(v2 + 320), 3) == 1 )
      v3 = -1073741802;
  }
  PoStartNextPowerIrp(a2);
  if ( v5 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 32), a2, 0x20u);
  return v3;
}
