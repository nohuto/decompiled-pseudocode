/*
 * XREFs of UsbhSyncPowerOnPorts @ 0x1C001A780
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     UsbhFinishStart @ 0x1C001D540 (UsbhFinishStart.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 *     UsbhRawWait @ 0x1C001ACD0 (UsbhRawWait.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhSyncPowerOnPorts(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int16 i; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r10d
  int v13; // edx
  int v14; // [rsp+20h] [rbp-88h]
  int v15; // [rsp+48h] [rbp-60h]
  int v16; // [rsp+5Ch] [rbp-4Ch] BYREF
  __int64 v17; // [rsp+60h] [rbp-48h] BYREF
  int v18[2]; // [rsp+68h] [rbp-40h] BYREF
  __int16 v19; // [rsp+70h] [rbp-38h]

  LODWORD(v2) = 0;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      21,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids);
  for ( i = 1; ; ++i )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v4 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v4);
    if ( i > *(unsigned __int8 *)(v4 + 2938) )
      break;
    v17 = 0LL;
    LOWORD(v18[1]) = 0;
    v19 = 0;
    v16 = 0;
    HIWORD(v18[1]) = i;
    v18[0] = 0;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v5 = *(_QWORD *)(v4 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
      *(_DWORD *)v5 = 812675184;
      *(_QWORD *)(v5 + 16) = i;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 24) = 0LL;
    }
    HIWORD(v17) = v18[1];
    LODWORD(v17) = 525091;
    LOBYTE(v19) = 3;
    WORD2(v17) = i;
    v2 = (int)UsbhSyncSendCommand(a1, (__int64)&v17, 0LL, &v18[1], v14, &v16);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        v8 = v16;
        *(_DWORD *)v7 = 829452400;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = v2;
        *(_QWORD *)(v7 + 24) = v8;
      }
    }
    if ( (unsigned int)v2 >> 30 == 3 && !Usb_Disconnected(v2) )
    {
      LOBYTE(v15) = 0;
      UsbhException(a1, i, 12, (int)v18, 10, v2, v13, usbfile_hub_c, 3524, v15);
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1349808752;
        *(_QWORD *)(v10 + 24) = i;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v2;
      }
    }
    if ( (unsigned int)v2 >> 30 == 3 )
      break;
  }
  if ( (int)v2 >= 0 )
  {
    Log(a1, 8, 2002872692, HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next), 0LL);
    UsbhRawWait(v11);
  }
  Log(a1, 8, 1934643031, (int)v2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
      v2);
  return (unsigned int)v2;
}
