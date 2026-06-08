/*
 * XREFs of PepNotifyQueryDiscretePerfStates @ 0x1C0037EF4
 * Callers:
 *     InitPepPerfStates @ 0x1C0037784 (InitPepPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyQueryDiscretePerfStates(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // ebx
  int v6; // [rsp+28h] [rbp-20h]
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 1104);
  v7[1] = 0;
  v8 = a3;
  v7[0] = a2;
  v4 = PoFxProcessorNotification(v3, 41LL, v7);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x22u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      v6);
  }
  return (unsigned int)v4;
}
