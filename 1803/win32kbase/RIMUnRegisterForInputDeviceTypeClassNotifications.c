/*
 * XREFs of RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00FB4D4
 * Callers:
 *     RIMDirectStopDeviceClassNotifications @ 0x1C00E1420 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMRemoveInputOfType @ 0x1C00E55D0 (RIMRemoveInputOfType.c)
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     rimPassivateSecondaryRims @ 0x1C00FD684 (rimPassivateSecondaryRims.c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C00DF1B0 (DeviceTypeToRimInputType.c)
 */

__int64 __fastcall RIMUnRegisterForInputDeviceTypeClassNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  char v6; // [rsp+30h] [rbp-18h]

  v3 = a2;
  if ( ((unsigned int)DeviceTypeToRimInputType(a2) & *(_DWORD *)(a1 + 76)) != 0
    && *(_QWORD *)(a1 + 8 * v3 + 216)
    && !*(_DWORD *)(a1 + 4 * v3 + 288) )
  {
    v4 = *(_QWORD *)(a1 + 8 * v3 + 304);
    *(_QWORD *)(v4 + 88) = a1;
    v6 = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 304) + 96LL) = v3;
    KeInitializeApc(
      v4,
      KeGetCurrentThread(),
      0LL,
      ext_ms_win_moderncore_win32k_base_ntuser_l1_1_0_FreezeThawTimers,
      rimRundownApcIoUnregisterPlugPlayNotificationEx,
      rimNormalApcIoUnregisterPlugPlayNotificationEx,
      v6,
      v4 + 88);
    KeInsertQueueApc(v4, v4, 0LL, 0LL);
    *(_DWORD *)(a1 + 4 * v3 + 288) = 1;
  }
  return 0LL;
}
