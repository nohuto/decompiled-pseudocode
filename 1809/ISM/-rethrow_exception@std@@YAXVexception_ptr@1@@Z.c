/*
 * XREFs of ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18003C6E0
 * Callers:
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x18003C720 (_lambda_3bf0c1641773c9cead522fb3b6204044_--operator().c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18003F964 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18004541C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180047A44 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18005ABA0 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x18006B260 (-OnRawGameControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Inp.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800EE828 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?InitializeConstants@MPCSixDofProcessor@@EEAAXXZ @ 0x1800EE9F0 (-InitializeConstants@MPCSixDofProcessor@@EEAAXXZ.c)
 *     ?InitializeConstants@MPCProcessor@@EEAAXXZ @ 0x1800F5F30 (-InitializeConstants@MPCProcessor@@EEAAXXZ.c)
 *     ?InitializeConstants@MPCGamepadProcessor@@EEAAXXZ @ 0x1800F8190 (-InitializeConstants@MPCGamepadProcessor@@EEAAXXZ.c)
 *     ?InitializeConstants@MPCMouseProcessor@@EEAAXXZ @ 0x1800FB470 (-InitializeConstants@MPCMouseProcessor@@EEAAXXZ.c)
 *     ?InitializeConstants@MPCHeadProcessor@@EEAAXXZ @ 0x1800FEDE0 (-InitializeConstants@MPCHeadProcessor@@EEAAXXZ.c)
 *     ?InitializeConstants@MPCClickerProcessor@@EEAAXXZ @ 0x1800FF2D0 (-InitializeConstants@MPCClickerProcessor@@EEAAXXZ.c)
 * Callees:
 *     ?_RethrowException@exception_ptr@std@@QEBAXXZ @ 0x18003C6CC (-_RethrowException@exception_ptr@std@@QEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall __noreturn std::rethrow_exception(std::exception_ptr *a1)
{
  std::exception_ptr::_RethrowException(a1);
}
