/*
 * XREFs of HUBMUX_CreatePSM @ 0x1C000E098
 * Callers:
 *     HUBMUX_CreateChildPSMs @ 0x1C000E61C (HUBMUX_CreateChildPSMs.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C000DEF8 (WPP_RECORDER_SF_qqd.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBMUX_CreatePSM(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  int v7; // esi
  __int64 v8; // rax
  int v9; // eax
  int v10; // r9d
  __int64 *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  unsigned __int16 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 Timer; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v24[7]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v25[5]; // [rsp+80h] [rbp-29h] BYREF
  _QWORD v26[6]; // [rsp+A8h] [rbp-1h] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  v24[6] = off_1C0064258;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v24[5] = 0LL;
  v24[4] = v5;
  v24[1] = HUBMISC_EvtPsmCleanup;
  v24[2] = HUBMISC_EvtPsmDestroy;
  v24[0] = 56LL;
  v24[3] = 0x100000002LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         v24,
         &v23);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        4u,
        0xAu,
        (__int64)&WPP_0df060cec95237a3bf2334f6cc1dce5a_Traceguids,
        v6);
    v23 = 0LL;
    goto LABEL_22;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    v8,
    "PSM Tag",
    141LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v23,
         off_1C0064258);
  memset((void *)(v4 + 8), 0, 0x5B0uLL);
  *(_QWORD *)v4 = a1;
  *(_OWORD *)(v4 + 200) = *(_OWORD *)a2;
  *(_OWORD *)(v4 + 216) = *((_OWORD *)a2 + 1);
  *(_QWORD *)(v4 + 232) = *((_QWORD *)a2 + 4);
  v9 = *a2;
  v10 = *(_DWORD *)(a1 + 96);
  v26[0] = 48LL;
  LOBYTE(v26[4]) = 0;
  HIDWORD(v26[3]) = 16;
  v26[2] = v4;
  LOBYTE(v26[3]) = 1;
  v26[1] = 0x20000000400LL;
  RtlStringCchPrintfA((NTSTRSAFE_PSTR)&v26[4], 0x10uLL, "hub%d port%d", v10, v9);
  v11 = (__int64 *)(v4 + 1432);
  if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v26, v4 + 1432) < 0 )
    *v11 = *(_QWORD *)(a1 + 2520);
  memset(v24, 0, sizeof(v24));
  v12 = *(_QWORD *)(a1 + 16);
  v24[4] = v23;
  LODWORD(v24[0]) = 56;
  v24[3] = 0x100000001LL;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v12);
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          v24,
          v13,
          v4 + 16);
  v7 = v14;
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_22;
    v15 = 11;
    goto LABEL_10;
  }
  *(_QWORD *)(v4 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                           WdfDriverGlobals,
                           *(_QWORD *)(v4 + 16));
  KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 1112));
  v16 = *(_QWORD *)v4;
  *(_DWORD *)(v4 + 1152) = 0;
  *(_DWORD *)(v4 + 1224) = 0;
  *(_QWORD *)(v4 + 1232) = v4;
  *(_QWORD *)(v4 + 1240) = HUBSM_AddPsm20Event;
  v17 = *(_QWORD *)(v16 + 248);
  *(_QWORD *)(v4 + 1272) = v16;
  *(_QWORD *)(v4 + 1304) = v17;
  Timer = ExAllocateTimer(HUBMISC_PsmEventTimer, v4, 4LL);
  *(_QWORD *)(v4 + 1312) = Timer;
  if ( Timer )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x80000) != 0 )
    {
      memset(v24, 0, sizeof(v24));
      LODWORD(v25[2]) = 0;
      LODWORD(v25[3]) = 0;
      v24[4] = v23;
      v24[3] = 0x100000001LL;
      v25[1] = HUBMISC_PsmResetCompletePollingTimer;
      BYTE4(v25[2]) = 1;
      LODWORD(v24[0]) = 56;
      LODWORD(v25[0]) = 40;
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
              WdfDriverGlobals,
              v25,
              v24,
              v4 + 240);
      v7 = v14;
      if ( v14 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_22;
        v15 = 13;
LABEL_10:
        WPP_RECORDER_SF_d(*v11, 2u, 4u, v15, (__int64)&WPP_0df060cec95237a3bf2334f6cc1dce5a_Traceguids, v14);
        goto LABEL_22;
      }
    }
    v19 = *(_QWORD *)v4;
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(*(_QWORD *)v4 + 16LL));
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v19 + 496))(*(_QWORD *)(v19 + 248), v20, 1LL);
    *(_QWORD *)(v4 + 1264) = v21;
    if ( !v21 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(*v11, 2u, 4u, 0xEu, (__int64)&WPP_0df060cec95237a3bf2334f6cc1dce5a_Traceguids);
      v7 = -1073741670;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xCu, (__int64)&WPP_0df060cec95237a3bf2334f6cc1dce5a_Traceguids);
  }
LABEL_22:
  if ( v7 >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqd(
        *(_QWORD *)(a1 + 2520),
        4u,
        3u,
        0xFu,
        (__int64)&WPP_0df060cec95237a3bf2334f6cc1dce5a_Traceguids,
        a1,
        v4,
        *a2);
  }
  else if ( v23 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return 0LL;
  }
  return v23;
}
