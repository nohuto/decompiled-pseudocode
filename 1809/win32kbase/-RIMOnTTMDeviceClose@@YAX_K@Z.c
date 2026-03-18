/*
 * XREFs of ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C01210A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 */

void __fastcall RIMOnTTMDeviceClose(__int64 a1)
{
  WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0x10u, (__int64)&WPP_6348e708fd723b9140a504851f6d1be1_Traceguids, a1);
  ObfDereferenceObject(*(PVOID *)(a1 + 32));
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x11u, (__int64)&WPP_6348e708fd723b9140a504851f6d1be1_Traceguids);
}
