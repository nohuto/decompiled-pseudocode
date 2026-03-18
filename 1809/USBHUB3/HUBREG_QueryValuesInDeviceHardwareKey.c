/*
 * XREFs of HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C00751F0
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006E360 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C002DE04 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 */

__int64 __fastcall HUBREG_QueryValuesInDeviceHardwareKey(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  PVOID PoolWithTag; // rax
  PVOID v8; // rsi
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int16 v12; // [rsp+48h] [rbp-20h] BYREF
  void *Src; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v15 = 0LL;
  v11 = 0LL;
  v16 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         v3,
         1LL,
         131097LL,
         0LL,
         &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 85;
LABEL_3:
    LODWORD(v10) = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      v6,
      (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
      v10);
    goto LABEL_39;
  }
  v14 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v15,
         L"02",
         4LL,
         &v14,
         0LL,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      v6 = 86;
      goto LABEL_3;
    }
  }
  else if ( v14 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x400u);
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         0LL,
         &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 87;
    goto LABEL_3;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64))(WdfFunctions_01015 + 1912))(
         WdfDriverGlobals,
         v15,
         &g_FriendlyName,
         v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      v6 = 89;
      goto LABEL_3;
    }
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v16,
      &v12);
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v12, 0x64334855u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x58u,
        (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids);
      goto LABEL_39;
    }
    memmove(PoolWithTag, Src, v12);
    *(_DWORD *)(a1 + 2164) = v12;
    *(_QWORD *)(a1 + 2168) = v8;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v15,
         L"HJ",
         131097LL,
         0LL,
         &v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14 = 0;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v11,
           &g_D3ColdSupported,
           4LL,
           &v14,
           0LL,
           0LL);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( v4 != -1073741772 )
      {
        v6 = 92;
        goto LABEL_3;
      }
    }
    else if ( v14 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1636), 0x1000u);
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x5Bu,
        (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids);
    }
  }
  else if ( v4 != -1073741772 )
  {
    v6 = 90;
    goto LABEL_3;
  }
  v14 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v15,
         L" \"",
         4LL,
         &v14,
         0LL,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      v6 = 93;
      goto LABEL_3;
    }
  }
  else if ( v14 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x4000u);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) = 1000;
  v14 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v15,
         L",.",
         4LL,
         &v14,
         0LL,
         0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741772 )
    {
      v6 = 94;
      goto LABEL_3;
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1440LL) = v14;
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 *))(WdfFunctions_01015 + 104))(
         WdfDriverGlobals,
         0LL,
         &v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 95;
    goto LABEL_3;
  }
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, _QWORD, __int64))(WdfFunctions_01015 + 1896))(
         WdfDriverGlobals,
         v15,
         L"$&",
         0LL,
         v17) >= 0 )
    HUBREG_ValidateAndPopulateEndpointPriorities(a1, v17);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v17);
  v5 = 0;
LABEL_39:
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v15 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v16 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v5;
}
