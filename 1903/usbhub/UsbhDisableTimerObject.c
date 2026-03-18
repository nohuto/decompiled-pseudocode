/*
 * XREFs of UsbhDisableTimerObject @ 0x1C000F740
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C0003E60 (UsbhSshSuspendHub.c)
 *     UsbhFdoSystemPowerState @ 0x1C0006010 (UsbhFdoSystemPowerState.c)
 *     UsbhSshEnterSx @ 0x1C0008B50 (UsbhSshEnterSx.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0011840 (UsbhSshSetPortsBusyState.c)
 *     UsbhHubStart @ 0x1C001F8E8 (UsbhHubStart.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0021190 (UsbhPdoPnp_StartDevice.c)
 *     UsbhInitCallbackWorker @ 0x1C0028C50 (UsbhInitCallbackWorker.c)
 *     Usbh_PIND_Disable_Action @ 0x1C00425B0 (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C0042714 (Usbh_PIND_SetAuto_Action.c)
 *     UsbhFreeTimerObject @ 0x1C004B7E4 (UsbhFreeTimerObject.c)
 *     UsbhAsyncStop @ 0x1C0051120 (UsbhAsyncStop.c)
 *     UsbhDeletePdo @ 0x1C005AD0C (UsbhDeletePdo.c)
 *     UsbhHubSSH_PnpStop @ 0x1C005D970 (UsbhHubSSH_PnpStop.c)
 *     UsbhSshDisabled @ 0x1C005DB2C (UsbhSshDisabled.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C0020C80 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDisableTimerObject(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  KIRQL v6; // al
  __int64 v7; // r9
  KIRQL v8; // r11
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _BYTE v16[40]; // [rsp+88h] [rbp-50h] BYREF

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( a2 )
  {
    memset(v16, 0, 0x24uLL);
    if ( dword_1C006F650 )
    {
      v5 = FdoExt(a1);
      UsbhEtwGetHubInfo(v5, v16);
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_DISABLE_TIMER, 0LL);
    }
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 3728));
    v7 = *(int *)(a2 + 4);
    v8 = v6;
    v9 = *(_DWORD *)(a2 + 4);
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 827618148;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a2;
        *(_QWORD *)(v11 + 24) = v7;
        v9 = *(_DWORD *)(a2 + 4);
      }
    }
    if ( v9 == 1 )
    {
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v12 = *(_QWORD *)(a1 + 64);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v12 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
          *(_DWORD *)v13 = 844395364;
          *(_QWORD *)(v13 + 8) = 0LL;
          *(_QWORD *)(v13 + 16) = a2;
          *(_QWORD *)(v13 + 24) = 1LL;
        }
      }
      v14 = *(_QWORD *)(a2 + 56);
      if ( *(_QWORD *)(v14 + 8) != a2 + 56 || (v15 = *(_QWORD **)(a2 + 64), *v15 != a2 + 56) )
        __fastfail(3u);
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
    }
    else
    {
      Log(a1, 0x2000, 1685279795, a2, v9);
    }
    *(_DWORD *)(a2 + 4) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 3728), v8);
  }
}
