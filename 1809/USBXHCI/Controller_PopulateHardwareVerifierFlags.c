/*
 * XREFs of Controller_PopulateHardwareVerifierFlags @ 0x1C0059B24
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0010F70 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     RtlUnicodeStringPrintf @ 0x1C0011C24 (RtlUnicodeStringPrintf.c)
 */

__int64 __fastcall Controller_PopulateHardwareVerifierFlags(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned __int8 v3; // al
  void *v4; // rsi
  int v5; // edi
  int v6; // eax
  NTSTATUS v7; // eax
  unsigned __int16 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // [rsp+28h] [rbp-59h]
  __int64 v15; // [rsp+30h] [rbp-51h]
  __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  __int64 v17; // [rsp+50h] [rbp-31h] BYREF
  __int64 v18; // [rsp+58h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  char v21; // [rsp+78h] [rbp-9h] BYREF

  *(_DWORD *)&DestinationString.Length = 3407872;
  v19 = 0LL;
  v2 = *(_BYTE *)(a1 + 256);
  DestinationString.Buffer = (wchar_t *)&v21;
  v18 = 0LL;
  v3 = *(_BYTE *)(a1 + 257);
  v17 = 0LL;
  v16 = 0LL;
  if ( v2 )
  {
    if ( v2 != 1 || v3 )
      WPP_RECORDER_SF_dd(*(_QWORD *)(a1 + 72), 3u, 4u, 0xCDu, (__int64)&Context.Logger + 4, v2, v3);
    v4 = &g_HwVerifierxHCI10;
  }
  else
  {
    v4 = &g_HwVerifierxHCI96;
  }
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023
                                                                                               + 1832))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         0LL,
         &g_HwVerifierKeyName,
         131097LL,
         0LL,
         &v18);
  if ( v5 < 0 )
  {
    v18 = 0LL;
    goto LABEL_51;
  }
  v6 = *(_DWORD *)(a1 + 180);
  if ( v6 == 1 )
  {
    LODWORD(v14) = *(unsigned __int8 *)(a1 + 192);
    v7 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"%04X%04X%02X",
           *(unsigned __int16 *)(a1 + 184),
           *(unsigned __int16 *)(a1 + 188),
           v14);
  }
  else
  {
    if ( v6 != 2 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xCEu, (__int64)&Context.Logger + 4);
      goto LABEL_51;
    }
    v7 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1 + 240, a1 + 245, a1 + 250);
  }
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 207;
LABEL_15:
    LODWORD(v15) = v5;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 4u, v8, (__int64)&Context.Logger + 4, v15);
    goto LABEL_51;
  }
  v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         v18,
         &DestinationString,
         131097LL,
         0LL,
         &v17);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023
                                                                                                  + 1832))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v17,
           v4,
           131097LL,
           0LL,
           &v16);
    if ( v5 < 0 )
    {
      v9 = 0LL;
      v16 = 0LL;
      goto LABEL_22;
    }
    v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v16,
           &g_HwVerifierControllerName,
           8LL,
           &v19,
           0LL,
           0LL);
    if ( v5 >= 0 )
      goto LABEL_51;
  }
  else
  {
    v17 = 0LL;
  }
  v9 = v16;
LABEL_22:
  if ( v5 == -1073741772 )
  {
    if ( v9 )
    {
      (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
      v16 = 0LL;
    }
    if ( v17 )
    {
      (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
      v17 = 0LL;
    }
    v10 = *(_DWORD *)(a1 + 180);
    if ( v10 == 1 )
    {
      v11 = RtlUnicodeStringPrintf(
              &DestinationString,
              L"%04X%04X",
              *(unsigned __int16 *)(a1 + 184),
              *(unsigned __int16 *)(a1 + 188));
    }
    else
    {
      if ( v10 != 2 )
      {
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xD0u, (__int64)&Context.Logger + 4);
        *(_QWORD *)(a1 + 384) = 0LL;
        goto LABEL_55;
      }
      v11 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S", a1 + 240, a1 + 245);
    }
    v5 = v11;
    if ( v11 < 0 )
    {
      v8 = 209;
      goto LABEL_15;
    }
    v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v18,
           &DestinationString,
           131097LL,
           0LL,
           &v17);
    if ( v5 < 0 )
    {
      v17 = 0LL;
      goto LABEL_38;
    }
    v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023
                                                                                                  + 1832))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v17,
           v4,
           131097LL,
           0LL,
           &v16);
    if ( v5 < 0 )
    {
      v12 = 0LL;
      v16 = 0LL;
      goto LABEL_39;
    }
    v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
           WPP_MAIN_CB.Dpc.ProcessorHistory,
           v16,
           &g_HwVerifierControllerName,
           8LL,
           &v19,
           0LL,
           0LL);
    if ( v5 < 0 )
    {
LABEL_38:
      v12 = v16;
LABEL_39:
      if ( v5 == -1073741772 )
      {
        if ( v12 )
        {
          (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
          v16 = 0LL;
        }
        if ( v17 )
        {
          (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
          v17 = 0LL;
        }
        v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
               WPP_MAIN_CB.Dpc.ProcessorHistory,
               v18,
               &g_HwVerifierGlobalName,
               131097LL,
               0LL,
               &v17);
        if ( v5 >= 0 )
        {
          v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 v17,
                 v4,
                 131097LL,
                 0LL,
                 &v16);
          if ( v5 >= 0 )
            v5 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   v16,
                   &g_HwVerifierControllerName,
                   8LL,
                   &v19,
                   0LL,
                   0LL);
          else
            v16 = 0LL;
        }
        else
        {
          v17 = 0LL;
        }
      }
    }
  }
LABEL_51:
  if ( v5 >= 0 )
  {
    *(_QWORD *)(a1 + 384) = v19;
  }
  else
  {
    *(_QWORD *)(a1 + 384) = 0LL;
    if ( v5 != -1073741772 )
    {
      LODWORD(v15) = v5;
      WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 4u, 0xD2u, (__int64)&Context.Logger + 4, v15);
    }
  }
LABEL_55:
  result = WPP_RECORDER_SF_i(*(_QWORD *)(a1 + 72), 4u, 4u, 0xD3u, (__int64)&Context.Logger + 4, *(_QWORD *)(a1 + 384));
  if ( v16 )
    result = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  if ( v17 )
    result = (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  if ( v18 )
    return (*(__int64 (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1848))(WPP_MAIN_CB.Dpc.ProcessorHistory);
  return result;
}
