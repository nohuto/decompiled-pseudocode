/*
 * XREFs of PinProcess @ 0x1C0021110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PinProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0x12u,
      (__int64)&WPP_581cd5a23f8d3810993dda0b9590c4f9_Traceguids,
      a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v2 + 144) + 128LL) + 16LL))(a1);
}
