/*
 * XREFs of ApiSetEditionPostMouseWheelToForeground @ 0x1C0162FCC
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostMouseWheelToForeground(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8,
        __int64 *a9)
{
  __int64 result; // rax
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-20h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x34u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  result = IsEditionPostMouseWheelToForegroundSupported();
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
    if ( a8 )
      v15 = *a8;
    v14 = 0LL;
    if ( a9 )
      v14 = *a9;
    result = EditionPostMouseWheelToForeground(
               a1,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7,
               (unsigned __int64)&v15 & -(__int64)(a8 != 0LL),
               (unsigned __int64)&v14 & -(__int64)(a9 != 0LL));
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x35u,
             (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return result;
}
