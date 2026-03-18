/*
 * XREFs of UsbhBusReset_Action @ 0x1C000B3E0
 * Callers:
 *     Usbh_BS_BusSuspend @ 0x1C000B30C (Usbh_BS_BusSuspend.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhBusReset_Action(__int64 a1, int a2)
{
  unsigned __int16 i; // di
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rcx

  FdoExt(a1);
  Log(a1, 2048, 1919251262, 0, 0LL);
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v5 = *(_QWORD *)(a1 + 64);
    if ( !v5 )
LABEL_28:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v5 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v5);
    result = *(unsigned __int8 *)(v5 + 2938);
    if ( i > (unsigned __int16)result )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        63,
        (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
        i);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 959464784;
        *(_QWORD *)(v8 + 24) = i;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = 0LL;
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1413771367;
        *(_QWORD *)(v10 + 16) = i;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 24) = 0LL;
      }
    }
    if ( i )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( !v11 )
        goto LABEL_28;
      if ( *(_DWORD *)v11 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v11);
      if ( i <= *(unsigned __int8 *)(v11 + 2938) )
      {
        v12 = *(_QWORD *)(v11 + 3056);
        if ( v12 )
        {
          v13 = 2928LL * i + v12 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v14 = *(_QWORD *)(v11 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
            *(_DWORD *)v14 = 1044672615;
            *(_QWORD *)(v14 + 8) = 0LL;
            *(_QWORD *)(v14 + 16) = i;
            *(_QWORD *)(v14 + 24) = v13;
          }
          if ( v13 )
            UsbhDispatch_PortChangeQueueEventEx(a1, v13, 9, a2, 0LL, 0, 0LL, 0LL);
        }
      }
    }
  }
  return result;
}
