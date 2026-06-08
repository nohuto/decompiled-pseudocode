/*
 * XREFs of PepNotifyQueryDiscretePerfStates @ 0x1C00350E4
 * Callers:
 *     InitPepPerfStates @ 0x1C0034B10 (InitPepPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyQueryDiscretePerfStates(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-20h]
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 1088);
  v8[1] = a3;
  v8[0] = a2;
  v4 = PoFxProcessorNotification(v3, 41LL, v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x22u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      v7);
  }
  return v5;
}
