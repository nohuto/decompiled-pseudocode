/*
 * XREFs of ApiSetEditionPostInertiaMessage @ 0x1C019B640
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C017BC68 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostInertiaMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  unsigned int v8; // ebp
  int v10; // edx

  v6 = 0;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      174,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsEditionPostInertiaMessageSupported() >= 0 )
    v6 = EditionPostInertiaMessage(a1, v8, a3, a4, a5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      10,
      175,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v6;
}
