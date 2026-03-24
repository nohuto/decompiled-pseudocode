/*
 * XREFs of KeyboardStart @ 0x1C00029E0
 * Callers:
 *     KeyboardPnP @ 0x1C0001ED0 (KeyboardPnP.c)
 *     KeyboardStartWorker @ 0x1C0002950 (KeyboardStartWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C10 (__security_check_cookie.c)
 *     memset @ 0x1C0003080 (memset.c)
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C0004864 (KeyboardClassCheckWaitWakeEnabled.c)
 *     KbdEnableDisablePort @ 0x1C000C400 (KbdEnableDisablePort.c)
 *     KeyboardSendIrpSynchronously @ 0x1C000D230 (KeyboardSendIrpSynchronously.c)
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C000E1C0 (KeyboardClassCreateWaitWakeIrp.c)
 *     KeyboardClassGetWaitWakeEnableState @ 0x1C000E37C (KeyboardClassGetWaitWakeEnableState.c)
 */

__int64 __fastcall KeyboardStart(__int64 a1, __int64 a2)
{
  IRP *v2; // r14
  int *v3; // rbx
  int Status; // edi
  ULONG_PTR Information; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v7; // r15d
  struct _DEVICE_OBJECT *v8; // rcx
  char v10; // di
  char *v11; // rsi
  struct _IO_STACK_LOCATION *v12; // rcx
  ULONG_PTR v13; // rbp
  struct _IRP *MasterIrp; // rdi
  NTSTATUS v15; // esi
  KIRQL v16; // al
  bool v17; // di
  _OWORD v18[4]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(IRP **)(a2 + 8);
  v3 = *(int **)(a1 + 64);
  Status = v2->IoStatus.Status;
  if ( Status < 0 )
    return (unsigned int)Status;
  Information = v2->IoStatus.Information;
  v2->IoStatus.Status = -1073741637;
  v2->IoStatus.Information = 0LL;
  memset(v18, 0, sizeof(v18));
  LODWORD(v18[0]) = 65600;
  *((_QWORD *)&v18[0] + 1) = -1LL;
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 9;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v18;
  if ( (int)KeyboardSendIrpSynchronously(*((PDEVICE_OBJECT *)v3 + 2), v2) >= 0 && v2->IoStatus.Status >= 0 )
  {
    v3[71] = v18[3];
    v3[72] = HIDWORD(v18[2]);
    *(_OWORD *)(v3 + 66) = v18[1];
    v3[70] = v18[2];
  }
  v2->IoStatus.Status = Status;
  v7 = 0;
  v2->IoStatus.Information = Information;
  *((_BYTE *)v3 + 65) = 1;
  if ( v3[71] <= 1 || v3[72] <= 1 )
  {
    v3[50] = 1;
  }
  else
  {
    v3[50] = 2;
    KeyboardClassGetWaitWakeEnableState(v3);
  }
  v8 = *(struct _DEVICE_OBJECT **)v3;
  *((_QWORD *)v3 + 26) = &KeyboardClassWmiGuidList;
  *((_QWORD *)v3 + 31) = 0LL;
  *((_QWORD *)v3 + 27) = KeyboardClassQueryWmiRegInfo;
  *((_QWORD *)v3 + 28) = KeyboardClassQueryWmiDataBlock;
  *((_QWORD *)v3 + 29) = KeyboardClassSetWmiDataBlock;
  *((_QWORD *)v3 + 30) = KeyboardClassSetWmiDataItem;
  *((_QWORD *)v3 + 32) = 0LL;
  IoWMIRegistrationControl(v8, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    if ( SHIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= 0 )
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    }
    else
    {
      v10 = *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[49] + 16);
      v11 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * (unsigned int)v3[49];
      v11[16] = 1;
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v10 )
      {
        v7 = KbdEnableDisablePort(1LL, v2, v3, v11);
        if ( v7 >= 0 )
        {
          v12 = v2->Tail.Overlay.CurrentStackLocation;
          v12[-1].MajorFunction = 15;
          v12[-1].Parameters.Read.ByteOffset.LowPart = 720904;
          v12[-1].FileObject = *(PFILE_OBJECT *)v11;
          v12[-1].Parameters.Read.Length = 0;
          v12[-1].Parameters.Create.Options = 4;
          v13 = v2->IoStatus.Information;
          MasterIrp = v2->AssociatedIrp.MasterIrp;
          v15 = v2->IoStatus.Status;
          v2->IoStatus.Information = 0LL;
          v2->AssociatedIrp.MasterIrp = (struct _IRP *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 156LL);
          KeyboardSendIrpSynchronously(*((PDEVICE_OBJECT *)v3 + 2), v2);
          v7 = 0;
          v2->IoStatus.Status = v15;
          v2->IoStatus.Information = v13;
          v2->AssociatedIrp.MasterIrp = MasterIrp;
        }
        else
        {
          v11[16] = 0;
        }
      }
    }
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v7 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 22), 1u);
  }
  if ( v3[71] > 1 && v3[72] > 1 )
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3 + 9);
    v17 = *((_QWORD *)v3 + 37) && !*((_BYTE *)v3 + 304);
    KeReleaseSpinLock((PKSPIN_LOCK)v3 + 9, v16);
    if ( !v17 )
    {
      if ( (unsigned __int8)KeyboardClassCheckWaitWakeEnabled(v3) )
        KeyboardClassCreateWaitWakeIrp(v3);
    }
  }
  return (unsigned int)v7;
}
