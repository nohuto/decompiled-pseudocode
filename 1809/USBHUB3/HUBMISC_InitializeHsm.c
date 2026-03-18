/*
 * XREFs of HUBMISC_InitializeHsm @ 0x1C007220C
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C006A220 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBMISC_InitializeHsm(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // edi
  unsigned __int16 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  __int64 Timer; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD v14[8]; // [rsp+30h] [rbp-40h] BYREF

  *(_QWORD *)(a1 + 2224) = a1;
  memset(v14, 0, 0x38uLL);
  v2 = *(_QWORD *)(a1 + 16);
  LODWORD(v14[0]) = 56;
  v14[3] = 0x100000001LL;
  v14[4] = v2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v14,
         v3,
         a1 + 800);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 10;
LABEL_3:
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2520), 2u, 3u, v6, (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids, v4);
    return v5;
  }
  *(_QWORD *)(a1 + 816) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
                            WdfDriverGlobals,
                            *(_QWORD *)(a1 + 800));
  memset(v14, 0, 0x38uLL);
  v7 = *(_QWORD *)(a1 + 16);
  LODWORD(v14[0]) = 56;
  v14[3] = 0x100000001LL;
  v14[4] = v7;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 336))(WdfDriverGlobals);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v14,
         v8,
         a1 + 968);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 11;
    goto LABEL_3;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 2104));
  KeInitializeEvent((PRKEVENT)(a1 + 1152), NotificationEvent, 0);
  *(_DWORD *)(a1 + 2116) = 2000;
  *(_DWORD *)(a1 + 2144) = 0;
  if ( *(_BYTE *)(a1 + 240) )
  {
    v9 = *(_DWORD *)(a1 + 256);
    if ( v9 > 0 )
    {
      if ( v9 <= 2 )
      {
        *(_DWORD *)(a1 + 2216) = 1;
      }
      else if ( v9 == 3 )
      {
        *(_DWORD *)(a1 + 2216) = 2;
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 2216) = 4;
  }
  *(_DWORD *)(a1 + 2248) = 2000;
  *(_QWORD *)(a1 + 2240) = &HSMStateTable;
  *(_QWORD *)(a1 + 2296) = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 2264) = a1;
  Timer = ExAllocateTimer(HUBMISC_HubEventTimer, a1, 4LL);
  *(_QWORD *)(a1 + 2304) = Timer;
  if ( Timer )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 496))(*(_QWORD *)(a1 + 248), v11, 1LL);
    *(_QWORD *)(a1 + 2256) = v12;
    if ( !v12 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xDu, (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids);
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xCu, (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids);
  }
  return v5;
}
