/*
 * XREFs of UsbhDisableTimerObject @ 0x1C000F100
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C0003CD4 (UsbhSshSuspendHub.c)
 *     UsbhFdoSystemPowerState @ 0x1C0005B50 (UsbhFdoSystemPowerState.c)
 *     UsbhSshEnterSx @ 0x1C0008660 (UsbhSshEnterSx.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0010320 (UsbhSshSetPortsBusyState.c)
 *     UsbhHubStart @ 0x1C001EC28 (UsbhHubStart.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0020410 (UsbhPdoPnp_StartDevice.c)
 *     UsbhInitCallbackWorker @ 0x1C0027CD0 (UsbhInitCallbackWorker.c)
 *     Usbh_PIND_Disable_Action @ 0x1C0040F7C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C00410E0 (Usbh_PIND_SetAuto_Action.c)
 *     UsbhFreeTimerObject @ 0x1C0049E2C (UsbhFreeTimerObject.c)
 *     UsbhAsyncStop @ 0x1C004F3F0 (UsbhAsyncStop.c)
 *     UsbhDeletePdo @ 0x1C005898C (UsbhDeletePdo.c)
 *     UsbhHubSSH_PnpStop @ 0x1C005B570 (UsbhHubSSH_PnpStop.c)
 *     UsbhSshDisabled @ 0x1C005B71C (UsbhSshDisabled.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001FF30 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
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
    if ( dword_1C006E650 )
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
