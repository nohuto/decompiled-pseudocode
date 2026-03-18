/*
 * XREFs of HUBFDO_CompleteGetDescriptorRequest @ 0x1C000C16C
 * Callers:
 *     HUBSM_FindAndSetTargetState @ 0x1C0008F8C (HUBSM_FindAndSetTargetState.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x1C0027570 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C00276A4 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C006C858 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_CompleteGetDescriptorRequest(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5)
{
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+28h] [rbp-40h]
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF

  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1 + 2520),
    4u,
    3u,
    0x2Bu,
    (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
    a4);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v9 = (struct _MCGEN_TRACE_CONTEXT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015
                                                                                                + 2280))(
                                          WdfDriverGlobals,
                                          a3);
    v10 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(struct _MCGEN_TRACE_CONTEXT *, _BYTE *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
            v9,
            v14)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      LODWORD(v13) = a4;
      LODWORD(v12) = a2;
      McTemplateK0pqq(
        v9,
        &USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_COMPLETE,
        (const GUID *)((unsigned __int64)v14 & -(__int64)(v10 >= 0)),
        *(_QWORD *)(a1 + 248),
        v12,
        v13);
    }
  }
  if ( a4 >= 0 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
             WdfDriverGlobals,
             a3,
             (unsigned int)a4,
             a5 + 12LL);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a3,
             (unsigned int)a4);
}
