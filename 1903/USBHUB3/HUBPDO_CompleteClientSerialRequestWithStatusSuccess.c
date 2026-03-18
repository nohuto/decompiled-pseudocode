/*
 * XREFs of HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x1C00136F4
 * Callers:
 *     HUBDSM_CompletingClientRequestInConfiguredWithSpecialFile @ 0x1C001BD90 (HUBDSM_CompletingClientRequestInConfiguredWithSpecialFile.c)
 *     HUBDSM_CompletingClientUnconfigureRequest @ 0x1C001BDF0 (HUBDSM_CompletingClientUnconfigureRequest.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C000B370 (McTemplateK0pqq.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBPDO_CompleteClientSerialRequestWithStatusSuccess(__int64 a1)
{
  __int64 v2; // rdx
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  _DWORD *v4; // rdx
  __int64 v5; // rdi
  __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  _QWORD v13[5]; // [rsp+30h] [rbp-48h] BYREF

  memset(v13, 0, sizeof(v13));
  v2 = *(_QWORD *)(a1 + 456);
  LOWORD(v13[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v13);
  v4 = (_DWORD *)v13[1];
  if ( LODWORD(v13[3]) == 2228227 )
  {
    v5 = v13[1];
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      McTemplateK0pqq(
        (struct _MCGEN_TRACE_CONTEXT *)*(unsigned __int16 *)(v13[1] + 2LL),
        &USBHUB3_ETW_EVENT_DEVICE_URB_COMPLETE,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24),
        *(unsigned __int16 *)(v13[1] + 2LL),
        *(_DWORD *)(v13[1] + 4LL));
      v4 = (_DWORD *)v13[1];
    }
    v6 = *(_WORD *)(v5 + 2);
    if ( !v6 && *(_QWORD *)(v5 + 24) || v6 == 1 || v6 == 59 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x10u);
      v4 = (_DWORD *)v13[1];
    }
  }
  if ( LODWORD(v13[3]) == 2232243 )
  {
    *v4 = 0;
    v7 = *(_QWORD *)(a1 + 16);
    v3 = (struct _MCGEN_TRACE_CONTEXT *)v13[1];
    if ( (*(_DWORD *)(v7 + 32) & 0x100) != 0 )
    {
      *(_DWORD *)v13[1] |= 2u;
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 32LL), 0xFFFFFEFF);
      v7 = *(_QWORD *)(a1 + 16);
    }
    if ( (*(_DWORD *)(v7 + 32) & 0x80u) != 0 )
    {
      LODWORD(v3->RegistrationHandle) |= 1u;
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 32LL), 0xFFFFFF7F);
    }
  }
  v8 = *(_QWORD *)(a1 + 456);
  v9 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(v9 + 1424) = 1;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    LODWORD(v12) = 0;
    LODWORD(v11) = v13[3];
    McTemplateK0pqq(
      v3,
      &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_COMPLETE,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(a1 + 24),
      v11,
      v12);
  }
  if ( (*(_DWORD *)(a1 + 1636) & 0x40) != 0 )
  {
    *(_QWORD *)(a1 + 1516) = 0LL;
    *(_QWORD *)(a1 + 1524) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v8,
           0LL);
}
