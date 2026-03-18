/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C0094F90
 * Callers:
 *     <none>
 * Callees:
 *     HMCreateHandleForObject @ 0x1C008D8D0 (HMCreateHandleForObject.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ?LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C014C928 (-LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(CHidInput *this, struct RawInputManagerDeviceObject *a2, void *a3)
{
  char v5; // si
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // r10

  v5 = 1;
  if ( (*((_DWORD *)a2 + 72) & 0x80u) != 0 )
  {
    v8 = HMCreateHandleForObject(*((_QWORD *)a2 + 71), 22);
    if ( v8 )
    {
      v5 = 1;
      v10 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)a3);
      if ( *(_DWORD *)(v10 + 8) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v7, v9);
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      if ( *(_QWORD *)(v8 + 728) != -1LL )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v7, v9);
      *(_QWORD *)(v8 + 728) = a3;
      v11 = *(_DWORD *)(v8 + 712);
      if ( (int)IsEditionRegAddRemovePointerDeviceSystemMetricKeySupported() >= 0 )
        EditionRegAddRemovePointerDeviceSystemMetricKey(v11);
      if ( (*(_DWORD *)(v8 + 308) & 0x20) == 0 )
      {
        v12 = *((_QWORD *)a2 + 71);
        CHidInput::LogDeviceArrivedEvent(
          (CHidInput *)(v12 + 312),
          *(_WORD *)(*((_QWORD *)a2 + 69) + 40LL),
          *(unsigned __int16 *)(*((_QWORD *)a2 + 69) + 110LL),
          *(unsigned __int16 *)(*((_QWORD *)a2 + 69) + 112LL),
          *(_DWORD *)(v12 + 24),
          *(_DWORD *)(v12 + 712),
          *(_DWORD *)(v12 + 24) == 6,
          (struct _UNICODE_STRING *)(v12 + 312),
          (struct _UNICODE_STRING *)(v12 + 840));
      }
    }
    else
    {
      v5 = 0;
    }
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_InputVirtualization__private_propertyCache,
    16291462,
    (unsigned int)&unk_1C01933C8,
    0,
    3);
  return v5;
}
