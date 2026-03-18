/*
 * XREFs of RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0058258
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00566D0 (RIMUnregisterForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0056A80 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMRemoveInputOfType @ 0x1C0059BC0 (RIMRemoveInputOfType.c)
 *     _lambda_b69e77e0fe9f52d9f607e8c4f2045e39_::operator() @ 0x1C00BD358 (_lambda_b69e77e0fe9f52d9f607e8c4f2045e39_--operator().c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C0058340 (DeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMUnRegisterForInputDeviceTypeClassNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v5; // rbx
  char v6; // [rsp+30h] [rbp-18h]

  v3 = a2;
  if ( ((unsigned int)DeviceTypeToRimInputType(a2) & *(_DWORD *)(a1 + 84)) != 0
    && *(_QWORD *)(a1 + 8 * v3 + 224)
    && !*(_DWORD *)(a1 + 4 * v3 + 296) )
  {
    v5 = *(_QWORD *)(a1 + 8 * v3 + 312);
    *(_QWORD *)(v5 + 88) = a1;
    v6 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 312) + 96LL) = v3;
    KeInitializeApc(
      v5,
      KeGetCurrentThread(),
      0LL,
      ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers,
      rimRundownApcIoUnregisterPlugPlayNotificationEx,
      rimNormalApcIoUnregisterPlugPlayNotificationEx,
      v6,
      v5 + 88);
    KeInsertQueueApc(v5, v5, 0LL, 0LL);
    *(_DWORD *)(a1 + 4 * v3 + 296) = 1;
  }
  return 0LL;
}
