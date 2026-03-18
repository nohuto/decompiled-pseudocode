/*
 * XREFs of UsbhFdoSetPowerDx_Action @ 0x1C00031F0
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x1C0006080 (UsbhFdoDevicePowerState.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     UsbhPdoArmedForWake @ 0x1C0002178 (UsbhPdoArmedForWake.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0002C00 (UsbhCompletePdoWakeIrp.c)
 *     UsbdHubDisarmBusForWake @ 0x1C0003198 (UsbdHubDisarmBusForWake.c)
 *     UsbhSyncBusPause @ 0x1C0003E08 (UsbhSyncBusPause.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005620 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C0007068 (UsbhArmHubWakeOnConnect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C00070B8 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0007110 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhArmHubForWakeDetect @ 0x1C000730C (UsbhArmHubForWakeDetect.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C001B060 (UsbhDispatch_BusEvent.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001BF30 (UsbhDispatch_HardResetEvent.c)
 *     UsbhRefPdo @ 0x1C001C4B0 (UsbhRefPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     UsbdHubArmBusForWake @ 0x1C004A004 (UsbdHubArmBusForWake.c)
 */

__int64 __fastcall UsbhFdoSetPowerDx_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  IRP *v3; // r13
  int v6; // r12d
  int v7; // ebp
  int v8; // r15d
  char v9; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v11; // r10
  unsigned int LowPart; // ecx
  unsigned int v13; // ecx
  unsigned __int16 j; // di
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  KIRQL v18; // bp
  void *v19; // rdx
  __int64 v20; // rcx
  unsigned __int8 *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // r9d
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v28; // rbp
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  int v32; // edi
  unsigned int v33; // r8d
  unsigned __int16 i; // r13
  __int64 v35; // rax
  __int64 v36; // rbx
  bool v37; // bl
  __int64 v38; // [rsp+40h] [rbp-48h]
  __int64 v39; // [rsp+48h] [rbp-40h]
  __int64 v40; // [rsp+98h] [rbp+10h]

  v3 = (IRP *)a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v38 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349731448, a2, (__int64)v3);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  v39 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = v3;
  Log((_DWORD)DeviceObject, 8, 1381192816, 0, 0LL);
  UsbhDispatch_HardResetEvent(DeviceObject, v11, 10LL);
  UsbhSyncBusPause(DeviceObject, v39, 3LL);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  *(_DWORD *)(a2 + 28) = LowPart;
  v13 = LowPart - 3;
  if ( !v13 )
  {
    *(_DWORD *)(v38 + 4216) = *(_DWORD *)(a2 + 88);
    Log((_DWORD)DeviceObject, 16, 1349280818, 0, (__int64)v3);
    v32 = v31 + 1;
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) )
    {
      if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == v32 )
      {
        v7 = v31 + 1;
      }
      else
      {
        v33 = *(&WPP_MAIN_CB.AlignmentRequirement + 1) - v32 - v32;
        if ( v33 && v33 == v32 )
          v7 = v32 & HIBYTE(*(_DWORD *)(v38 + 2560));
      }
    }
    for ( i = v31 + 1; i <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938); ++i )
    {
      v35 = UsbhLatchPdo((__int64)DeviceObject, i, a3, 0x46644432u);
      v40 = v35;
      v36 = v35;
      if ( v35 )
      {
        ++v8;
        if ( *(_BYTE *)(PdoExt(v35) + 2740) )
          v9 = v32;
        v37 = UsbhPdoArmedForWake(v36);
        UsbhUnlatchPdo(DeviceObject, v40, a3, 1180976178LL);
        if ( v37 )
        {
          v6 = v32;
          if ( !*(&WPP_MAIN_CB.AlignmentRequirement + 1) )
            v7 = v32;
        }
      }
    }
    if ( v9 && (((unsigned __int8)*(_DWORD *)(v38 + 2560) & (unsigned __int8)v32) != 0 || v8 == v32) || v7 )
    {
      UsbhArmHubWakeOnConnect(DeviceObject);
    }
    else
    {
      UsbhDisarmHubWakeOnConnect(DeviceObject);
      if ( !v6 )
      {
        UsbhDisarmHubForWakeDetect(DeviceObject);
        UsbdHubDisarmBusForWake((__int64)DeviceObject);
LABEL_57:
        v3 = (IRP *)a3;
        goto LABEL_25;
      }
    }
    UsbhArmHubForWakeDetect(DeviceObject);
    UsbdHubArmBusForWake(DeviceObject);
    goto LABEL_57;
  }
  if ( v13 == 1 )
  {
    *(_DWORD *)(v38 + 4216) = 0;
    Log((_DWORD)DeviceObject, 16, 1349280819, 0, (__int64)v3);
    UsbhDisarmHubWakeOnConnect(DeviceObject);
    UsbhDisarmHubForWakeDetect(DeviceObject);
    UsbdHubDisarmBusForWake((__int64)DeviceObject);
    for ( j = 1; ; ++j )
    {
      if ( !DeviceObject )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !DeviceExtension )
LABEL_32:
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
      if ( j > DeviceExtension[2938] )
        break;
      v16 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v17 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v17 = 1329877100;
        *(_QWORD *)(v17 + 16) = j;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 24) = 1180976179LL;
      }
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v19 = DeviceObject->DeviceExtension;
        if ( v19 )
        {
          v20 = *((_QWORD *)v19 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
          *(_DWORD *)v20 = 1413771367;
          *(_QWORD *)(v20 + 16) = j;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 24) = 0LL;
        }
      }
      if ( j )
      {
        v21 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v21 )
          goto LABEL_32;
        if ( *(_DWORD *)v21 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v21);
        if ( j <= v21[2938] )
        {
          v22 = *((_QWORD *)v21 + 382);
          if ( v22 )
          {
            v23 = 2928LL * j + v22 - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              v22 = *((_QWORD *)v21 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
              *(_DWORD *)v22 = 1044672615;
              *(_QWORD *)(v22 + 8) = 0LL;
              *(_QWORD *)(v22 + 16) = j;
              *(_QWORD *)(v22 + 24) = v23;
            }
            if ( v23 )
            {
              v16 = *(_QWORD *)(v23 + 392);
              if ( v16 )
                v16 = UsbhRefPdo(v22, v16, v3, 1180976179LL);
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v18);
      if ( v16 )
      {
        v28 = PdoExt(v16);
        if ( UsbhCompletePdoWakeIrp((__int64)DeviceObject, v16, -1073741436) )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_dq(
              WPP_GLOBAL_Control->DeviceExtension,
              v29,
              v30,
              29,
              (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
              *(_WORD *)(v28 + 1428),
              v16);
        }
        UsbhUnlatchPdo(DeviceObject, v16, v3, 1180976179LL);
      }
    }
  }
LABEL_25:
  FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 2048, 1112756286, 0, 0LL);
  v25 = UsbhDispatch_BusEvent(DeviceObject, v39, (unsigned int)(v24 + 6));
  Log((_DWORD)DeviceObject, 2048, 1112756284, 0, v25);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, v3, 4510LL);
  ++v3->CurrentLocation;
  ++v3->Tail.Overlay.CurrentStackLocation;
  v26 = PoCallDriver(*(PDEVICE_OBJECT *)(v38 + 1208), v3);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v38 + 1224), v3, 0x20u);
  return v26;
}
