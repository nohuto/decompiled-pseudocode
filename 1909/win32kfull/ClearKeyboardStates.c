/*
 * XREFs of ClearKeyboardStates @ 0x1C0139560
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ClearKeyboardStates()
{
  unsigned int DLT; // eax
  __int64 i; // rcx
  __int64 result; // rax

  DLT = DLT_ASYNCKEYSTATE::getDLT();
  GetDomainLockRef(DLT);
  for ( i = 0LL; i < 64; i += 16LL )
    *(__m128i *)(i + *(_QWORD *)&gafAsyncKeyState[0]) = _mm_and_si128(
                                                          _mm_loadu_si128((const __m128i *)(i
                                                                                          + *(_QWORD *)&gafAsyncKeyState[0])),
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
