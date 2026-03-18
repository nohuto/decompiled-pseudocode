/*
 * XREFs of ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0092B70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C0092C0C (-IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C013FB78 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C014D2CC (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceClosed(CHidInput *this, struct DEVICEINFO *a2)
{
  struct DEVICEINFO *v3; // r8
  unsigned int v4; // edi
  __int64 v5; // r8
  CTouchProcessor *v6; // rcx
  int v7; // r9d
  CHidInput *v8; // r10

  v3 = CBaseInput::_spDevList;
  v4 = 0;
  while ( v3 )
  {
    CHidInput::IsPublicPointerDevice(this, v3);
    if ( (struct DEVICEINFO *)v5 == a2 )
      break;
    v3 = *(struct DEVICEINFO **)(v5 + 56);
  }
  if ( (unsigned int)CHidInput::IsPublicPointerDevice(this, a2) )
  {
    v4 = v7 + 1;
    CHidInput::UpdatePointerDeviceCount(v8, 2u);
  }
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 && WPP_MAIN_CB.Queue.ListEntry.Blink )
    CTouchProcessor::OnRimDeviceClosed(v6, *(void **)a2);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_InputVirtualization__private_propertyCache,
    16291462,
    (unsigned int)&unk_1C01933C8,
    0,
    3);
  return v4;
}
