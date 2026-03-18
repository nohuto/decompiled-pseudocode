/*
 * XREFs of HUBREG_QueryHubErrataFlags @ 0x1C007B314
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C0074514 (HUBFDO_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C002EE7C (HUBMISC_QueryKseDeviceFlags.c)
 *     WER_CreateReport @ 0x1C003BABC (WER_CreateReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C0079C4C (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryHubErrataFlags(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  bool v9; // zf
  wchar_t *pszDest; // rdx
  __int64 v11; // rbx
  int v12; // esi
  unsigned __int16 v13; // r9
  __int64 v15; // [rsp+28h] [rbp-61h]
  __int64 v16; // [rsp+38h] [rbp-51h]
  __int64 v17; // [rsp+80h] [rbp-9h] BYREF
  __int64 v18; // [rsp+88h] [rbp-1h] BYREF
  __int64 v19; // [rsp+90h] [rbp+7h] BYREF
  __int64 v20; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+1Fh] BYREF
  __int64 v23[2]; // [rsp+B0h] [rbp+27h] BYREF
  int v24; // [rsp+F0h] [rbp+67h] BYREF

  v4 = *(_BYTE *)(a1 + 200);
  v16 = *(_QWORD *)(a1 + 2520);
  v17 = 0LL;
  HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, 0LL, &v17, 0, v16);
  v9 = *(_DWORD *)(a1 + 168) == 3;
  v23[0] = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  if ( v9 && (pszDest = *(wchar_t **)(a1 + 176)) != 0LL )
    HUBMISC_QueryKseDeviceFlags(
      0LL,
      a2,
      a3,
      a4,
      pszDest,
      *(_WORD **)(a1 + 184),
      *(_WORD **)(a1 + 192),
      v23,
      &v22,
      &v21,
      &v20,
      &v19,
      &v18,
      0LL,
      *(_BYTE *)(a1 + 240) == 0,
      *(_QWORD *)(a1 + 2520));
  else
    HUBMISC_QueryKseDeviceFlags(
      0LL,
      a2,
      a3,
      a4,
      0LL,
      0LL,
      0LL,
      v23,
      &v22,
      &v21,
      &v20,
      &v19,
      &v18,
      0LL,
      *(_BYTE *)(a1 + 240) == 0,
      *(_QWORD *)(a1 + 2520));
  v11 = v23[0] | v22 | v21 | v20 | v19 | v18;
  v24 = 0;
  if ( !v17 )
    goto LABEL_14;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v17,
          &g_ResetTTOnCancel,
          4LL,
          &v24,
          0LL,
          0LL);
  if ( v12 >= 0 && v24 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800u);
  if ( v12 == -1073741772 )
  {
LABEL_14:
    if ( (v11 & 0x100) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800u);
  }
  else if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_84;
    v13 = 38;
    goto LABEL_13;
  }
  v24 = 0;
  if ( !v17 )
    goto LABEL_24;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v17,
          L".0",
          4LL,
          &v24,
          0LL,
          0LL);
  if ( v12 >= 0 && v24 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFFF7FF);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000u);
  }
  if ( v12 == -1073741772 )
  {
LABEL_24:
    if ( (v11 & 0x200) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xFFFFF7FF);
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000u);
    }
  }
  else if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 39;
LABEL_13:
      LODWORD(v15) = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v13,
        (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids,
        v15);
      goto LABEL_84;
    }
    goto LABEL_84;
  }
  if ( (v11 & 0x800) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000u);
  v24 = 0;
  if ( !v17 )
    goto LABEL_36;
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v17,
          &g_DisableLpm,
          4LL,
          &v24,
          0LL,
          0LL);
  if ( v12 >= 0 && v24 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
  if ( v12 == -1073741772 )
  {
LABEL_36:
    if ( (v11 & 0x1000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
    goto LABEL_38;
  }
  if ( v12 >= 0 )
  {
LABEL_38:
    if ( (v11 & 0x2000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000u);
    if ( (v11 & 0x8000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000u);
    if ( (v11 & 0x40000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x100000u);
    if ( (v11 & 0x100000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x200000u);
    if ( (v11 & 0x400000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
    if ( (v11 & 0x2000000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x1000000u);
    if ( (v11 & 0x4000000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2496), 1u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
    }
    if ( (v11 & 0x40000000000LL) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2496), 4u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 2496), 1u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x8000u);
    }
    if ( !*(_BYTE *)(a1 + 240) && (v11 & 0x10000) != 0 )
      *(_DWORD *)(a1 + 2496) |= 1u;
    if ( (v11 & 0x10000000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x2000000u);
    if ( (v11 & 0x8000000000LL) != 0 && v4 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 44), 1u);
    if ( (v11 & 0x20000000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x10000000u);
    if ( (v11 & 0x100000000000LL) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 44), 8u);
    if ( (v11 & 0x20000000000LL) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 44), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40000000u);
    if ( (v11 & 8) != 0 )
      _InterlockedAnd((volatile signed __int32 *)(a1 + 40), 0xBFFFFFFF);
    if ( (v11 & 0x800000000LL) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x80000000);
    if ( (v11 & 0x10000000000LL) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 44), 2u);
    if ( (v11 & 0x200000000000LL) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 44), 0x10u);
    if ( *(_WORD *)(a1 + 2464) == 8457
      && *(_WORD *)(a1 + 2466) == 2064
      && (unsigned __int8)*(_WORD *)(a1 + 2468) < 0x89u )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x800000u);
    }
    if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    {
      WER_CreateReport(a1, 0x2000000LL, 0x800000LL, 12290, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 2520),
          4u,
          3u,
          0x29u,
          (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids);
    }
    v12 = 0;
    goto LABEL_84;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 40;
    goto LABEL_13;
  }
LABEL_84:
  if ( v17 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v12;
}
