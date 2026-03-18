/*
 * XREFs of UsbhFdoD0Worker_Action @ 0x1C00047C0
 * Callers:
 *     <none>
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0004B20 (UsbhCompletePdoWakeIrps.c)
 *     UsbhSshExitSx @ 0x1C0004DD0 (UsbhSshExitSx.c)
 *     UsbhFdoUnblockAllPendedPdoD0Irps @ 0x1C0004EAC (UsbhFdoUnblockAllPendedPdoD0Irps.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C000562C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C00056A8 (UsbhSetFdoPowerState.c)
 *     UsbhReleasePowerContext @ 0x1C0005C34 (UsbhReleasePowerContext.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0006908 (UsbhAcquireFdoPwrLock.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0007630 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     UsbhCheckHubPowerStatus @ 0x1C000848C (UsbhCheckHubPowerStatus.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001CA20 (UsbhDispatch_HardResetEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     UsbhSyncBusDisconnect @ 0x1C004412C (UsbhSyncBusDisconnect.c)
 *     UsbhFdoSetD0Warm @ 0x1C004BCBC (UsbhFdoSetD0Warm.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

void __fastcall UsbhFdoD0Worker_Action(struct _DEVICE_OBJECT *a1, __int64 a2, void *a3)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // ecx
  int v11; // r9d
  __int64 v12; // rbx
  KIRQL v13; // al
  int v14; // ecx
  bool v15; // zf
  int v16; // ebx
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  KIRQL v21; // dl
  int v22; // r10d
  int v23; // r8d
  __int64 v24; // [rsp+20h] [rbp-58h]
  int v25; // [rsp+48h] [rbp-30h]

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
    UsbhReleaseFdoPwrLock(a1, v9);
    UsbhSyncBusDisconnect(a1, v9);
  }
  else
  {
    if ( (v10 & 0xC0000000) == 0xC0000000 )
    {
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_D0_WORKER_HUB_FAIL_AFTER_SUSPEND, 0, v6);
      v23 = *(_DWORD *)(v7 + 2560);
      *(_DWORD *)(v7 + 4216) = 2;
      if ( (v23 & 0x10) != 0 )
      {
        v23 &= ~0x10u;
        *(_DWORD *)(v7 + 2560) = v23;
      }
      LOBYTE(v25) = 0;
      UsbhException((int)a1, 0, (v23 & 1) + 45, 0, 0, v6, 0, usbfile_fdopwr_c, (v23 & 1) != 0 ? 4046 : 4051, v25);
      Log((_DWORD)a1, 16, 1346720304, 0, (int)v6);
    }
    v24 = *(int *)(v7 + 4216);
    if ( (v24 & 0xFFFFFFFD) != 0 )
    {
      Log((_DWORD)a1, 16, 1450668653, 0, v24);
      v6 = UsbhFdoSetD0Warm(a1);
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v6) )
      {
        LOBYTE(v25) = 0;
        UsbhException((int)a1, 0, 43, 0, 0, v6, 0, usbfile_fdopwr_c, 4094, v25);
      }
    }
    else
    {
      Log((_DWORD)a1, 16, 1449356388, 0, v24);
      v6 = UsbhFdoSetD0Cold((_DWORD)a1);
      Log((_DWORD)a1, 8, 1381192818, 0, 0LL);
      UsbhDispatch_HardResetEvent(a1, v9, (unsigned int)(v11 + 11));
      if ( (v6 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v6) )
      {
        LOBYTE(v25) = 0;
        UsbhException((int)a1, 0, 44, 0, 0, v6, 0, usbfile_fdopwr_c, 4077, v25);
      }
    }
    Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
    v12 = FdoExt(a1);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 5056));
    v14 = *(_DWORD *)(v12 + 4172);
    *(_BYTE *)(v12 + 5064) = v13;
    *(_DWORD *)(v9 + 40) = v14;
    *(_DWORD *)(v9 + 44) = 114;
    *(_DWORD *)(v9 + 32) = 844055622;
    *(_DWORD *)(v9 + 36) = 829894756;
    *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
    v15 = *(_DWORD *)(v12 + 4172) == 210;
    *(_QWORD *)(v12 + 1344) = v9;
    if ( v15 )
    {
      v16 = *(_DWORD *)(FdoExt(a1) + 4212);
      v17 = *(_DWORD *)(FdoExt(a1) + 4212);
      if ( v16 == 1 )
      {
        v18 = FdoExt(a1);
        v19 = ((unsigned __int8)*(_DWORD *)(v18 + 828) + 1) & 7;
        *(_DWORD *)(v18 + 828) = v19;
        v19 *= 32LL;
        *(_DWORD *)(v19 + v18 + 284) = 130;
        *(_DWORD *)(v19 + v18 + 288) = *(_DWORD *)(v18 + 4172);
        *(_DWORD *)(v19 + v18 + 292) = 201;
        *(_DWORD *)(v19 + v18 + 296) = v17;
        *(_DWORD *)(v18 + 4172) = 201;
      }
      else
      {
        UsbhSetFdoPowerState(a1, v17, 206LL);
      }
    }
    UsbhReleasePowerContext(a1, a3);
    v20 = FdoExt(a1);
    FdoExt(*(_QWORD *)(v9 + 8));
    *(_DWORD *)(v9 + 32) = 1734964085;
    v21 = *(_BYTE *)(v20 + 5064);
    *(_QWORD *)(v20 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v20 + 5056), v21);
  }
  Log((_DWORD)a1, 16, 1668301872, 0, 0LL);
  Log((_DWORD)a1, v22, 1934645093, v6, 0LL);
  *(_QWORD *)(v7 + 5096) = MEMORY[0xFFFFF78000000014];
  UsbhFdoUnblockAllPendedPdoD0Irps(a1);
  UsbhSshExitSx(a1, v9);
  if ( (v6 & 0x80000000) == 0 )
    UsbhCompletePdoWakeIrps((_DWORD)a1);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), a3, 0x20u);
}
