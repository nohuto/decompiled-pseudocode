/*
 * XREFs of ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0095780
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     HMRemoveHandleForObject @ 0x1C00657F0 (HMRemoveHandleForObject.c)
 *     HMMarkObjectDestroy @ 0x1C00659B0 (HMMarkObjectDestroy.c)
 *     ?IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C0092C0C (-IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014BB20 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C014CA7C (-LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C016541C (ApiSetUpdatePointerDeviceSystemMetrics.c)
 */

bool __fastcall CHidInput::OnRIMDeviceDestroyed(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  bool v4; // di
  __int64 v6; // rbx
  CHidInput *v7; // rcx
  bool v8; // si
  int v9; // eax

  v4 = 1;
  if ( (*((_DWORD *)a2 + 72) & 0x80u) != 0 )
  {
    v6 = *((_QWORD *)a2 + 71);
    v8 = 1;
    if ( (*((_DWORD *)a3 + 46) & 0x2000) == 0 )
    {
      CHidInput::LogDeviceRemovedEvent(
        (CHidInput *)(v6 + 312),
        *(_WORD *)(*((_QWORD *)a2 + 69) + 40LL),
        *(unsigned __int16 *)(*((_QWORD *)a2 + 69) + 110LL),
        *(unsigned __int16 *)(*((_QWORD *)a2 + 69) + 112LL),
        *(_DWORD *)(v6 + 24),
        *(_DWORD *)(v6 + 712),
        *(_DWORD *)(v6 + 24) == 6,
        (struct _UNICODE_STRING *)(v6 + 312),
        (struct _UNICODE_STRING *)(v6 + 840));
      if ( (*((_DWORD *)a3 + 46) & 0x2000) == 0 && !CHidInput::IsPublicPointerDevice(v7, a3) )
        v8 = 0;
    }
    if ( *(_QWORD *)(v6 + 992) )
      CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v6);
    HMUnlockObject(v6);
    v9 = *(_DWORD *)(v6 + 8);
    v4 = v9 == 0;
    if ( !v9 )
    {
      HMMarkObjectDestroy((_DWORD *)v6);
      HMRemoveHandleForObject((int *)v6);
      v4 = 1;
    }
    if ( v8 )
      ApiSetUpdatePointerDeviceSystemMetrics(0LL);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (unsigned int)&Feature_InputVirtualization__private_propertyCache,
      16291462,
      (unsigned int)&unk_1C01933C8,
      0,
      3);
  }
  return v4;
}
