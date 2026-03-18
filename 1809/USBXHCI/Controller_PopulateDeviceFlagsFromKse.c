/*
 * XREFs of Controller_PopulateDeviceFlagsFromKse @ 0x1C000D094
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C005987C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_diS @ 0x1C0002750 (WPP_RECORDER_SF_diS.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     RtlStringCchPrintfW @ 0x1C0011AEC (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_S @ 0x1C0011F14 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromKse(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r14
  unsigned int v5; // esi
  char *v6; // r15
  _QWORD *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 result; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // [rsp+28h] [rbp-E0h]
  int v24; // [rsp+28h] [rbp-E0h]
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  char *v32; // [rsp+88h] [rbp-80h]
  _QWORD v33[3]; // [rsp+90h] [rbp-78h] BYREF
  wchar_t pszDest[64]; // [rsp+A8h] [rbp-60h] BYREF

  v33[0] = L"USBXHCI";
  v4 = 0;
  v33[1] = L"USBXHCI2";
  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    v5 = 0;
    v6 = (char *)v33 - a1;
    v7 = (_QWORD *)(a1 + 272);
    v32 = (char *)v33 - a1;
    do
    {
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ALL");
      v8 = *(_QWORD *)((char *)v7 + (_QWORD)v6 - 272);
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v25) >= 0 )
      {
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v9, v10, 0x97u, v23, v5, v25, pszDest);
        *v7 |= v25;
      }
      if ( *(_DWORD *)(a1 + 180) == 1 )
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X", *(unsigned __int16 *)(a1 + 184));
      else
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S", a1 + 240);
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v26) >= 0 )
      {
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v11, v12, 0x98u, v23, v5, v26, pszDest);
        v4 = 1;
        *v7 |= v26;
      }
      if ( *(_DWORD *)(a1 + 180) == 1 )
      {
        v24 = *(unsigned __int16 *)(a1 + 188);
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X", *(unsigned __int16 *)(a1 + 184));
      }
      else
      {
        v24 = a1 + 245;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S", a1 + 240);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v27) >= 0 )
      {
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v13, v14, 0x99u, v24, v5, v27, pszDest);
        v4 = 1;
        *v7 |= v27;
      }
      if ( *(_DWORD *)(a1 + 180) == 1 )
      {
        v23 = *(unsigned __int16 *)(a1 + 188);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X",
          *(unsigned __int16 *)(a1 + 184));
      }
      else
      {
        v23 = a1 + 245;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S", a1 + 240);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v28) >= 0 )
      {
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v15, a3, 0x9Au, v23, v5, v28, pszDest);
        v4 = 1;
        *v7 |= v28;
      }
      if ( *(_QWORD *)(a1 + 264) == -1LL )
      {
        v16 = v8;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 180) == 1 )
        {
          v23 = *(unsigned __int16 *)(a1 + 188);
          RtlStringCchPrintfW(
            pszDest,
            0x3CuLL,
            L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X&%I64X",
            *(unsigned __int16 *)(a1 + 184));
        }
        else
        {
          v23 = a1 + 245;
          RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S&%I64X", a1 + 240);
        }
        v16 = v8;
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v8, &v29) >= 0 )
        {
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 0x9Bu, v23, v5, v29, pszDest);
          v4 = 1;
          *v7 |= v29;
        }
      }
      if ( *(_DWORD *)(a1 + 180) == 1 )
      {
        v23 = *(unsigned __int16 *)(a1 + 188);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X",
          *(unsigned __int16 *)(a1 + 184));
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v16, &v30) >= 0 )
        {
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v18, a3, 0x9Cu, v23, v5, v30, pszDest);
          v4 = 1;
          *v7 |= v30;
        }
        if ( *(_DWORD *)(a1 + 180) == 1 )
        {
          v23 = *(unsigned __int16 *)(a1 + 188);
          RtlStringCchPrintfW(
            pszDest,
            0x3CuLL,
            L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X",
            *(unsigned __int16 *)(a1 + 184));
          if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v16, &v31) >= 0 )
          {
            WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v19, a3, 0x9Du, v23, v5, v31, pszDest);
            v4 = 1;
            *v7 |= v31;
          }
        }
      }
      v6 = v32;
      ++v5;
      ++v7;
    }
    while ( v5 < 2 );
    result = *(_QWORD *)(a1 + 272);
    if ( (result & 0x10) != 0 )
    {
      v21 = 4;
      v22 = 4108;
    }
    else
    {
      if ( (result & 0x1000000) == 0 )
        goto LABEL_39;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0x9Eu, (__int64)&Context.Logger + 4);
      Controller_HwVerifierBreakIfEnabled(
        (_QWORD *)a1,
        0LL,
        0LL,
        1LL,
        "Controller Firmware has known issues, and newer firmware is available",
        0LL,
        0LL);
      v21 = 0;
      v22 = 4111;
    }
    result = Controller_ReportFatalError(a1, v21, v22, 0, 0LL, 0LL);
LABEL_39:
    if ( v4 )
      return result;
  }
  return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 72), 3, a3, 159, v23, (__int64)pszDest);
}
