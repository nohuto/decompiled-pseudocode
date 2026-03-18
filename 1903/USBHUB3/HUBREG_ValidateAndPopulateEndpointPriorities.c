/*
 * XREFs of HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C0030984
 * Callers:
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C007C4B8 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringInit @ 0x1C0030480 (RtlUnicodeStringInit.c)
 *     WPP_RECORDER_SF_S @ 0x1C003050C (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C0041200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

char __fastcall HUBREG_ValidateAndPopulateEndpointPriorities(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int v4; // r12d
  wchar_t *v5; // rax
  int v6; // r14d
  unsigned __int16 v7; // r9
  __int64 v8; // rbx
  int v9; // ebx
  unsigned __int16 v10; // r9
  unsigned int v11; // r13d
  wchar_t *v12; // rax
  NTSTRSAFE_PCWSTR *v13; // r14
  unsigned int i; // ebx
  __int64 v15; // r15
  __int64 v16; // r14
  ULONG v17; // edx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v22; // [rsp+20h] [rbp-E0h]
  __int64 *v23; // [rsp+28h] [rbp-D8h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  wchar_t *Str; // [rsp+80h] [rbp-80h]
  _QWORD v32[7]; // [rsp+88h] [rbp-78h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+C0h] [rbp-40h]
  NTSTRSAFE_PCWSTR v34[5]; // [rsp+C8h] [rbp-38h] BYREF
  char v35; // [rsp+F0h] [rbp-10h] BYREF

  v2 = a2;
  v29 = a2;
  memset(v32, 0, sizeof(v32));
  v30 = 0LL;
  Str = 0LL;
  *(_QWORD *)&DestinationString.Length = 6553600LL;
  DestinationString.Buffer = (wchar_t *)&v35;
  v4 = 0;
  v28 = 0LL;
  v25 = 0LL;
  LODWORD(v5) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 112))(
                  WdfDriverGlobals,
                  v2);
  v6 = (int)v5;
  v27 = (unsigned int)v5;
  if ( !(_DWORD)v5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v7 = 59;
LABEL_4:
    LOBYTE(v5) = WPP_RECORDER_SF_(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                   2u,
                   5u,
                   v7,
                   (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids);
    goto LABEL_75;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  memset(v32, 0, sizeof(v32));
  v32[3] = 0x100000001LL;
  v23 = &v28;
  LODWORD(v32[0]) = 56;
  v32[4] = v8;
  v22 = 20 * v6;
  LODWORD(v5) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
                  WdfDriverGlobals,
                  v32,
                  (unsigned int)ExDefaultNonPagedPoolType,
                  1681082453LL);
  v9 = (int)v5;
  if ( (int)v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_74;
    v10 = 60;
    goto LABEL_8;
  }
  v11 = 0;
  if ( !v6 )
    goto LABEL_71;
  while ( 2 )
  {
    v5 = (wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 144))(
                      WdfDriverGlobals,
                      v2,
                      v11);
    if ( !v5 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 61;
      goto LABEL_102;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, wchar_t *, __int64 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v5,
      &v30);
    v12 = Str;
    v13 = v34;
    pszSrc = Str;
    for ( i = 1; i < 6; ++i )
    {
      v5 = wcschr(v12, 0x2Cu);
      if ( !v5 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_75;
        v7 = 62;
        goto LABEL_4;
      }
      *v5 = 0;
      v12 = v5 + 1;
      *v13++ = v12;
    }
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, pszSrc);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 63;
      goto LABEL_8;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      v15 = v4;
      v16 = 20LL * v4;
      *(_WORD *)(v16 + v25) = -1;
      goto LABEL_21;
    }
    LODWORD(v5) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 64;
      goto LABEL_8;
    }
    LOBYTE(v5) = Value - 1;
    if ( Value - 1 > 0xFE )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = Value;
        LOBYTE(v5) = WPP_RECORDER_SF_d(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                       2u,
                       5u,
                       0x41u,
                       (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids,
                       v23);
      }
      goto LABEL_75;
    }
    v15 = v4;
    v16 = 20LL * v4;
    *(_WORD *)(v16 + v25) = Value;
LABEL_21:
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, v34[0]);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 66;
      goto LABEL_102;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      *(_WORD *)(v16 + v25 + 2) = -1;
      goto LABEL_27;
    }
    LODWORD(v5) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 67;
      goto LABEL_102;
    }
    v17 = Value;
    if ( (int)Value > 255 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 68;
      goto LABEL_87;
    }
    *(_WORD *)(v16 + v25 + 2) = Value;
LABEL_27:
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, v34[1]);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 69;
      goto LABEL_102;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      *(_WORD *)(v16 + v25 + 2) = -1;
      goto LABEL_33;
    }
    LODWORD(v5) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 70;
      goto LABEL_102;
    }
    v17 = Value;
    if ( Value > 0xFF )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 71;
      goto LABEL_87;
    }
    *(_WORD *)(v16 + v25 + 4) = Value;
LABEL_33:
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, v34[2]);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 72;
      goto LABEL_102;
    }
    if ( RtlEqualUnicodeString(&g_BulkIn, &DestinationString, 1u) == 1 )
    {
      *(_DWORD *)(v16 + v25 + 8) = 0;
      goto LABEL_38;
    }
    if ( RtlEqualUnicodeString(&g_BulkOut, &DestinationString, 1u) != 1 )
    {
      LOBYTE(v5) = RtlEqualUnicodeString(&g_InterruptIn, &DestinationString, 1u);
      if ( (_BYTE)v5 == 1
        || (LOBYTE(v5) = RtlEqualUnicodeString(&g_InterruptOut, &DestinationString, 1u), (_BYTE)v5 == 1)
        || (LOBYTE(v5) = RtlEqualUnicodeString(&g_IsochronousIn, &DestinationString, 1u), (_BYTE)v5 == 1)
        || (LOBYTE(v5) = RtlEqualUnicodeString(&g_IsochronousOut, &DestinationString, 1u), (_BYTE)v5 == 1) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_60;
        v20 = 74;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_60;
        v20 = 73;
      }
      goto LABEL_59;
    }
    *(_DWORD *)(v16 + v25 + 8) = 1;
LABEL_38:
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, v34[3]);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 75;
      goto LABEL_8;
    }
    LODWORD(v5) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 76;
LABEL_8:
      LODWORD(v23) = (_DWORD)v5;
LABEL_9:
      LOBYTE(v5) = WPP_RECORDER_SF_d(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                     2u,
                     5u,
                     v10,
                     (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids,
                     v23);
      goto LABEL_74;
    }
    v17 = Value;
    if ( Value > 0xF )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 77;
LABEL_87:
      LODWORD(v23) = v17;
      goto LABEL_9;
    }
    *(_WORD *)(v25 + 20 * v15 + 12) = Value;
    LODWORD(v5) = RtlUnicodeStringInit(&DestinationString, v34[4]);
    v9 = (int)v5;
    if ( (int)v5 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v10 = 78;
LABEL_102:
      LODWORD(v23) = v9;
      goto LABEL_9;
    }
    if ( RtlEqualUnicodeString(&g_Video, &DestinationString, 1u) == 1 )
    {
      LOBYTE(v5) = v25;
      *(_DWORD *)(v25 + 20 * v15 + 16) = 1;
      goto LABEL_48;
    }
    if ( RtlEqualUnicodeString(&g_Voice, &DestinationString, 1u) == 1 )
    {
      LOBYTE(v5) = v25;
      *(_DWORD *)(v25 + 20 * v15 + 16) = 2;
      goto LABEL_48;
    }
    LOBYTE(v5) = RtlEqualUnicodeString(&g_Interactive, &DestinationString, 1u);
    if ( (_BYTE)v5 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_60;
      v20 = 79;
LABEL_59:
      LOBYTE(v5) = WPP_RECORDER_SF_S(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                     v18,
                     v19,
                     v20,
                     v22,
                     (__int64)DestinationString.Buffer);
      goto LABEL_60;
    }
    LOBYTE(v5) = v25;
    *(_DWORD *)(v25 + 20 * v15 + 16) = 3;
LABEL_48:
    ++v4;
LABEL_60:
    if ( ++v11 < v27 )
    {
      v2 = v29;
      continue;
    }
    break;
  }
  if ( !v4 )
  {
LABEL_71:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LOBYTE(v5) = WPP_RECORDER_SF_(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                     2u,
                     5u,
                     0x50u,
                     (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids);
    v9 = -1073741811;
  }
LABEL_74:
  if ( v9 >= 0 )
  {
    LOBYTE(v5) = v25;
    *(_QWORD *)(a1 + 2688) = v25;
    *(_DWORD *)(a1 + 2696) = v4;
  }
  else
  {
LABEL_75:
    if ( v28 )
      LOBYTE(v5) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  }
  return (char)v5;
}
