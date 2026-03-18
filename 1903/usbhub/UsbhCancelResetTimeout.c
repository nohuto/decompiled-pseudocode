/*
 * XREFs of UsbhCancelResetTimeout @ 0x1C00113C0
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C000A060 (UsbhCancelEnumeration.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000A370 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhReset1Complete @ 0x1C000FD00 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0049E24 (UsbhSoftDisconnectPdo.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0057300 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C0057B80 (UsbhReset1Debounce.c)
 *     UsbhReset1DropDevice @ 0x1C0057DF0 (UsbhReset1DropDevice.c)
 *     UsbhReset2CycleDevice @ 0x1C0058370 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C00583E0 (UsbhReset2DropDevice.c)
 * Callees:
 *     UsbhWait @ 0x1C0002048 (UsbhWait.c)
 *     UsbhCancelQueuedTimeout @ 0x1C000E460 (UsbhCancelQueuedTimeout.c)
 *     UsbhReferenceListRemove @ 0x1C000E930 (UsbhReferenceListRemove.c)
 *     UsbhWaitForResetTimeout @ 0x1C000F9DC (UsbhWaitForResetTimeout.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     UsbhDisablePort @ 0x1C0048A8C (UsbhDisablePort.c)
 */

void __fastcall UsbhCancelResetTimeout(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // r10
  char v8; // bp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rax
  KSPIN_LOCK *v13; // rdi
  KIRQL v14; // r15
  void *v15; // r10
  KIRQL v16; // al
  KIRQL v17; // al
  KIRQL v18; // r10

  v3 = *(_QWORD *)(a2 + 16);
  v5 = *(unsigned __int16 *)(a2 + 4);
  v8 = 1;
  v9 = v3;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( v3 )
    {
      v10 = *(_QWORD *)(v3 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1414685027;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a2;
        *(_QWORD *)(v11 + 24) = v5;
        v9 = *(_QWORD *)(a2 + 16);
      }
    }
  }
  if ( !v9 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v12 = *(_DWORD **)(v9 + 64);
  if ( !v12 )
    UsbhTrapFatal_Dbg(v9, 0LL);
  if ( *v12 != 541218120 )
    UsbhTrapFatal_Dbg(v9, *(_QWORD *)(v9 + 64));
  v13 = (KSPIN_LOCK *)(v12 + 1236);
  if ( KeCancelTimer((PKTIMER)(a2 + 552)) )
  {
    v14 = KeAcquireSpinLockRaiseToDpc(v13);
    Log(*(_QWORD *)(a2 + 16), 4, 1667322417, a2, _InterlockedExchange64((volatile __int64 *)(a2 + 680), 0LL));
    *(_DWORD *)(a2 + 696) = 0;
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    if ( !a3 )
      *(_DWORD *)(a2 + 696) = 0;
    Log(*(_QWORD *)(a2 + 16), 4, 1667323992, a2, *(unsigned __int16 *)(a2 + 4));
    KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
    if ( *(_DWORD *)(a2 + 696) == 1 )
    {
      *(_DWORD *)(a2 + 696) = 0;
      KeReleaseSpinLock(v13, v14);
      UsbhWait(a1, 50);
    }
    else
    {
      KeReleaseSpinLock(v13, v14);
    }
    if ( a3 == 1 )
      UsbhDisablePort(a1);
  }
  else
  {
    v8 = 0;
    v17 = KeAcquireSpinLockRaiseToDpc(v13);
    if ( *(_DWORD *)(a2 + 696) == 4 )
    {
      KeReleaseSpinLock(v13, v17);
      if ( !UsbhCancelQueuedTimeout(a1, a2) )
        UsbhWaitForResetTimeout(a1, a2);
    }
    else
    {
      Log(*(_QWORD *)(a2 + 16), 4, 1668768052, 0, *(unsigned __int16 *)(a2 + 4));
      KeReleaseSpinLock(v13, v18);
      UsbhWaitForResetTimeout(a1, a2);
      UsbhCancelQueuedTimeout(a1, a2);
    }
  }
  v16 = KeAcquireSpinLockRaiseToDpc(v13);
  KeReleaseSpinLock(v13, v16);
  if ( v8 )
    UsbhReferenceListRemove(*(_QWORD *)(a2 + 16), a2 + 552);
}
