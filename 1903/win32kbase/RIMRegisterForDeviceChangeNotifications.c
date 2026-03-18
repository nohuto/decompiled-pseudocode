/*
 * XREFs of RIMRegisterForDeviceChangeNotifications @ 0x1C00A6C0C
 * Callers:
 *     rimOnPnpArrived @ 0x1C00690B0 (rimOnPnpArrived.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C006C978 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_DSd @ 0x1C01516E8 (WPP_RECORDER_SF_DSd.c)
 */

__int64 __fastcall RIMRegisterForDeviceChangeNotifications(
        __int64 a1,
        struct _DRIVER_OBJECT *a2,
        __int64 a3,
        void *a4,
        PVOID *a5)
{
  void *v5; // r8
  NTSTATUS v7; // edi
  char v9; // al
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // [rsp+20h] [rbp-28h]

  v5 = *(void **)(a1 + 232);
  v7 = -1073741823;
  if ( v5 )
  {
    v7 = IoRegisterPlugPlayNotification(
           EventCategoryTargetDeviceChange,
           0,
           v5,
           a2,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)RIMDeviceNotify,
           a4,
           a5);
    if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_DSd(*(_QWORD *)(a1 + 216), v10, v11, v12, v13, v7, *(_QWORD *)(a1 + 216), v9);
    }
  }
  return (unsigned int)v7;
}
