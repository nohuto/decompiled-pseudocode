/*
 * XREFs of ESM_LogUnhandledEvent @ 0x1C003FF54
 * Callers:
 *     ESM_FindAndSetTargetState @ 0x1C003FBB8 (ESM_FindAndSetTargetState.c)
 * Callees:
 *     WPP_RECORDER_SF_qdd @ 0x1C0012590 (WPP_RECORDER_SF_qdd.c)
 */

char __fastcall ESM_LogUnhandledEvent(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v4; // rcx
  char result; // al
  int v9; // [rsp+38h] [rbp-10h]
  int v10; // [rsp+38h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 852);
  v4 = *(_QWORD *)(a1 + 960);
  if ( *(_DWORD *)(a1 + 976) == 2000 )
  {
    v10 = v2;
    WPP_RECORDER_SF_qdd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0xAu,
      (__int64)&WPP_29ae111cbb673506245d3cd655818b06_Traceguids,
      v4,
      a2,
      v10);
    if ( !KdRefreshDebuggerNotPresent() )
      DbgPrint(
        "ESM 0x%p: is not handling Event %u, Current Top Level State is %u\n",
        *(const void **)(a1 + 960),
        a2,
        *(_DWORD *)(a1 + 852));
  }
  else
  {
    v9 = v2;
    WPP_RECORDER_SF_qdd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0xBu,
      (__int64)&WPP_29ae111cbb673506245d3cd655818b06_Traceguids,
      v4,
      a2,
      v9);
  }
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
  {
    result = DbgPrint("Unhandled event in USBXHCI Endpoint State Machine\n");
    __debugbreak();
  }
  return result;
}
