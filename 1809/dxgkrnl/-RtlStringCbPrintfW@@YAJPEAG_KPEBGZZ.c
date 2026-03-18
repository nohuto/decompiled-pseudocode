/*
 * XREFs of ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0002B74
 * Callers:
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C00029B8 (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     DpiGdoSetupGdiParameters @ 0x1C014778C (DpiGdoSetupGdiParameters.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C01496C8 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpOpenSpbResource @ 0x1C0270DC0 (DpOpenSpbResource.c)
 *     DpiPdoHandleQueryId @ 0x1C02768B0 (DpiPdoHandleQueryId.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C0295218 (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCbPrintfW(wchar_t *Dest, unsigned __int64 a2, const unsigned __int16 *a3, ...)
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
