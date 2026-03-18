/*
 * XREFs of HUBMISC_QueryKseDeviceFlags @ 0x1C002C6E8
 * Callers:
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C007378C (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C007421C (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C0010C04 (RtlStringCbPrintfW.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall HUBMISC_QueryKseDeviceFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        NTSTRSAFE_PWSTR pszDest,
        _WORD *a6,
        _WORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        _QWORD *a13,
        char a14,
        __int64 a15)
{
  NTSTRSAFE_PWSTR v15; // rsi
  _WORD *v17; // rdi
  _WORD *v18; // rbx
  size_t v19; // r14
  int v20; // eax
  _QWORD *result; // rax
  bool v22; // zf
  _QWORD *v23; // r13
  _QWORD *v24; // rax
  _QWORD *v25; // r15
  wchar_t *v26; // rcx
  NTSTATUS v27; // eax
  char v28; // r15
  const wchar_t *v29; // r8
  NTSTATUS v30; // eax
  __int64 v31; // r12
  const wchar_t *v32; // r8
  NTSTATUS v33; // eax
  const wchar_t *v34; // r8
  NTSTATUS v35; // eax
  const wchar_t *v36; // r8
  NTSTATUS v37; // eax
  const wchar_t *v38; // r8
  NTSTATUS v39; // eax
  __int64 v40; // [rsp+28h] [rbp-38h]
  __int64 v41; // [rsp+28h] [rbp-38h]
  __int64 v42; // [rsp+28h] [rbp-38h]
  __int64 v43; // [rsp+28h] [rbp-38h]
  __int64 v44; // [rsp+28h] [rbp-38h]
  __int64 v45; // [rsp+50h] [rbp-10h] BYREF

  v15 = pszDest;
  v17 = a7;
  v18 = a6;
  v45 = 0LL;
  if ( pszDest && a6 && a7 && *pszDest && *a6 && *a7 )
    v19 = (unsigned __int16)*a6 + (unsigned __int64)*pszDest + (unsigned __int16)*a7 + 88LL;
  else
    v19 = 82LL;
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, size_t, __int64 *, NTSTRSAFE_PWSTR *))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          0LL,
          512LL,
          1681082453LL,
          v19,
          &v45,
          &pszDest);
  if ( v20 < 0 )
  {
    LODWORD(v40) = v20;
    result = (_QWORD *)WPP_RECORDER_SF_d(
                         a15,
                         2u,
                         5u,
                         0x5Au,
                         (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
                         v40);
    goto LABEL_46;
  }
  v22 = WPP_MAIN_CB.Queue.ListEntry.Flink == 0LL;
  v23 = a10;
  *a8 = 0LL;
  *a9 = 0LL;
  v24 = a11;
  *v23 = 0LL;
  *v24 = 0LL;
  result = a12;
  *a12 = 0LL;
  if ( !v22 )
  {
    if ( a1 )
    {
      v25 = a13;
      if ( a13 )
      {
        v26 = pszDest;
        *a13 = 0LL;
        v27 = RtlStringCbPrintfW(v26, v19, L"USB:DEVICECLASS_%S", a1);
        if ( v27 < 0 )
        {
          LODWORD(v40) = v27;
          result = (_QWORD *)WPP_RECORDER_SF_d(
                               a15,
                               2u,
                               5u,
                               0x5Bu,
                               (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
                               v40);
          goto LABEL_46;
        }
        ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
          pszDest,
          L"USB",
          v25);
      }
    }
    v28 = a14;
    if ( v15 && v18 && v17 && *v15 && *v18 && *v17 )
    {
      v29 = L"USB:USB\\%wZ&%wZ&%wZ\\";
      if ( a14 )
        v29 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\";
      v30 = RtlStringCbPrintfW(pszDest, v19, v29, v15, v18, v17);
      if ( v30 < 0 )
      {
        LODWORD(v41) = v30;
        result = (_QWORD *)WPP_RECORDER_SF_d(
                             a15,
                             2u,
                             5u,
                             0x5Cu,
                             (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
                             v41);
        goto LABEL_46;
      }
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        a8);
      v31 = a3;
      v32 = L"USB:USB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S&REV_%S";
      if ( v28 )
        v32 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S&REV_%S";
      v33 = RtlStringCbPrintfW(pszDest, v19, v32, v15, v18, v17, a2, a3, a4);
      if ( v33 < 0 )
      {
        LODWORD(v42) = v33;
        result = (_QWORD *)WPP_RECORDER_SF_d(
                             a15,
                             2u,
                             5u,
                             0x5Du,
                             (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
                             v42);
        goto LABEL_46;
      }
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        a9);
      v34 = L"USB:USB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S";
      if ( v28 )
        v34 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S";
      v35 = RtlStringCbPrintfW(pszDest, v19, v34, v15, v18, v17, a2, a3);
      if ( v35 < 0 )
      {
        LODWORD(v43) = v35;
        result = (_QWORD *)WPP_RECORDER_SF_d(
                             a15,
                             2u,
                             5u,
                             0x5Eu,
                             (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
                             v43);
        goto LABEL_46;
      }
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        v23);
    }
    else
    {
      v31 = a3;
    }
    v36 = L"USB:USB\\VID_%S&PID_%S&REV_%S";
    if ( v28 )
      v36 = L"USB:ROOT_HUB\\VID_%S&PID_%S&REV_%S";
    v37 = RtlStringCbPrintfW(pszDest, v19, v36, a2, v31, a4);
    if ( v37 >= 0 )
    {
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        a11);
      v38 = L"USB:USB\\VID_%S&PID_%S";
      if ( v28 )
        v38 = L"USB:ROOT_HUB\\VID_%S&PID_%S";
      v39 = RtlStringCbPrintfW(pszDest, v19, v38, a2, v31);
      if ( v39 >= 0 )
      {
        result = (_QWORD *)((__int64 (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
                             pszDest,
                             L"USB",
                             a12);
      }
      else
      {
        LODWORD(v44) = v39;
        result = (_QWORD *)WPP_RECORDER_SF_d(
                             a15,
                             2u,
                             5u,
                             0x60u,
                             (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
                             v44);
      }
    }
    else
    {
      LODWORD(v44) = v37;
      result = (_QWORD *)WPP_RECORDER_SF_d(
                           a15,
                           2u,
                           5u,
                           0x5Fu,
                           (__int64)&WPP_5bc5aabc45393ebf49682d6683797972_Traceguids,
                           v44);
    }
  }
LABEL_46:
  if ( v45 )
    return (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return result;
}
