/*
 * XREFs of RIMGetVirtualDesktopPhysicalSize @ 0x1C00E92F0
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutputConfig@@PEAUCRegionConfig@@@Z @ 0x1C00551B8 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutp.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetVirtualDesktopPhysicalSize(__int64 a1)
{
  int v2; // r9d
  __int64 v3; // rcx
  unsigned __int64 v4; // xmm0_8

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v2 = *((unsigned __int16 *)gpsi + 3499);
  v3 = *(_QWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v4 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)gpDispInfo + 24LL), 8).m128i_u64[0];
  *(_DWORD *)(a1 + 8) = 2540 * ((int)v4 - (int)v3) / v2;
  *(_DWORD *)(a1 + 12) = 2540 * (HIDWORD(v4) - HIDWORD(v3)) / v2;
  return a1;
}
