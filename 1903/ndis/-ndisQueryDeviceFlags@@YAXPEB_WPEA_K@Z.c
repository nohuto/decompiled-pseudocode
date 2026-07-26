/*
 * XREFs of ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C002D114
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C002EFDC (WPP_RECORDER_SF_Sd.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002F0E4 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_Si @ 0x1C009F1D4 (WPP_RECORDER_SF_Si.c)
 */

void __fastcall ndisQueryDeviceFlags(const wchar_t *a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  SIZE_T v5; // rbp
  wchar_t *PoolWithTag; // rax
  int v7; // edx
  wchar_t *v8; // rsi
  int DeviceFlags; // eax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d

  *a2 = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  v5 = 2 * v3 + 12;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x2020444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlStringCbPrintfW(PoolWithTag, v5, L"%ws:%ws", L"NDIS");
    DeviceFlags = KseQueryDeviceFlags(v8, L"NdisMp", a2);
    if ( DeviceFlags >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Si(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, v12, (_DWORD)a1, (__int64)a1, *a2);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v10,
        13,
        118,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (__int64)a1,
        DeviceFlags);
    }
    ExFreePoolWithTag(v8, 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      13,
      116,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
  }
}
