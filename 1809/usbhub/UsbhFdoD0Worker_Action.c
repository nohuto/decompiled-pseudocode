/*
 * XREFs of UsbhFdoD0Worker_Action @ 0x1C0004490
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseFdoPwrLock @ 0x1C0003840 (UsbhReleaseFdoPwrLock.c)
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C00047D0 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshExitSx @ 0x1C0004A80 (UsbhSshExitSx.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0004B5C (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhReleasePowerContext @ 0x1C0005774 (UsbhReleasePowerContext.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00063F0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhResumeHardReset @ 0x1C000649C (UsbhResumeHardReset.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0007110 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007460 (UsbhFdoSetD0Cold.c)
 *     UsbhCheckHubPowerStatus @ 0x1C0007F68 (UsbhCheckHubPowerStatus.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhSyncBusDisconnect @ 0x1C0042AB8 (UsbhSyncBusDisconnect.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 *     UsbhSetFdoPowerState @ 0x1C004A87C (UsbhSetFdoPowerState.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

void __fastcall UsbhFdoD0Worker_Action(struct _DEVICE_OBJECT *a1, __int64 a2, void *a3)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // rbx
  KIRQL v12; // al
  int v13; // ecx
  bool v14; // zf
  int v15; // ebx
  unsigned int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  KIRQL v20; // dl
  int v21; // r10d
  int v22; // r8d
  __int64 v23; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+48h] [rbp-30h]

  UsbhDisarmHubForWakeDetect(a1);
  if ( (*(_DWORD *)(FdoExt(a1) + 2560) & 4) != 0 )
  {
    v5 = FdoExt(a1);
    if ( *(_QWORD *)(v5 + 4448) )
      v6 = (*(__int64 (__fastcall **)(_QWORD))(v5 + 4448))(*(_QWORD *)(v5 + 4232));
    else
      v6 = -1073741822;
  }
  else
  {
    v6 = -1073741810;
  }
  v7 = FdoExt(a1);
  v8 = FdoExt(a1);
  v9 = v8 + 1384;
  *(_QWORD *)(v8 + 1408) = KeGetCurrentThread();
  Log((_DWORD)a1, 16, 1349731376, v8 + 1384, (int)v6);
  if ( !(unsigned __int8)Usb_Disconnected(v6) )
    v6 = UsbhCheckHubPowerStatus((_DWORD)a1);
  if ( (unsigned __int8)Usb_Disconnected(v6) )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_DISCONNECT_AFTER_SUSPEND, 0, v6);
    UsbhAcquireFdoPwrLock(a1, v9, 114LL, 846671972LL);
    UsbhSetFdoPowerState(a1, v6, 213LL);
    UsbhReleasePowerContext(a1, a3);
    UsbhReleaseFdoPwrLock((__int64)a1, v9);
    UsbhSyncBusDisconnect(a1, v9);
  }
  else
  {
    if ( (v10 & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_FAIL_AFTER_SUSPEND, 0, v6);
      v22 = *(_DWORD *)(v7 + 2560);
      *(_DWORD *)(v7 + 4216) = 2;
      if ( (v22 & 0x10) != 0 )
      {
        v22 &= ~0x10u;
        *(_DWORD *)(v7 + 2560) = v22;
      }
      LOBYTE(v24) = 0;
      UsbhException((int)a1, 0, (v22 & 1) + 45, 0, 0, v6, 0, usbfile_fdopwr_c, (v22 & 1) != 0 ? 4046 : 4051, v24);
      Log((_DWORD)a1, 16, 1346720304, 0, (int)v6);
    }
    v23 = *(int *)(v7 + 4216);
    if ( (v23 & 0xFFFFFFFD) != 0 )
    {
      Log((_DWORD)a1, 16, 1450668653, 0, v23);
      v6 = UsbhFdoSetD0Warm(a1);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v6) )
      {
        LOBYTE(v24) = 0;
        UsbhException((int)a1, 0, 43, 0, 0, v6, 0, usbfile_fdopwr_c, 4094, v24);
      }
    }
    else
    {
      Log((_DWORD)a1, 16, 1449356388, 0, v23);
      v6 = UsbhFdoSetD0Cold((_DWORD)a1);
      UsbhResumeHardReset(a1, v9);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v6) )
      {
        LOBYTE(v24) = 0;
        UsbhException((int)a1, 0, 44, 0, 0, v6, 0, usbfile_fdopwr_c, 4077, v24);
      }
    }
    Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
    v11 = FdoExt(a1);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 5056));
    v13 = *(_DWORD *)(v11 + 4172);
    *(_BYTE *)(v11 + 5064) = v12;
    *(_DWORD *)(v9 + 40) = v13;
    *(_DWORD *)(v9 + 44) = 114;
    *(_DWORD *)(v9 + 32) = 844055622;
    *(_DWORD *)(v9 + 36) = 829894756;
    *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
    v14 = *(_DWORD *)(v11 + 4172) == 210;
    *(_QWORD *)(v11 + 1344) = v9;
    if ( v14 )
    {
      v15 = *(_DWORD *)(FdoExt(a1) + 4212);
      v16 = *(_DWORD *)(FdoExt(a1) + 4212);
      if ( v15 == 1 )
      {
        v17 = FdoExt(a1);
        v18 = ((unsigned __int8)*(_DWORD *)(v17 + 828) + 1) & 7;
        *(_DWORD *)(v17 + 828) = v18;
        v18 *= 32LL;
        *(_DWORD *)(v18 + v17 + 284) = 130;
        *(_DWORD *)(v18 + v17 + 288) = *(_DWORD *)(v17 + 4172);
        *(_DWORD *)(v18 + v17 + 292) = 201;
        *(_DWORD *)(v18 + v17 + 296) = v16;
        *(_DWORD *)(v17 + 4172) = 201;
      }
      else
      {
        UsbhSetFdoPowerState(a1, v16, 206LL);
      }
    }
    UsbhReleasePowerContext(a1, a3);
    v19 = FdoExt(a1);
    FdoExt(*(_QWORD *)(v9 + 8));
    *(_DWORD *)(v9 + 32) = 1734964085;
    v20 = *(_BYTE *)(v19 + 5064);
    *(_QWORD *)(v19 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 5056), v20);
  }
  Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
  Log((_DWORD)a1, v21, 1934645093, v6, 0LL);
  *(_QWORD *)(v7 + 5096) = MEMORY[0xFFFFF78000000014];
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhSshExitSx(a1, v9);
  if ( (v6 & 0x80000000) == 0 )
    UsbhCompletePdoWakeIrps((_DWORD)a1);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), a3, 0x20u);
}
