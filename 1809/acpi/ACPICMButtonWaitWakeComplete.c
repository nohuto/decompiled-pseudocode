/*
 * XREFs of ACPICMButtonWaitWakeComplete @ 0x1C004CF80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 */

void __fastcall ACPICMButtonWaitWakeComplete(
        ULONG_PTR DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _QWORD *DeviceExtension; // rax
  char v6; // dl
  void *v7; // rcx
  void *v8; // r8
  __int64 v9; // r10
  unsigned __int16 v10; // r9
  void *v11; // r10
  unsigned __int8 v12; // al
  __int64 v13; // r10

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(DeviceObject);
  v6 = 0;
  v7 = &unk_1C006E28A;
  v8 = &unk_1C006E28A;
  if ( IoStatus->Status >= 0 )
  {
    if ( DeviceExtension )
    {
      v13 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v7 = (void *)DeviceExtension[70];
        if ( (v13 & 0x400000000000LL) != 0 )
          v8 = (void *)DeviceExtension[71];
      }
    }
    v10 = 22;
    v11 = WPP_GLOBAL_Control->DeviceExtension;
    v12 = 4;
  }
  else
  {
    if ( DeviceExtension )
    {
      v9 = DeviceExtension[1];
      v6 = (char)DeviceExtension;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v7 = (void *)DeviceExtension[70];
        if ( (v9 & 0x400000000000LL) != 0 )
          v8 = (void *)DeviceExtension[71];
      }
    }
    v10 = 21;
    v11 = WPP_GLOBAL_Control->DeviceExtension;
    v12 = 2;
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)v11,
    v12,
    0x11u,
    v10,
    (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
    IoStatus->Status,
    v6,
    (__int64)v7,
    (__int64)v8);
}
