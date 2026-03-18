/*
 * XREFs of HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C002DE04
 * Callers:
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C00751F0 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringInit @ 0x1C002D990 (RtlUnicodeStringInit.c)
 *     WPP_RECORDER_SF_S @ 0x1C002DA1C (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBREG_ValidateAndPopulateEndpointPriorities(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  __int64 v4; // rsi
  unsigned int v5; // r13d
  unsigned __int16 v6; // r9
  __int64 result; // rax
  __int64 v8; // rbx
  NTSTATUS v9; // ebx
  unsigned __int16 v10; // r9
  unsigned int v11; // r12d
  __int64 v12; // rdx
  wchar_t *v13; // rax
  NTSTRSAFE_PCWSTR *v14; // rsi
  unsigned int i; // ebx
  wchar_t *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r14
  ULONG v19; // edx
  __int64 v20; // rsi
  int v21; // edx
  int v22; // r8d
  int v23; // r9d
  BOOLEAN v24; // al
  int v25; // [rsp+20h] [rbp-E0h]
  __int64 *v26; // [rsp+28h] [rbp-D8h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h]
  _BYTE v32[8]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t *Str; // [rsp+78h] [rbp-88h]
  _QWORD v34[7]; // [rsp+80h] [rbp-80h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+B8h] [rbp-48h]
  NTSTRSAFE_PCWSTR v36[6]; // [rsp+C0h] [rbp-40h] BYREF
  char v37; // [rsp+F0h] [rbp-10h] BYREF

  *(_DWORD *)&DestinationString.Length = 6553600;
  v31 = a2;
  v30 = 0LL;
  DestinationString.Buffer = (wchar_t *)&v37;
  v3 = 0;
  v4 = a2;
  v28 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 112))(WdfDriverGlobals);
  if ( !v5 )
  {
    v6 = 59;
LABEL_3:
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               v6,
               (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids);
    goto LABEL_63;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  memset(v34, 0, sizeof(v34));
  LODWORD(v34[0]) = 56;
  v26 = &v30;
  v25 = 20 * v5;
  v34[3] = 0x100000001LL;
  v34[4] = v8;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         v34,
         (unsigned int)ExDefaultNonPagedPoolType,
         1681082453LL);
  if ( v9 < 0 )
  {
    v10 = 60;
    goto LABEL_6;
  }
  v11 = 0;
  while ( 2 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 144))(
            WdfDriverGlobals,
            v4,
            v11);
    if ( !v12 )
    {
      v10 = 61;
LABEL_6:
      LODWORD(v26) = v9;
LABEL_7:
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                 2u,
                 5u,
                 v10,
                 (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
                 v26);
      goto LABEL_62;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _BYTE *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v12,
      v32);
    v13 = Str;
    v14 = v36;
    pszSrc = Str;
    for ( i = 1; i < 6; ++i )
    {
      v16 = wcschr(v13, 0x2Cu);
      if ( !v16 )
      {
        v6 = 62;
        goto LABEL_3;
      }
      *v16 = 0;
      v13 = v16 + 1;
      *v14++ = v13;
    }
    v9 = RtlUnicodeStringInit(&DestinationString, pszSrc);
    if ( v9 < 0 )
    {
      v10 = 63;
      goto LABEL_6;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      v17 = v3;
      v18 = 20LL * v3;
      *(_WORD *)(v18 + v28) = -1;
      goto LABEL_19;
    }
    v9 = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    if ( v9 < 0 )
    {
      v10 = 64;
      goto LABEL_6;
    }
    if ( Value - 1 > 0xFE )
    {
      LODWORD(v26) = Value;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                 2u,
                 5u,
                 0x41u,
                 (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
                 v26);
      goto LABEL_63;
    }
    v17 = v3;
    v18 = 20LL * v3;
    *(_WORD *)(v18 + v28) = Value;
LABEL_19:
    v9 = RtlUnicodeStringInit(&DestinationString, v36[0]);
    if ( v9 < 0 )
    {
      v10 = 66;
      goto LABEL_6;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      *(_WORD *)(v18 + v28 + 2) = -1;
      goto LABEL_25;
    }
    v9 = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    if ( v9 < 0 )
    {
      v10 = 67;
      goto LABEL_6;
    }
    v19 = Value;
    if ( (int)Value > 255 )
    {
      v10 = 68;
      goto LABEL_70;
    }
    *(_WORD *)(v18 + v28 + 2) = Value;
LABEL_25:
    v9 = RtlUnicodeStringInit(&DestinationString, v36[1]);
    if ( v9 < 0 )
    {
      v10 = 69;
      goto LABEL_6;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      *(_WORD *)(v28 + 20 * v17 + 2) = -1;
      goto LABEL_31;
    }
    v9 = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    if ( v9 < 0 )
    {
      v10 = 70;
      goto LABEL_6;
    }
    v19 = Value;
    if ( Value > 0xFF )
    {
      v10 = 71;
      goto LABEL_70;
    }
    *(_WORD *)(v28 + 20 * v17 + 4) = Value;
LABEL_31:
    v9 = RtlUnicodeStringInit(&DestinationString, v36[2]);
    if ( v9 < 0 )
    {
      v10 = 72;
      goto LABEL_6;
    }
    if ( RtlEqualUnicodeString(&g_BulkIn, &DestinationString, 1u) == 1 )
    {
      *(_DWORD *)(v28 + 20 * v17 + 8) = 0;
      goto LABEL_36;
    }
    if ( RtlEqualUnicodeString(&g_BulkOut, &DestinationString, 1u) != 1 )
    {
      if ( RtlEqualUnicodeString(&g_InterruptIn, &DestinationString, 1u) == 1
        || RtlEqualUnicodeString(&g_InterruptOut, &DestinationString, 1u) == 1
        || RtlEqualUnicodeString(&g_IsochronousIn, &DestinationString, 1u) == 1
        || (v24 = RtlEqualUnicodeString(&g_IsochronousOut, &DestinationString, 1u), v23 = 73, v24 == 1) )
      {
        v23 = 74;
      }
      goto LABEL_53;
    }
    *(_DWORD *)(v28 + 20 * v17 + 8) = 1;
LABEL_36:
    v9 = RtlUnicodeStringInit(&DestinationString, v36[3]);
    if ( v9 < 0 )
    {
      v10 = 75;
      goto LABEL_6;
    }
    v9 = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    if ( v9 < 0 )
    {
      v10 = 76;
      goto LABEL_6;
    }
    v19 = Value;
    if ( Value > 0xF )
    {
      v10 = 77;
LABEL_70:
      LODWORD(v26) = v19;
      goto LABEL_7;
    }
    v20 = 5 * v17;
    *(_WORD *)(v28 + 4 * v20 + 12) = Value;
    v9 = RtlUnicodeStringInit(&DestinationString, v36[4]);
    if ( v9 < 0 )
    {
      v10 = 78;
      goto LABEL_6;
    }
    if ( RtlEqualUnicodeString(&g_Video, &DestinationString, 1u) == 1 )
    {
      result = v28;
      *(_DWORD *)(v28 + 4 * v20 + 16) = 1;
      goto LABEL_46;
    }
    if ( RtlEqualUnicodeString(&g_Voice, &DestinationString, 1u) == 1 )
    {
      result = v28;
      *(_DWORD *)(v28 + 4 * v20 + 16) = 2;
      goto LABEL_46;
    }
    if ( RtlEqualUnicodeString(&g_Interactive, &DestinationString, 1u) != 1 )
    {
      v23 = 79;
LABEL_53:
      result = WPP_RECORDER_SF_S(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                 v21,
                 v22,
                 v23,
                 v25,
                 (__int64)DestinationString.Buffer);
      goto LABEL_54;
    }
    result = v28;
    *(_DWORD *)(v28 + 4 * v20 + 16) = 3;
LABEL_46:
    ++v3;
LABEL_54:
    if ( ++v11 < v5 )
    {
      v4 = v31;
      continue;
    }
    break;
  }
  if ( !v3 )
  {
    result = WPP_RECORDER_SF_(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               0x50u,
               (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids);
    v9 = -1073741811;
  }
LABEL_62:
  if ( v9 >= 0 )
  {
    result = v28;
    *(_QWORD *)(a1 + 2688) = v28;
    *(_DWORD *)(a1 + 2696) = v3;
  }
  else
  {
LABEL_63:
    if ( v30 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  }
  return result;
}
