/*
 * XREFs of ??$As@UIImmersiveMonitorNotificationService@@@?$ComPtr@UIImmersiveMonitorNotificationService@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitorNotificationService@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AB338
 * Callers:
 *     ?RegisterForMonitorNotification@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B1890 (-RegisterForMonitorNotification@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ @ 0x1801B977C (-RegisterForMonitorNotification@CInsightsExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveMonitorNotificationService>::As<IImmersiveMonitorNotificationService>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v4(v2, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, a2);
}
