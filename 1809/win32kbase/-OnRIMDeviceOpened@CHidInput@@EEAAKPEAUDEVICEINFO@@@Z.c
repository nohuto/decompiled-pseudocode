/*
 * XREFs of ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0092B00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C0092C0C (-IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C013FC54 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C014D2CC (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceOpened(CHidInput *this, struct DEVICEINFO *a2)
{
  unsigned int v2; // ebx
  CHidInput *v5; // rcx
  void *v7; // rdx

  v2 = 0;
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
  {
    v7 = *(void **)a2;
    if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
      CTouchProcessor::OnRimDeviceOpened(this, v7);
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_InputVirtualization__private_propertyCache,
    16291462,
    (unsigned int)&unk_1C01933C8,
    0,
    3);
  if ( (unsigned int)CHidInput::IsPublicPointerDevice(v5, a2) )
    return CHidInput::UpdatePointerDeviceCount(this, 1u);
  return v2;
}
