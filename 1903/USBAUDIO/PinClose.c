/*
 * XREFs of PinClose @ 0x1C00221F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     PinRemovePinFromList @ 0x1C0002288 (PinRemovePinFromList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PinClose(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // ebx

  v2 = a1[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      8u,
      0x10u,
      (__int64)&WPP_cc9c4cff163931cb0937dd2acbce6db6_Traceguids,
      a1);
  --*(_DWORD *)(*(_QWORD *)(v2 + 32) + 140LL);
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)(*(_QWORD *)(v2 + 144) + 128LL) + 8LL))(a1);
  PinRemovePinFromList(a1);
  return v4;
}
