/*
 * XREFs of MouseClassPower @ 0x1C0002E00
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassCheckWaitWakeEnabled @ 0x1C00026BC (MouseClassCheckWaitWakeEnabled.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0005338 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqsd @ 0x1C0005FE8 (WPP_RECORDER_SF_qqsd.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000CFF4 (MouseClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall MouseClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v3; // r14
  char v5; // r13
  ULONG Options; // ebp
  __int64 LowPart; // rbx
  NTSTATUS v8; // esi
  int v9; // r8d
  int v10; // r9d
  KIRQL v11; // al
  char v12; // bl
  char v13; // al
  char v14; // bp
  const char *v15; // rax
  int v16; // eax
  int v17; // eax
  KIRQL v18; // al
  char v19; // si
  POWER_STATE v20; // eax
  KIRQL v22; // al
  KIRQL v23; // al
  struct _IO_STACK_LOCATION *v24; // rax
  struct _IO_STACK_LOCATION *v25; // rax
  int RemlockSize; // [rsp+20h] [rbp-68h]
  char v27; // [rsp+A0h] [rbp+18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = *(_QWORD *)(a1 + 64);
  v5 = a1;
  v27 = 1;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v3 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels || !*(_BYTE *)(v3 + 64) )
  {
    PoStartNextPowerIrp(a2);
    v8 = -1073741637;
    goto LABEL_66;
  }
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, File, 1u, 0x20u);
  if ( v8 >= 0 )
  {
    if ( CurrentStackLocation->MinorFunction )
    {
      if ( CurrentStackLocation->MinorFunction != 2 )
      {
        if ( CurrentStackLocation->MinorFunction == 3 )
        {
          if ( (int)LowPart >= 5 || (int)LowPart <= *(_DWORD *)(v3 + 272) )
            goto LABEL_14;
          v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
          if ( !*(_QWORD *)(v3 + 280) || (v12 = 1, *(_BYTE *)(v3 + 288)) )
            v12 = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v11);
          v8 = -1073741101;
          if ( !v12 )
LABEL_14:
            v8 = 0;
          a2->IoStatus.Status = v8;
        }
        goto LABEL_16;
      }
      v15 = "S";
      if ( Options )
        v15 = "D";
      WPP_RECORDER_SF_qqsd(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)"D",
        v9,
        v10,
        RemlockSize,
        v5,
        (char)a2,
        (__int64)v15,
        LowPart - 1);
      if ( Options )
      {
        if ( Options != 1 )
        {
LABEL_16:
          v13 = 0;
LABEL_17:
          v14 = 0;
LABEL_18:
          if ( v8 < 0 )
          {
LABEL_19:
            a2->IoStatus.Status = v8;
            PoStartNextPowerIrp(a2);
            IofCompleteRequest(a2, 0);
            goto LABEL_27;
          }
          if ( v14 )
            goto LABEL_62;
          if ( v13 )
            goto LABEL_64;
LABEL_26:
          PoStartNextPowerIrp(a2);
          ++a2->CurrentLocation;
          ++a2->Tail.Overlay.CurrentStackLocation;
          v8 = PoCallDriver(*(PDEVICE_OBJECT *)(v3 + 16), a2);
          goto LABEL_27;
        }
        a2->IoStatus.Status = 0;
        v16 = *(_DWORD *)(v3 + 172);
        if ( (int)LowPart > v16 )
        {
          PoSetPowerState(*(PDEVICE_OBJECT *)v3, DevicePowerState, (POWER_STATE)LowPart);
          *(_DWORD *)(v3 + 172) = LowPart;
          goto LABEL_26;
        }
        if ( (int)LowPart >= v16 )
          goto LABEL_26;
      }
      else
      {
        v17 = *(_DWORD *)(v3 + 176);
        if ( (int)LowPart > v17 )
        {
          v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, File, 1u, 0x20u);
          if ( v8 < 0 )
            goto LABEL_19;
          v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
          if ( !*(_QWORD *)(v3 + 280) || (v19 = 1, *(_BYTE *)(v3 + 288)) )
            v19 = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v18);
          if ( v19 && (int)LowPart < 5 )
            v20.SystemState = *(SYSTEM_POWER_STATE *)(v3 + 4 * LowPart + 248);
          else
            v20.SystemState = PowerSystemSleeping3;
          a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          v8 = PoRequestPowerIrp(
                 *(PDEVICE_OBJECT *)v3,
                 2u,
                 v20,
                 (PREQUEST_POWER_COMPLETE)MouseClassPoRequestComplete,
                 a2,
                 0LL);
          if ( v8 < 0 )
          {
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, 0x20u);
            PoStartNextPowerIrp(a2);
            a2->IoStatus.Status = v8;
            IofCompleteRequest(a2, 0);
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, 0x20u);
            return 259LL;
          }
          v13 = 1;
          goto LABEL_17;
        }
        if ( (int)LowPart >= v17 )
        {
          if ( (_DWORD)LowPart == 1 && *(int *)(v3 + 268) > 1 && *(int *)(v3 + 272) > 1 )
          {
            v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
            if ( !*(_QWORD *)(v3 + 280) || *(_BYTE *)(v3 + 288) )
              LOBYTE(LowPart) = 0;
            KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v22);
            if ( !(_BYTE)LowPart && MouseClassCheckWaitWakeEnabled(v3) )
              MouseClassCreateWaitWakeIrp((PVOID)v3);
          }
          a2->IoStatus.Status = 0;
          v8 = 0;
          goto LABEL_16;
        }
        a2->IoStatus.Status = 0;
      }
LABEL_62:
      IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, File, 1u, 0x20u);
      v24 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v24[-1].MajorFunction = *(_OWORD *)&v24->MajorFunction;
      *(_OWORD *)&v24[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v24->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v24[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v24->Parameters.SetQuota + 6);
      v24[-1].FileObject = v24->FileObject;
      v24[-1].Control = 0;
      v25 = a2->Tail.Overlay.CurrentStackLocation;
      v25[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&MouseClassPowerComplete;
      v25[-1].Context = 0LL;
      v25[-1].Control = -32;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      PoCallDriver(*(PDEVICE_OBJECT *)(v3 + 16), a2);
LABEL_64:
      v8 = 259;
LABEL_27:
      if ( v27 )
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 32), a2, 0x20u);
      return (unsigned int)v8;
    }
    WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 5, 90);
    v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 72));
    if ( *(_QWORD *)(v3 + 280) )
    {
      *(_QWORD *)(v3 + 296) = a2;
    }
    else
    {
      *(_QWORD *)(v3 + 280) = a2;
      *(_BYTE *)(v3 + 288) = 0;
      if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(v3 + 304), 0) - 1) > 1 )
      {
        v8 = 0;
        v14 = 1;
LABEL_60:
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 72), v23);
        v13 = 0;
        v27 = v14;
        goto LABEL_18;
      }
    }
    v14 = 0;
    v8 = -1073741436;
    goto LABEL_60;
  }
  PoStartNextPowerIrp(a2);
LABEL_66:
  a2->IoStatus.Status = v8;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v8;
}
