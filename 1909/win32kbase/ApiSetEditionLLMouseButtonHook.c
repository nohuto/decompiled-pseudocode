/*
 * XREFs of ApiSetEditionLLMouseButtonHook @ 0x1C004E830
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionLLMouseButtonHook(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 v7; // rbp
  unsigned int v9; // ebx
  int v10; // edx
  __int64 v11; // xmm0_8
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      176,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v9 = 0;
  if ( (int)IsEditionLLMouseButtonHookSupported() >= 0 )
  {
    v11 = *a4;
    v14 = *((_DWORD *)a4 + 2);
    v13 = v11;
    v9 = EditionLLMouseButtonHook(a1, v7, a3, &v13, a5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      10,
      177,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v9;
}
