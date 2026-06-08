/*
 * XREFs of InitAcpiLpiStates @ 0x1C0034270
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0026714 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     Display_LPI @ 0x1C0006460 (Display_LPI.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     AcpiEvaluateMethod @ 0x1C0022290 (AcpiEvaluateMethod.c)
 *     AcpiParseLpiObject @ 0x1C0024878 (AcpiParseLpiObject.c)
 *     ValidateLpiState @ 0x1C0030838 (ValidateLpiState.c)
 */

__int64 __fastcall InitAcpiLpiStates(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  PVOID v5; // rsi
  int v6; // edi
  const wchar_t *v7; // rdx
  _DWORD *v8; // rsi
  _DWORD *v9; // rsi
  int v10; // eax
  __int64 v11; // rdi
  const wchar_t *v12; // rdx
  __int64 i; // rbx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v16; // [rsp+58h] [rbp+10h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v16 = 0LL;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x80000u);
  v2 = AcpiEvaluateMethod(a1, 1229999199, 0LL, (unsigned int **)&P, &v15);
  v5 = P;
  v6 = v2;
  if ( v2 >= 0 )
  {
    v7 = *(const wchar_t **)(a1 + 64);
    *(_QWORD *)(a1 + 256) |= *(_QWORD *)(a1 + 264) & 0xE0000000000LL;
    v6 = AcpiParseLpiObject((__int64)v5, v7, 0, &v16);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 >= 0 )
  {
    v9 = v16;
    if ( v16 )
    {
      v11 = 0LL;
      if ( v16[4] )
      {
        while ( 1 )
        {
          v10 = ValidateLpiState((__int64)&v9[20 * v11 + 6], 0);
          if ( v10 < 0 )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= v9[4] )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        v10 = 0;
      }
      v6 = v10;
      if ( v10 >= 0 )
      {
        v12 = *(const wchar_t **)(a1 + 64);
        v6 = 0;
        *(_QWORD *)(a1 + 528) = v9;
        v8 = 0LL;
        Display_LPI(*(_QWORD *)(a1 + 528), v12, v3, v4);
        goto LABEL_22;
      }
    }
    else
    {
      v6 = -1073741823;
      v10 = -1073741823;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x80000u);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xCu,
        (__int64)&WPP_d6536c9038633dfeb7b644def35c3466_Traceguids,
        v10);
    v8 = v16;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x80000u);
    v8 = 0LL;
    if ( v6 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_d6536c9038633dfeb7b644def35c3466_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_d6536c9038633dfeb7b644def35c3466_Traceguids,
        v6);
    }
  }
LABEL_22:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  if ( v6 < 0 )
    *(_QWORD *)(a1 + 264) &= 0xFFFFE1FFFFFFFFFFuLL;
  if ( v8 )
  {
    for ( i = 0LL; (unsigned int)i < v8[4]; i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)&v8[20 * i + 24] )
        RtlFreeUnicodeString((PUNICODE_STRING)&v8[20 * i + 22]);
    }
    ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)v6;
}
