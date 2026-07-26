/*
 * XREFs of ndisQueryDeviceFlags @ 0x1C00CAF4C
 * Callers:
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C001E47C (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_Sd @ 0x1C0051C6C (WPP_SF_Sd.c)
 *     WPP_SF_Si @ 0x1C0065398 (WPP_SF_Si.c)
 */

void __fastcall ndisQueryDeviceFlags(const wchar_t *a1, _QWORD *a2)
{
  __int64 v3; // rax
  SIZE_T v5; // rbp
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rsi
  int DeviceFlags; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx

  *a2 = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  v5 = 2 * v3 + 12;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x2020444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlStringCbPrintfW(PoolWithTag, v5, L"%ws:%ws", L"NDIS", a1);
    DeviceFlags = KseQueryDeviceFlags(v7, L"NdisMp", a2);
    if ( DeviceFlags >= 0 )
    {
      if ( (unsigned __int8)byte_1C00A025C >= 4u )
        WPP_SF_Si(v10, v9, a1, *a2);
    }
    else if ( (unsigned __int8)byte_1C00A025C >= 4u )
    {
      WPP_SF_Sd(0x73u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, a1, DeviceFlags);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else if ( (unsigned __int8)byte_1C00A025C >= 2u )
  {
    WPP_SF_(0x71u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
  }
}
