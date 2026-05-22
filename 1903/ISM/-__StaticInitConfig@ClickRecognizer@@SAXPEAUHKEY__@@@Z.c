/*
 * XREFs of ?__StaticInitConfig@ClickRecognizer@@SAXPEAUHKEY__@@@Z @ 0x18010C118
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x18010D040 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     ?ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z @ 0x18010AA74 (-ReadRegConfigValue@GestureSession@@SAGPEAUHKEY__@@PEBGGW4ScalingMethod@@@Z.c)
 */

void __fastcall ClickRecognizer::__StaticInitConfig(HKEY a1)
{
  unsigned __int16 v2; // ax

  ClickRecognizer::s_doubleTapTimeThreshold = GestureSession::ReadRegConfigValue(
                                                a1,
                                                L"DoubleTapTimeThreshold",
                                                0x12Cu,
                                                0);
  ClickRecognizer::s_doubleTapDistanceThreshold = GestureSession::ReadRegConfigValue(
                                                    a1,
                                                    L"DoubleTapDistanceThreshold",
                                                    0x3Cu,
                                                    1);
  ClickRecognizer::s_tapAndLongHoldTimeThreshold = GestureSession::ReadRegConfigValue(
                                                     a1,
                                                     L"TapAndLongHoldTimeThreshold",
                                                     0x3E8u,
                                                     0);
  ClickRecognizer::s_tapAndHoldStartTimeThreshold = GestureSession::ReadRegConfigValue(
                                                      a1,
                                                      L"TapAndHoldStartTimeThreshold",
                                                      0x2BCu,
                                                      0);
  ClickRecognizer::s_tapAndShortHoldTimeThreshold = GestureSession::ReadRegConfigValue(
                                                      a1,
                                                      L"TapAndShortHoldTimeThreshold",
                                                      0x258u,
                                                      0);
  ClickRecognizer::s_tapAndHoldDurationThreshold = GestureSession::ReadRegConfigValue(
                                                     a1,
                                                     L"TapAndHoldDurationThreshold",
                                                     0x12Cu,
                                                     0);
  ClickRecognizer::s_tapAndHoldDistanceThreshold = GestureSession::ReadRegConfigValue(
                                                     a1,
                                                     L"TapAndHoldDistanceThreshold",
                                                     0x1Eu,
                                                     1);
  v2 = ClickRecognizer::s_tapAndShortHoldTimeThreshold;
  if ( ClickRecognizer::s_tapAndHoldStartTimeThreshold < ClickRecognizer::s_tapAndShortHoldTimeThreshold )
    v2 = ClickRecognizer::s_tapAndHoldStartTimeThreshold;
  ClickRecognizer::s_tapAndShortHoldTimeThreshold = v2;
  if ( ClickRecognizer::s_tapAndHoldStartTimeThreshold + (unsigned int)ClickRecognizer::s_tapAndHoldDurationThreshold > ClickRecognizer::s_tapAndLongHoldTimeThreshold )
    ClickRecognizer::s_tapAndLongHoldTimeThreshold = ClickRecognizer::s_tapAndHoldStartTimeThreshold
                                                   + ClickRecognizer::s_tapAndHoldDurationThreshold;
}
