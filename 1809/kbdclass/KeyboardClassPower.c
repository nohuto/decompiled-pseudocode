/*
 * XREFs of KeyboardClassPower @ 0x1C0001960
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001880 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqsd @ 0x1C0002440 (WPP_RECORDER_SF_qqsd.c)
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C0004864 (KeyboardClassCheckWaitWakeEnabled.c)
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C000E1C0 (KeyboardClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall KeyboardClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v4; // rsi
  char v5; // r13
  ULONG Options; // r15d
  __int64 LowPart; // rbx
  int v8; // r8d
  int v9; // r9d
  NTSTATUS v10; // r14d
  UCHAR MinorFunction; // al
  const char *v12; // rax
  int v13; // eax
  char v14; // bl
  struct _IO_STACK_LOCATION *v16; // rax
  struct _IO_STACK_LOCATION *v17; // rax
  int v18; // eax
  KIRQL v19; // al
  bool v20; // r14
  POWER_STATE v21; // r8d
  char v22; // al
  char v23; // r15
  KIRQL v24; // al
  char v25; // bl
  KIRQL v26; // al
  KIRQL v27; // al
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
          || ((v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72)), !*(_QWORD *)(v4 + 296))
           || *(_BYTE *)(v4 + 304)
            ? (v25 = 0)
            : (v25 = 1),
              KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v24),
              v10 = -1073741101,
              !v25) )
        {
          v10 = 0;
        }
        a2->IoStatus.Status = v10;
        v14 = 1;
        v22 = 0;
        goto LABEL_35;
      }
      goto LABEL_40;
    }
    WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 5u, 0x5Fu, RemlockSize);
    v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
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
        v23 = 1;
LABEL_54:
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v26);
        v22 = 0;
        v14 = v23;
LABEL_36:
        if ( v10 >= 0 )
        {
          if ( v23 )
            goto LABEL_21;
          if ( !v22 )
            goto LABEL_14;
          v10 = 259;
LABEL_15:
          if ( v14 )
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
          return (unsigned int)v10;
        }
LABEL_61:
        a2->IoStatus.Status = v10;
        PoStartNextPowerIrp(a2);
        IofCompleteRequest(a2, 0);
        goto LABEL_15;
      }
    }
    v23 = 0;
    v10 = -1073741436;
    goto LABEL_54;
  }
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
  if ( Options )
  {
    if ( Options == 1 )
    {
      a2->IoStatus.Status = 0;
      v13 = *(_DWORD *)(v4 + 188);
      if ( (int)LowPart > v13 )
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, (POWER_STATE)LowPart);
        *(_DWORD *)(v4 + 188) = LowPart;
LABEL_13:
        v14 = 1;
LABEL_14:
        PoStartNextPowerIrp(a2);
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        v10 = PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
        goto LABEL_15;
      }
      if ( (int)LowPart >= v13 )
        goto LABEL_13;
      goto LABEL_20;
    }
LABEL_40:
    v14 = 1;
    v22 = 0;
    goto LABEL_35;
  }
  v18 = *(_DWORD *)(v4 + 192);
  if ( (int)LowPart <= v18 )
  {
    if ( (int)LowPart >= v18 )
    {
      if ( (_DWORD)LowPart == 1 && *(int *)(v4 + 284) > 1 && *(int *)(v4 + 288) > 1 )
      {
        v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
        if ( !*(_QWORD *)(v4 + 296) || *(_BYTE *)(v4 + 304) )
          LOBYTE(LowPart) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v27);
        if ( !(_BYTE)LowPart && (unsigned __int8)KeyboardClassCheckWaitWakeEnabled(v4) )
          KeyboardClassCreateWaitWakeIrp((PVOID)v4);
      }
      a2->IoStatus.Status = 0;
      goto LABEL_13;
    }
    a2->IoStatus.Status = 0;
LABEL_20:
    v14 = 1;
LABEL_21:
    IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
    v16 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
    *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
    v16[-1].FileObject = v16->FileObject;
    v16[-1].Control = 0;
    v17 = a2->Tail.Overlay.CurrentStackLocation;
    v17[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)KeyboardClassPowerComplete;
    v17[-1].Context = 0LL;
    v17[-1].Control = -32;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
    v10 = 259;
    goto LABEL_15;
  }
  v10 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, File, 1u, 0x20u);
  if ( v10 < 0 )
  {
    v14 = 1;
    goto LABEL_61;
  }
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
  v20 = *(_QWORD *)(v4 + 296) && !*(_BYTE *)(v4 + 304);
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v19);
  if ( v20 && (int)LowPart < 5 )
    v21.SystemState = *(SYSTEM_POWER_STATE *)(v4 + 4 * LowPart + 264);
  else
    v21.SystemState = PowerSystemSleeping3;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v10 = PoRequestPowerIrp(
          *(PDEVICE_OBJECT *)v4,
          2u,
          v21,
          (PREQUEST_POWER_COMPLETE)KeyboardClassPoRequestComplete,
          a2,
          0LL);
  if ( v10 >= 0 )
  {
    v22 = 1;
    v14 = 1;
LABEL_35:
    v23 = 0;
    goto LABEL_36;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  PoStartNextPowerIrp(a2);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  return 259LL;
}
