/*
 * XREFs of Controller_PopulateDeviceFlagsFromKse @ 0x1C000F620
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C0060B8C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_diS @ 0x1C0002BF8 (WPP_RECORDER_SF_diS.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     RtlStringCchPrintfW @ 0x1C00144EC (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_S @ 0x1C0014914 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromKse(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r14
  __int64 result; // rax
  unsigned int v6; // esi
  char *v7; // r15
  _QWORD *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // edx
  int v21; // r8d
  int v22; // [rsp+28h] [rbp-E0h]
  int v23; // [rsp+28h] [rbp-E0h]
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  char *v31; // [rsp+80h] [rbp-88h]
  _QWORD v32[2]; // [rsp+88h] [rbp-80h] BYREF
  wchar_t pszDest[64]; // [rsp+98h] [rbp-70h] BYREF

  v32[0] = L"USBXHCI";
  v4 = 0;
  v32[1] = L"USBXHCI2";
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  if ( !WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    goto LABEL_56;
  v6 = 0;
  v7 = (char *)v32 - a1;
  v8 = (_QWORD *)(a1 + 336);
  v31 = (char *)v32 - a1;
  do
  {
    RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ALL");
    v9 = *(_QWORD *)((char *)v8 + (_QWORD)v7 - 336);
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v24) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v10, v11, 0x99u, v22, v6, v24, pszDest);
      *v8 |= v24;
    }
    if ( *(_DWORD *)(a1 + 244) == 1 )
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X", *(unsigned __int16 *)(a1 + 248));
    else
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S", a1 + 304);
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v25) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v12, v13, 0x9Au, v22, v6, v25, pszDest);
      v4 = 1;
      *v8 |= v25;
    }
    if ( *(_DWORD *)(a1 + 244) == 1 )
    {
      v23 = *(unsigned __int16 *)(a1 + 252);
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X", *(unsigned __int16 *)(a1 + 248));
    }
    else
    {
      v23 = a1 + 309;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S", a1 + 304);
    }
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v26) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v14, v15, 0x9Bu, v23, v6, v26, pszDest);
      v4 = 1;
      *v8 |= v26;
    }
    if ( *(_DWORD *)(a1 + 244) == 1 )
    {
      v22 = *(unsigned __int16 *)(a1 + 252);
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X", *(unsigned __int16 *)(a1 + 248));
    }
    else
    {
      v22 = a1 + 309;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S", a1 + 304);
    }
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v27) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v16, a3, 0x9Cu, v22, v6, v27, pszDest);
      v4 = 1;
      *v8 |= v27;
    }
    if ( *(_QWORD *)(a1 + 328) != -1LL )
    {
      if ( *(_DWORD *)(a1 + 244) == 1 )
      {
        v22 = *(unsigned __int16 *)(a1 + 252);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X&%I64X",
          *(unsigned __int16 *)(a1 + 248));
      }
      else
      {
        v22 = a1 + 309;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S&%I64X", a1 + 304);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v28) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 0x9Du, v22, v6, v28, pszDest);
        v4 = 1;
        *v8 |= v28;
      }
    }
    if ( *(_DWORD *)(a1 + 244) == 1 )
    {
      v22 = *(unsigned __int16 *)(a1 + 252);
      RtlStringCchPrintfW(
        pszDest,
        0x3CuLL,
        L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X",
        *(unsigned __int16 *)(a1 + 248));
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v29) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v18, a3, 0x9Eu, v22, v6, v29, pszDest);
        v4 = 1;
        *v8 |= v29;
      }
      if ( *(_DWORD *)(a1 + 244) == 1 )
      {
        v22 = *(unsigned __int16 *)(a1 + 252);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X",
          *(unsigned __int16 *)(a1 + 248));
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v30) >= 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v19, a3, 0x9Fu, v22, v6, v30, pszDest);
          v4 = 1;
          *v8 |= v30;
        }
      }
    }
    v7 = v31;
    ++v6;
    ++v8;
  }
  while ( v6 < 2 );
  result = *(_QWORD *)(a1 + 336);
  if ( (result & 0x10) != 0 )
  {
    v20 = 4;
    v21 = 4108;
LABEL_53:
    result = Controller_ReportFatalError(a1, v20, v21, 0, 0LL, 0LL);
    goto LABEL_54;
  }
  if ( (result & 0x1000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xA0u, (__int64)&Context.Logger + 4);
    Controller_HwVerifierBreakIfEnabled(
      (_QWORD *)a1,
      0LL,
      0LL,
      1LL,
      "Controller Firmware has known issues, and newer firmware is available",
      0LL,
      0LL);
    v20 = 0;
    v21 = 4111;
    goto LABEL_53;
  }
LABEL_54:
  if ( v4 )
    return result;
  result = (__int64)&WPP_RECORDER_INITIALIZED;
LABEL_56:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 72), 3, a3, 161, v22, (__int64)pszDest);
  return result;
}
