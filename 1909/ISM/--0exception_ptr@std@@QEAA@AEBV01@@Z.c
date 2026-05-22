/*
 * XREFs of ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x18007BD50
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1800071F0 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18001F910 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18001FC68 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180020EF8 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _lambda_3bf0c1641773c9cead522fb3b6204044_::operator() @ 0x180021B3C (_lambda_3bf0c1641773c9cead522fb3b6204044_--operator().c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18008616C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800873E4 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18009772C (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     std::call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider___ @ 0x1800A7028 (std--call_once__lambda_fdfea97a1e4915bc7c15af4fd38df93b__WGIRawInputProvider___.c)
 *     ?RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18012C360 (-RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x18012EA34 (std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___.c)
 *     ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801301F0 (-Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180131A54 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x180135510 (-Initialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180136880 (-RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x180137910 (-Initialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013905C (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013EE54 (-RuntimeClassInitialize@MPCEyeGazeProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18013F364 (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180140804 (-RuntimeClassInitialize@MPCClickerProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     <none>
 */

std::exception_ptr *__fastcall std::exception_ptr::exception_ptr(
        std::exception_ptr *this,
        const struct std::exception_ptr *a2)
{
  __ExceptionPtrCopy(this, a2);
  return this;
}
