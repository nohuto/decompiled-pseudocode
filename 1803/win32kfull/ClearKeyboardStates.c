/*
 * XREFs of ClearKeyboardStates @ 0x1C00BCF50
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 * Callees:
 *     ClearKeyboardToggleStates @ 0x1C005DA48 (ClearKeyboardToggleStates.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ClearKeyboardStates()
{
  __int64 i; // rcx
  __int64 result; // rax

  for ( i = 0LL; i < 64; i += 16LL )
    *(__m128i *)(i + *(_QWORD *)gafAsyncKeyState) = _mm_and_si128(
                                                      _mm_loadu_si128((const __m128i *)(i + *(_QWORD *)gafAsyncKeyState)),
                                                      (__m128i)_xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
  ClearKeyboardToggleStates();
  gfsModifiers = 0;
  result = gfsSASModifiersDown;
  gfsModOnlyCandidate = 0;
  gfsRawModifiersForHotKey = 0;
  gfsSASModifiersDown = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
