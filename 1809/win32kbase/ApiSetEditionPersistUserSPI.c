/*
 * XREFs of ApiSetEditionPersistUserSPI @ 0x1C01627F8
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00688C0 (xxxSystemParametersInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPersistUserSPI(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x130u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  v6 = 0;
  if ( (int)IsEditionPersistUserSPISupported() >= 0 )
    v6 = EditionPersistUserSPI(a1, a2, a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x131u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v6;
}
