/*
 * XREFs of ?_Swap@?$_Func_class@XE@std@@IEAAXAEAV12@@Z @ 0x1800E6AD8
 * Callers:
 *     ?CallbackOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E1580 (-CallbackOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Win.c)
 *     std::function_void___cdecl(void)_::operator___lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_ @ 0x180149A84 (std--function_void___cdecl(void)_--operator___lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_.c)
 *     std::function_void___cdecl(void)_::operator___lambda_bb99315a2e04bb315428571541c06609__void_ @ 0x180149AEC (std--function_void___cdecl(void)_--operator___lambda_bb99315a2e04bb315428571541c06609__void_.c)
 *     ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@PEAUIHapticsTimerProvider@234@@Z @ 0x180167C7C (-RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V-$func.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180028AA4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@XPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@std@@IEAAX$$QEAV12@@Z @ 0x1800E6A80 (-_Reset_move@-$_Func_class@XPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions.c)
 */

__int64 __fastcall std::_Func_class<void,unsigned char>::_Swap(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  _BYTE v7[56]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+68h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 == a1 || (result = *(_QWORD *)(a2 + 56), result == a2) )
  {
    v8 = 0LL;
    std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
      (__int64)v7,
      a1);
    std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
      a1,
      a2);
    std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
      a2,
      (__int64)v7);
    return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v7, v6);
  }
  else
  {
    *(_QWORD *)(a1 + 56) = result;
    *(_QWORD *)(a2 + 56) = v4;
  }
  return result;
}
