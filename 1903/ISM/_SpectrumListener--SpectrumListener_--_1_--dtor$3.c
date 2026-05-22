/*
 * XREFs of _SpectrumListener::SpectrumListener_::_1_::dtor$3 @ 0x18009572D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpectrumListener::SpectrumListener_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SpeechRuntimeListener>::~unique_ptr<SpeechRuntimeListener>(*(_QWORD *)(a2 + 88) + 40LL);
}
