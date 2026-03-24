/*
 * XREFs of KeyboardClassPower @ 0x1C0001880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00017A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqsd @ 0x1C0002490 (WPP_RECORDER_SF_qqsd.c)
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C0004CCC (KeyboardClassCheckWaitWakeEnabled.c)
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C000F410 (KeyboardClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall KeyboardClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v4; // rsi
  char v5; // r13
  ULONG Options; // r14d
  __int64 LowPart; // rbx
  int v8; // r8d
  int v9; // r9d
  NTSTATUS v10; // r15d
  UCHAR MinorFunction; // al
  const char *v12; // rax
  char v13; // bl
  struct _IO_STACK_LOCATION *v14; // rax
  struct _IO_STACK_LOCATION *v15; // rax
  KIRQL v17; // al
  bool v18; // r14
  POWER_STATE v19; // r8d
  char v20; // al
  char v21; // r14
  KIRQL v22; // al
  char v23; // bl
  KIRQL v24; // al
  KIRQL v25; // al
  __int64 RemlockSize; // [rsp+20h] [rbp-58h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1;
  Options = CurrentStackLocation->Parameters.Create.Options;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels || !*(_BYTE *)(v4 + 64) )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = -1073741637;
    IofCompleteRequest(a2, 0);
    return 3221225659LL;
  }
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v10 < 0 )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = v10;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v10;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction != 2 )
  {
    if ( MinorFunction )
    {
      if ( MinorFunction == 3 )
      {
        if ( (int)LowPart >= 5
          || (int)LowPart <= *(_DWORD *)(v4 + 288)
          || ((v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72)), !*(_QWORD *)(v4 + 296))
           || *(_BYTE *)(v4 + 304)
            ? (v23 = 0)
            : (v23 = 1),
              KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v22),
              v10 = -1073741101,
              !v23) )
        {
          v10 = 0;
        }
        a2->IoStatus.Status = v10;
        v13 = 1;
        v20 = 0;
        goto LABEL_34;
      }
      goto LABEL_41;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 5u, 0x61u, RemlockSize);
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
    if ( *(_QWORD *)(v4 + 296) )
    {
      *(_QWORD *)(v4 + 312) = a2;
    }
    else
    {
      *(_QWORD *)(v4 + 296) = a2;
      *(_BYTE *)(v4 + 304) = 0;
      if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(v4 + 320), 0) - 1) > 1 )
      {
        v10 = 0;
        v21 = 1;
LABEL_57:
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v24);
        v20 = 0;
        v13 = v21;
LABEL_35:
        if ( v10 >= 0 )
        {
          if ( v21 )
            goto LABEL_14;
          if ( !v20 )
            goto LABEL_17;
          v10 = 259;
LABEL_18:
          if ( v13 )
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
          return (unsigned int)v10;
        }
LABEL_64:
        a2->IoStatus.Status = v10;
        PoStartNextPowerIrp(a2);
        IofCompleteRequest(a2, 0);
        goto LABEL_18;
      }
    }
    v21 = 0;
    v10 = -1073741436;
    goto LABEL_57;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = "S";
    if ( Options )
      v12 = "D";
    WPP_RECORDER_SF_qqsd(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)"D",
      v8,
      v9,
      RemlockSize,
      v5,
      (char)a2,
      (__int64)v12,
      LowPart - 1);
  }
  if ( Options )
  {
    if ( Options == 1 )
    {
      a2->IoStatus.Status = 0;
      if ( *(_DWORD *)(v4 + 188) < (int)LowPart )
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, (POWER_STATE)LowPart);
        *(_DWORD *)(v4 + 188) = LowPart;
      }
      else if ( *(_DWORD *)(v4 + 188) > (int)LowPart )
      {
LABEL_13:
        v13 = 1;
LABEL_14:
        IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
        v14 = a2->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
        *(_OWORD *)&v14[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v14->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v14[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v14->Parameters.SetQuota + 6);
        v14[-1].FileObject = v14->FileObject;
        v14[-1].Control = 0;
        v15 = a2->Tail.Overlay.CurrentStackLocation;
        v15[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)KeyboardClassPowerComplete;
        v15[-1].Context = 0LL;
        v15[-1].Control = -32;
        a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
        v10 = 259;
        goto LABEL_18;
      }
LABEL_16:
      v13 = 1;
LABEL_17:
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v10 = PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
      goto LABEL_18;
    }
LABEL_41:
    v13 = 1;
    v20 = 0;
    goto LABEL_34;
  }
  if ( *(_DWORD *)(v4 + 192) >= (int)LowPart )
  {
    if ( *(_DWORD *)(v4 + 192) > (int)LowPart )
    {
      a2->IoStatus.Status = 0;
      goto LABEL_13;
    }
    if ( (_DWORD)LowPart == 1 && *(int *)(v4 + 284) > 1 && *(int *)(v4 + 288) > 1 )
    {
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
      if ( !*(_QWORD *)(v4 + 296) || *(_BYTE *)(v4 + 304) )
        LOBYTE(LowPart) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v25);
      if ( !(_BYTE)LowPart && (unsigned __int8)KeyboardClassCheckWaitWakeEnabled(v4) )
        KeyboardClassCreateWaitWakeIrp((PVOID)v4);
    }
    a2->IoStatus.Status = 0;
    goto LABEL_16;
  }
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v10 < 0 )
  {
    v13 = 1;
    goto LABEL_64;
  }
  v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
  v18 = *(_QWORD *)(v4 + 296) && !*(_BYTE *)(v4 + 304);
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v17);
  if ( v18 && (int)LowPart < 5 )
    v19.SystemState = *(SYSTEM_POWER_STATE *)(v4 + 4 * LowPart + 264);
  else
    v19.SystemState = PowerSystemSleeping3;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v10 = PoRequestPowerIrp(
          *(PDEVICE_OBJECT *)v4,
          2u,
          v19,
          (PREQUEST_POWER_COMPLETE)KeyboardClassPoRequestComplete,
          a2,
          0LL);
  if ( v10 >= 0 )
  {
    v20 = 1;
    v13 = 1;
LABEL_34:
    v21 = 0;
    goto LABEL_35;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  PoStartNextPowerIrp(a2);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  return 259LL;
}
