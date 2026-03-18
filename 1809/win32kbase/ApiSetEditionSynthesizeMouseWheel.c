/*
 * XREFs of ApiSetEditionSynthesizeMouseWheel @ 0x1C0163984
 * Callers:
 *     NtMITSynthesizeMouseWheel @ 0x1C00EDAF0 (NtMITSynthesizeMouseWheel.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionSynthesizeMouseWheel(_OWORD *a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int128 v5; // xmm1
  _OWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xCAu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  v4 = 0;
  if ( (int)IsEditionSynthesizeMouseWheelSupported() >= 0 )
  {
    v5 = a1[1];
    v7[0] = *a1;
    v7[1] = v5;
    v4 = EditionSynthesizeMouseWheel(v7, a2);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0xCBu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v4;
}
