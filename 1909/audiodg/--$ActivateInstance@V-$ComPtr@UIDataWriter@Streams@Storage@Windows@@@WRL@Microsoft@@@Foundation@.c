/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIDataWriter@Streams@Storage@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x140043D54
 * Callers:
 *     ?CMModulesNotificationCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x140046AA0 (-CMModulesNotificationCallback@AudioDeviceBroker@Internal@Devices@Media@Windows@@CAKPEAUHCMNOTIF.c)
 *     ?OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@Internal@234@PEAUIAudioDeviceBrokerChangedEventArgs@6234@@Z @ 0x140049E70 (-OnModuleChanged@AudioDeviceModulesManager@Devices@Media@Windows@@QEAAJPEAUIAudioDeviceBroker@In.c)
 *     ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14004B850 (-SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001368C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataWriter>>(
        __int64 a1,
        __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  *a2 = 0LL;
  v4 = RoActivateInstance(a1, &v7);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)&GUID_64b89265_d341_4922_b38a_dd4af8808c4e.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_64b89265_d341_4922_b38a_dd4af8808c4e.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v5 = *(_QWORD *)GUID_64b89265_d341_4922_b38a_dd4af8808c4e.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v5 )
    {
      v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
             v7,
             &GUID_64b89265_d341_4922_b38a_dd4af8808c4e,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a2 = v7;
    }
  }
  return (unsigned int)v4;
}
