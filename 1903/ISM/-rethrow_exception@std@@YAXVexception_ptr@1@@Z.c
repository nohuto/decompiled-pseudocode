/*
 * XREFs of ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x18007CCF8
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1800071E0 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18001FDF0 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180020148 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800213D8 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021840 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x18002201C (_lambda_3bf0c1641773c9cead522fb3b6204044_--operator().c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800863AC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180087624 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18009794C (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     std::call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider___ @ 0x1800A71D8 (std--call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider___.c)
 *     ?RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18012C360 (-RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x18012EA34 (std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801301F0 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180131A54 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x180135510 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180136880 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180137910 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180139048 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013EE14 (-RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013F324 (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801407C4 (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn std::rethrow_exception(const void *a1)
{
  __ExceptionPtrRethrow(a1);
  JUMPOUT(0x18007CD10LL);
}
