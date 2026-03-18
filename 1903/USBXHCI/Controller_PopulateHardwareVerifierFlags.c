/*
 * XREFs of Controller_PopulateHardwareVerifierFlags @ 0x1C0060E7C
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0013B50 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     RtlUnicodeStringPrintf @ 0x1C0014624 (RtlUnicodeStringPrintf.c)
 */

int __fastcall Controller_PopulateHardwareVerifierFlags(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned __int8 v3; // al
  void *v4; // rsi
  int result; // eax
  int v6; // edi
  unsigned __int16 v7; // r9
  __int64 v8; // [rsp+28h] [rbp-59h]
  __int64 v9; // [rsp+30h] [rbp-51h]
  __int64 v10; // [rsp+48h] [rbp-39h] BYREF
  __int64 v11; // [rsp+50h] [rbp-31h] BYREF
  __int64 v12; // [rsp+58h] [rbp-29h] BYREF
  __int64 v13; // [rsp+60h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  char v15; // [rsp+78h] [rbp-9h] BYREF

  *(_QWORD *)&DestinationString.Length = 3407872LL;
  v13 = 0LL;
  v2 = *(_BYTE *)(a1 + 320);
  DestinationString.Buffer = (wchar_t *)&v15;
  v12 = 0LL;
  v3 = *(_BYTE *)(a1 + 321);
  v11 = 0LL;
  v10 = 0LL;
  if ( v2 )
  {
    if ( (v2 != 1 || v3) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(*(_QWORD *)(a1 + 72), 3u, 4u, 0xD0u, (__int64)&Context.Logger + 4, v2, v3);
    v4 = &g_HwVerifierxHCI10;
  }
  else
  {
    v4 = &g_HwVerifierxHCI96;
  }
  result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             0LL,
             &g_HwVerifierKeyName,
             131097LL,
             0LL,
             &v12);
  v6 = result;
  if ( result < 0 )
  {
    v12 = 0LL;
    goto LABEL_55;
  }
  result = *(_DWORD *)(a1 + 244);
  if ( result == 1 )
  {
    LODWORD(v8) = *(unsigned __int8 *)(a1 + 256);
    result = RtlUnicodeStringPrintf(
               &DestinationString,
               L"%04X%04X%02X",
               *(unsigned __int16 *)(a1 + 248),
               *(unsigned __int16 *)(a1 + 252),
               v8);
  }
  else
  {
    if ( result != 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        result = WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xD1u, (__int64)&Context.Logger + 4);
      goto LABEL_55;
    }
    result = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1 + 304, a1 + 309, a1 + 314);
  }
  v6 = result;
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v7 = 210;
    goto LABEL_17;
  }
  result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v12,
             &DestinationString,
             131097LL,
             0LL,
             &v11);
  v6 = result;
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v11,
               v4,
               131097LL,
               0LL,
               &v10);
    v6 = result;
    if ( result >= 0 )
    {
      result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 v10,
                 &g_HwVerifierControllerName,
                 8LL,
                 &v13,
                 0LL,
                 0LL);
      v6 = result;
      if ( result >= 0 )
        goto LABEL_55;
    }
    else
    {
      v10 = 0LL;
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( v6 == -1073741772 )
  {
    if ( v10 )
    {
      (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
      v10 = 0LL;
    }
    if ( v11 )
    {
      (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
      v11 = 0LL;
    }
    result = *(_DWORD *)(a1 + 244);
    if ( result == 1 )
    {
      result = RtlUnicodeStringPrintf(
                 &DestinationString,
                 L"%04X%04X",
                 *(unsigned __int16 *)(a1 + 248),
                 *(unsigned __int16 *)(a1 + 252));
    }
    else
    {
      if ( result != 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          result = WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xD3u, (__int64)&Context.Logger + 4);
        *(_QWORD *)(a1 + 448) = 0LL;
        goto LABEL_60;
      }
      result = RtlUnicodeStringPrintf(&DestinationString, L"%S%S", a1 + 304, a1 + 309);
    }
    v6 = result;
    if ( result >= 0 )
    {
      result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 v12,
                 &DestinationString,
                 131097LL,
                 0LL,
                 &v11);
      v6 = result;
      if ( result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   v11,
                   v4,
                   131097LL,
                   0LL,
                   &v10);
        v6 = result;
        if ( result >= 0 )
        {
          result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     v10,
                     &g_HwVerifierControllerName,
                     8LL,
                     &v13,
                     0LL,
                     0LL);
          v6 = result;
          if ( result >= 0 )
            goto LABEL_55;
        }
        else
        {
          v10 = 0LL;
        }
      }
      else
      {
        v11 = 0LL;
      }
      if ( v6 == -1073741772 )
      {
        if ( v10 )
        {
          (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
          v10 = 0LL;
        }
        if ( v11 )
        {
          (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
          v11 = 0LL;
        }
        result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   v12,
                   &g_HwVerifierGlobalName,
                   131097LL,
                   0LL,
                   &v11);
        v6 = result;
        if ( result >= 0 )
        {
          result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     v11,
                     v4,
                     131097LL,
                     0LL,
                     &v10);
          v6 = result;
          if ( result >= 0 )
          {
            result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                       v10,
                       &g_HwVerifierControllerName,
                       8LL,
                       &v13,
                       0LL,
                       0LL);
            v6 = result;
          }
          else
          {
            v10 = 0LL;
          }
        }
        else
        {
          v11 = 0LL;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 212;
LABEL_17:
      LODWORD(v9) = v6;
      result = WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 4u, v7, (__int64)&Context.Logger + 4, v9);
    }
  }
LABEL_55:
  if ( v6 >= 0 )
  {
    result = v13;
    *(_QWORD *)(a1 + 448) = v13;
  }
  else
  {
    *(_QWORD *)(a1 + 448) = 0LL;
    if ( v6 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_62;
      LODWORD(v9) = v6;
      result = WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 4u, 0xD5u, (__int64)&Context.Logger + 4, v9);
    }
  }
LABEL_60:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_i(*(_QWORD *)(a1 + 72), 4u, 4u, 0xD6u, (__int64)&Context.Logger + 4, *(_QWORD *)(a1 + 448));
LABEL_62:
  if ( v10 )
    result = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  if ( v11 )
    result = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  if ( v12 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return result;
}
