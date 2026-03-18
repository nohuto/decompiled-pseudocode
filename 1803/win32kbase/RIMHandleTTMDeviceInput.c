/*
 * XREFs of RIMHandleTTMDeviceInput @ 0x1C00F6898
 * Callers:
 *     rimSignalReadComplete @ 0x1C00FF81C (rimSignalReadComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall RIMHandleTTMDeviceInput(__int64 a1)
{
  int v2; // [rsp+28h] [rbp-10h]

  if ( gbTtmEnabled && !*(_DWORD *)(a1 + 824) && (*(_DWORD *)(a1 + 200) & 0x40) == 0 )
    TtmNotifyDeviceInput(2LL, a1, (*(_DWORD *)(*(_QWORD *)(a1 + 336) + 76LL) & gWakeOnDeviceTypes) != 0);
  v2 = 0;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xFu,
    (__int64)&WPP_6f93d23ab5493b07c801fc1105033033_Traceguids,
    v2);
  return 0LL;
}
