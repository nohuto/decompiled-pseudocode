/*
 * XREFs of std::function_void___cdecl(void)_::operator___lambda_bb99315a2e04bb315428571541c06609__void_ @ 0x180149AEC
 * Callers:
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18015E1D0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180028AA4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?_Swap@?$_Func_class@XE@std@@IEAAXAEAV12@@Z @ 0x1800E6AD8 (-_Swap@-$_Func_class@XE@std@@IEAAXAEAV12@@Z.c)
 */

__int64 __fastcall std::function_void___cdecl_void__::operator___lambda_bb99315a2e04bb315428571541c06609__void_(
        __int64 a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 v4; // rdx
  __int64 (__fastcall **v6)(); // [rsp+20h] [rbp-58h] BYREF
  __int128 v7; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall ***v8)(); // [rsp+58h] [rbp-20h]

  v2 = *a2;
  v6 = off_18017AEA0;
  v7 = v2;
  v8 = &v6;
  std::_Func_class<void,unsigned char>::_Swap((__int64)&v6, a1);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)&v6, v4);
  return a1;
}
