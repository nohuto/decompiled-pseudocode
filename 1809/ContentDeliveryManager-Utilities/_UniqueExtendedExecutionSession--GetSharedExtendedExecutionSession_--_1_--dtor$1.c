/*
 * XREFs of _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$1 @ 0x1800CD7A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((_QWORD *)(a2 + 128));
}
