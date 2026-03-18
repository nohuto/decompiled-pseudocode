/*
 * XREFs of ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C004405C
 * Callers:
 *     NtUserSetCursorPos @ 0x1C0044010 (NtUserSetCursorPos.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0031B80 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00456D0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C0089140 (CheckWinstaAttributeAccess.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C0112468 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall zzzSetCursorPos(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  __m128i v9; // xmm0

  v4 = a2;
  v5 = a1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(a1, a2, a3, a4);
  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    && !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)CurrentLogicalCursorThread + 52)) )
  {
    return 0;
  }
  v7 = *((_QWORD *)CurrentLogicalCursorThread + 56);
  if ( v7 )
  {
    if ( v7 != grpdeskRitInput )
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
    SaveCursorPosition(__PAIR64__(v4, v5));
  }
  else
  {
    zzzInternalSetCursorPos(v5, v4, 1LL, 0LL);
    v8 = *(_QWORD *)(*gpDispInfo + 24LL);
    v9 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8);
    *((_DWORD *)&gaptMouse + 6 * gptInd) = (unsigned __int16)gptCursorAsync | ((unsigned __int16)(v9.m128i_i16[0]
                                                                                                - v8
                                                                                                - 1) << 16);
    *((_DWORD *)&gaptMouse + 6 * gptInd + 1) = LOWORD(gptCursorAsync->y) | ((unsigned __int16)(v9.m128i_i16[2]
                                                                                             - WORD2(v8)
                                                                                             - 1) << 16);
    *((_DWORD *)&gaptMouse + 6 * gptInd + 2) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *((_QWORD *)&gaptMouse + 3 * gptInd + 2) = 0LL;
    gptInd = (gptInd + 1) & 0x3F;
  }
  return 1;
}
