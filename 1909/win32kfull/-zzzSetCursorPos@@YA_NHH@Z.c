/*
 * XREFs of ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C0088A30
 * Callers:
 *     NtUserSetCursorPos @ 0x1C0088020 (NtUserSetCursorPos.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0027140 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckWinstaAttributeAccess @ 0x1C00889B0 (CheckWinstaAttributeAccess.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C008A0A0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00ED088 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall zzzSetCursorPos(unsigned int a1, unsigned int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __m128i v8; // xmm0

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL, v5)
    && !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)CurrentLogicalCursorThread + 52)) )
  {
    return 0;
  }
  v6 = *((_QWORD *)CurrentLogicalCursorThread + 56);
  if ( v6 )
  {
    if ( v6 != grpdeskRitInput )
      return 0;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleExplicit(
                        1LL,
                        CurrentLogicalCursorThread,
                        *(_QWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 52) + 872LL),
                        *(_DWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 52) + 12LL) & 0x80000000) )
  {
    EtwTraceUIPIInputError(CurrentLogicalCursorThread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 436LL), 1);
    return 0;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    SaveCursorPosition(__PAIR64__(a2, a1));
  }
  else
  {
    zzzInternalSetCursorPos(a1, a2, 1LL, 0LL);
    v7 = *(_QWORD *)(*gpDispInfo + 24LL);
    v8 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8);
    *((_DWORD *)&gaptMouse + 6 * gptInd) = (unsigned __int16)gptCursorAsync | ((unsigned __int16)(v8.m128i_i16[0]
                                                                                                - v7
                                                                                                - 1) << 16);
    *((_DWORD *)&gaptMouse + 6 * gptInd + 1) = LOWORD(gptCursorAsync->y) | ((unsigned __int16)(v8.m128i_i16[2]
                                                                                             - WORD2(v7)
                                                                                             - 1) << 16);
    *((_DWORD *)&gaptMouse + 6 * gptInd + 2) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *((_QWORD *)&gaptMouse + 3 * gptInd + 2) = 0LL;
    gptInd = (gptInd + 1) & 0x3F;
  }
  return 1;
}
