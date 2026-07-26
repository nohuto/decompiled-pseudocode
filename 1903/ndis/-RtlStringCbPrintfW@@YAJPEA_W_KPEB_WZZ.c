/*
 * XREFs of ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002F0E4
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C002D114 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z @ 0x1C00BFC9C (-ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C0116278 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x1C0121E68 (-ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x1C0121F18 (-ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C0121FEC (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C01220D0 (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCbPrintfW(wchar_t *Dest, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *Dest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf(Dest, v3 - 1, a3, Args);
    if ( v7 < 0 )
      goto LABEL_9;
    if ( v7 == v6 )
    {
      Dest[v6] = 0;
      return (unsigned int)v5;
    }
    if ( v7 > v6 )
    {
LABEL_9:
      Dest[v6] = 0;
      return (unsigned int)-2147483643;
    }
  }
  return (unsigned int)v5;
}
