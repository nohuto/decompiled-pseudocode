/*
 * XREFs of HUBMISC_CreateNewDSM @ 0x1C002D068
 * Callers:
 *     HUBPSM30_CreatingDeviceInConnectedWithResetInProgress @ 0x1C000FD30 (HUBPSM30_CreatingDeviceInConnectedWithResetInProgress.c)
 * Callees:
 *     McTemplateK0pq @ 0x1C0001864 (McTemplateK0pq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0012F14 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBMISC_CreateNewDSM(__int64 *a1)
{
  __int64 v2; // rdi
  NTSTATUS v3; // r13d
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // r12
  int v11; // eax
  unsigned __int16 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 Timer; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // [rsp+28h] [rbp-49h]
  __int64 v26; // [rsp+30h] [rbp-41h]
  _QWORD v27[5]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v28[7]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v29; // [rsp+E0h] [rbp+6Fh] BYREF

  memset(v27, 0, sizeof(v27));
  v29 = 0LL;
  v2 = 0LL;
  v3 = -1073741823;
  memset(v28, 0, sizeof(v28));
  v28[6] = off_1C0064018;
  LODWORD(v28[0]) = 56;
  v28[3] = 0x100000001LL;
  v28[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  LODWORD(v28[3]) = 2;
  v28[2] = HUBMISC_EvtDsmDestroy;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         v28,
         &v29);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(a1[179], 2u, 4u, 0x2Eu, (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids, v4);
    v29 = 0LL;
    goto LABEL_34;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v6,
    "DSM Create Tag",
    6707LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v29,
         off_1C0064018);
  memset((void *)v2, 0, 0xAA0uLL);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C0064130)
                  + 4) & 0x1000) != 0 )
    v3 = EtwActivityIdControl(3u, (LPGUID)(v2 + 1516));
  *(_QWORD *)(v2 + 8) = a1;
  v7 = *a1;
  *(_WORD *)(v2 + 2704) = 0;
  *(_QWORD *)v2 = v7;
  *(_DWORD *)(v2 + 2708) = 259;
  *(_DWORD *)(v2 + 2712) = 0x40000000;
  v8 = (struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a1 + 51);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1632), 0xFFFFFFDF);
  else
    _InterlockedOr((volatile signed __int32 *)(v2 + 1632), 0x20u);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x40) != 0 )
  {
    LODWORD(v25) = *((unsigned __int16 *)a1 + 100);
    McTemplateK0pq(
      v8,
      &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_START,
      (const GUID *)(v2 + 1516),
      *(_QWORD *)(*(_QWORD *)v2 + 248LL),
      v25);
  }
  memset(v28, 0, sizeof(v28));
  LODWORD(v28[0]) = 56;
  v28[3] = 0x100000001LL;
  v28[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(*a1 + 16));
  v10 = (_QWORD *)(v2 + 248);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          v28,
          v9,
          v2 + 248);
  v5 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_16:
      *v10 = 0LL;
      goto LABEL_34;
    }
    v12 = 47;
LABEL_15:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      2u,
      5u,
      v12,
      (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
      v11);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *v10,
    "DSM Tag",
    6767LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  *(_QWORD *)(v2 + 264) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *v10);
  memset(v28, 0, sizeof(v28));
  v28[3] = 0x100000001LL;
  LODWORD(v28[0]) = 56;
  v28[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(*a1 + 16));
  v10 = (_QWORD *)(v2 + 416);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          v28,
          v13,
          v2 + 416);
  v5 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v12 = 48;
    goto LABEL_15;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *v10,
    "DSM Tag",
    6803LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
  *(_QWORD *)(v2 + 424) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *v10);
  *(_WORD *)(v2 + 2040) = 1033;
  KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 1344));
  *(_DWORD *)(v2 + 1356) = 4000;
  *(_DWORD *)(v2 + 1384) = 0;
  *(_DWORD *)(v2 + 1456) = 0;
  *(_DWORD *)(v2 + 1488) = 4000;
  v14 = *(_QWORD *)v2;
  *(_QWORD *)(v2 + 1480) = &DSMStateTable;
  *(_QWORD *)(v2 + 1472) = HUBSM_AddDsmEvent;
  *(_QWORD *)(v2 + 1464) = v2;
  *(_QWORD *)(v2 + 1536) = *(_QWORD *)(v14 + 248);
  *(_QWORD *)(v2 + 1504) = v14;
  *(_QWORD *)(v2 + 2600) = v2 + 2608;
  *(_DWORD *)(v2 + 2592) = 256;
  Timer = ExAllocateTimer(HUBMISC_DsmEventTimer, v2, 4LL);
  *(_QWORD *)(v2 + 1544) = Timer;
  if ( Timer )
  {
    memset(v28, 0, sizeof(v28));
    LODWORD(v28[0]) = 56;
    v28[3] = 0x100000001LL;
    v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    LODWORD(v28[3]) = 2;
    v28[4] = v16;
    memset(v27, 0, sizeof(v27));
    LODWORD(v27[2]) = 0;
    LODWORD(v27[3]) = 0;
    v27[1] = HUBPDO_EvtOutOfBandwidthTimer;
    LODWORD(v27[0]) = 40;
    v10 = (_QWORD *)(v2 + 2416);
    BYTE4(v27[2]) = 1;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
            WdfDriverGlobals,
            v27,
            v28,
            v2 + 2416);
    v5 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      v12 = 50;
      goto LABEL_15;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      *v10,
      "DSM Tag",
      6898LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    KeInitializeEvent((PRKEVENT)(v2 + 1584), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v2 + 1608), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v2 + 472), NotificationEvent, 0);
    v17 = *(_QWORD *)v2;
    v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)v2 + 16LL));
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v17 + 496))(*(_QWORD *)(v17 + 248), v18, 1LL);
    *(_QWORD *)(v2 + 1496) = v19;
    if ( !v19 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
          2u,
          5u,
          0x33u,
          (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids);
      v5 = -1073741670;
      goto LABEL_35;
    }
    memset(v28, 0, sizeof(v28));
    LODWORD(v28[0]) = 56;
    v28[3] = 0x100000001LL;
    v28[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
               WdfDriverGlobals,
               a1);
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, __int64, __int64, _QWORD))(WdfFunctions_01015 + 1536))(
            WdfDriverGlobals,
            v28,
            (unsigned int)ExDefaultNonPagedPoolType,
            1681082453LL,
            96LL,
            v2 + 432,
            0LL);
    v5 = v20;
    if ( v20 >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                               + 1640))(
        WdfDriverGlobals,
        *(_QWORD *)(v2 + 432),
        "DSM Tag",
        6956LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
      KeInitializeSpinLock((PKSPIN_LOCK)(v2 + 40));
      a1[166] = v2;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v26) = v20;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
        2u,
        5u,
        0x34u,
        (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
        v26);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      2u,
      3u,
      0x31u,
      (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids);
  }
LABEL_34:
  if ( v5 < 0 )
  {
LABEL_35:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v26) = v5;
      WPP_RECORDER_SF_d(a1[179], 2u, 4u, 0x35u, (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids, v26);
    }
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
    {
      LODWORD(v25) = v5;
      McTemplateK0pq(
        (struct _MCGEN_TRACE_CONTEXT *)(v2 + 1516),
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_FAILED,
        (const GUID *)((v2 + 1516) & -(__int64)(v2 != 0)),
        *(_QWORD *)(*a1 + 248),
        v25);
    }
    v21 = 3009;
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 248) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                 + 1648))(
          WdfDriverGlobals,
          *(_QWORD *)(v2 + 248),
          "DSM Tag",
          7140LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
        *(_QWORD *)(v2 + 248) = 0LL;
      }
      v22 = *(_QWORD *)(v2 + 416);
      if ( v22 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                 + 1648))(
          WdfDriverGlobals,
          *(_QWORD *)(v2 + 416),
          "DSM Tag",
          7140LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
        *(_QWORD *)(v2 + 416) = 0LL;
      }
      v23 = *(_QWORD *)(v2 + 1544);
      if ( v23 )
      {
        LOBYTE(v22) = 1;
        ExDeleteTimer(v23, v22, 0LL, 0LL);
        *(_QWORD *)(v2 + 1544) = 0LL;
      }
      if ( *(_QWORD *)(v2 + 2416) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                 + 1648))(
          WdfDriverGlobals,
          *(_QWORD *)(v2 + 2416),
          "DSM Tag",
          7140LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
        *(_QWORD *)(v2 + 2416) = 0LL;
      }
      if ( *(_QWORD *)(v2 + 432) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                 + 1648))(
          WdfDriverGlobals,
          *(_QWORD *)(v2 + 432),
          "DSM Tag",
          7140LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
        *(_QWORD *)(v2 + 432) = 0LL;
      }
      if ( *(_QWORD *)(v2 + 1496) )
      {
        (*(void (**)(void))(*(_QWORD *)v2 + 504LL))();
        *(_QWORD *)(v2 + 1496) = 0LL;
      }
      if ( v29 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    }
    return v21;
  }
  if ( v3 >= 0 )
  {
    if ( g_IoSetActivityIdIrp )
      g_IoSetActivityIdIrp(*(_QWORD *)(v2 + 264), v2 + 1516);
    if ( g_IoSetActivityIdIrp )
      g_IoSetActivityIdIrp(*(_QWORD *)(v2 + 424), v2 + 1516);
    _InterlockedOr((volatile signed __int32 *)(v2 + 1636), 0x40u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 1432LL),
      4u,
      4u,
      0x36u,
      (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
      a1,
      v2);
  return 3013;
}
