/*
 * XREFs of HUBMISC_QueryKseDeviceFlags @ 0x1C002EE7C
 * Callers:
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C007A778 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C007B314 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C0011E68 (RtlStringCbPrintfW.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall HUBMISC_QueryKseDeviceFlags(
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
        _QWORD *a14,
        char a15,
        __int64 a16)
{
  NTSTRSAFE_PWSTR v16; // r14
  _WORD *v18; // rsi
  _WORD *v19; // rdi
  size_t v21; // rbx
  int result; // eax
  unsigned __int16 v23; // r9
  bool v24; // zf
  _QWORD *v25; // r15
  wchar_t *v26; // rcx
  char v27; // r15
  const wchar_t *v28; // r8
  __int64 v29; // r12
  const wchar_t *v30; // r8
  const wchar_t *v31; // r8
  const wchar_t *v32; // r8
  const wchar_t *v33; // r8
  const wchar_t *v34; // r8
  __int64 v35; // [rsp+28h] [rbp-38h]
  __int64 v36; // [rsp+50h] [rbp-10h] BYREF

  v16 = pszDest;
  v18 = a7;
  v19 = a6;
  v36 = 0LL;
  if ( pszDest && a6 && a7 && *pszDest && *a6 && *a7 )
    v21 = (unsigned __int16)*a6 + (unsigned __int64)*pszDest + (unsigned __int16)*a7 + 88LL;
  else
    v21 = 82LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, size_t, __int64 *, NTSTRSAFE_PWSTR *))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             0LL,
             512LL,
             1681082453LL,
             v21,
             &v36,
             &pszDest);
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_59;
    v23 = 90;
    goto LABEL_12;
  }
  v24 = WPP_MAIN_CB.Queue.ListEntry.Flink == 0LL;
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  *a12 = 0LL;
  result = (int)a13;
  *a13 = 0LL;
  if ( v24 )
    goto LABEL_59;
  if ( a1 )
  {
    v25 = a14;
    if ( a14 )
    {
      v26 = pszDest;
      *a14 = 0LL;
      result = RtlStringCbPrintfW(v26, v21, L"USB:DEVICECLASS_%S", a1);
      if ( result < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = 91;
LABEL_12:
          LODWORD(v35) = result;
          result = WPP_RECORDER_SF_d(a16, 2u, 5u, v23, (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids, v35);
          goto LABEL_59;
        }
        goto LABEL_59;
      }
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        v25);
    }
  }
  v27 = a15;
  if ( !v16 || !v19 || !v18 || !*v16 || !*v19 || !*v18 )
  {
    v29 = a3;
    goto LABEL_43;
  }
  v28 = L"USB:USB\\%wZ&%wZ&%wZ\\";
  if ( a15 )
    v28 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\";
  result = RtlStringCbPrintfW(pszDest, v21, v28, v16, v19, v18);
  if ( result >= 0 )
  {
    ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
      pszDest,
      L"USB",
      a8);
    v29 = a3;
    v30 = L"USB:USB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S&REV_%S";
    if ( v27 )
      v30 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S&REV_%S";
    result = RtlStringCbPrintfW(pszDest, v21, v30, v16, v19, v18, a2, a3, a4);
    if ( result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 93;
        goto LABEL_12;
      }
      goto LABEL_59;
    }
    ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
      pszDest,
      L"USB",
      a9);
    v31 = L"USB:USB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S";
    if ( v27 )
      v31 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S";
    result = RtlStringCbPrintfW(pszDest, v21, v31, v16, v19, v18, a2, a3);
    if ( result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 94;
        goto LABEL_12;
      }
      goto LABEL_59;
    }
    ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
      pszDest,
      L"USB",
      a10);
LABEL_43:
    v32 = L"USB:USB\\VID_%S&PID_%S&REV_%S";
    if ( v27 )
      v32 = L"USB:ROOT_HUB\\VID_%S&PID_%S&REV_%S";
    result = RtlStringCbPrintfW(pszDest, v21, v32, a2, v29, a4);
    if ( result >= 0 )
    {
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        a11);
      v33 = L"USB:USB\\VID_%S&PID_%S";
      if ( v27 )
        v33 = L"USB:ROOT_HUB\\VID_%S&PID_%S";
      result = RtlStringCbPrintfW(pszDest, v21, v33, a2, v29);
      if ( result >= 0 )
      {
        ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
          pszDest,
          L"USB",
          a12);
        v34 = L"USB:USB\\VID_%S";
        if ( v27 )
          v34 = L"USB:ROOT_HUB\\VID_%S";
        result = RtlStringCbPrintfW(pszDest, v21, v34, a2);
        if ( result >= 0 )
        {
          result = ((__int64 (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
                     pszDest,
                     L"USB",
                     a13);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v23 = 97;
          goto LABEL_12;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 96;
        goto LABEL_12;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 95;
      goto LABEL_12;
    }
    goto LABEL_59;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = 92;
    goto LABEL_12;
  }
LABEL_59:
  if ( v36 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return result;
}
