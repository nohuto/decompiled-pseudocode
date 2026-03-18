/*
 * XREFs of ApiSetEditionLLMouseWheelHook @ 0x1C019CE28
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0192750 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionLLMouseWheelHook(__int64 a1, unsigned int a2, __int64 *a3, unsigned int a4)
{
  unsigned int v6; // ebp
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-20h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      178,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v8 = 0;
  if ( (int)IsEditionLLMouseWheelHookSupported() >= 0 )
  {
    v10 = *((_DWORD *)a3 + 2);
    v12 = *a3;
    v13 = v10;
    v8 = EditionLLMouseWheelHook(a1, v6, &v12, a4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      10,
      179,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v8;
}
