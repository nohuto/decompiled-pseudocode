/*
 * XREFs of ?zzzSetCursorPos@@YA_NHHK@Z @ 0x1C01205AC
 * Callers:
 *     NtUserSetCursorPos @ 0x1C0120550 (NtUserSetCursorPos.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C006B480 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C00A56F0 (CheckWinstaAttributeAccess.c)
 *     IsGpqForegroundAccessibleForPti @ 0x1C00AFFE8 (IsGpqForegroundAccessibleForPti.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall zzzSetCursorPos(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  __m128i v9; // xmm0

  v4 = a2;
  v5 = a1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(a1, a2);
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL)
    && !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)CurrentLogicalCursorThread + 53)) )
  {
    return 0;
  }
  v7 = *((_QWORD *)CurrentLogicalCursorThread + 57);
  if ( v7 )
  {
    if ( v7 != grpdeskRitInput )
      return 0;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleForPti((__int64)CurrentLogicalCursorThread, 1) )
  {
    EtwTraceUIPIInputError(CurrentLogicalCursorThread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 1);
    return 0;
  }
  if ( a3 == 1 && (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    SaveCursorPosition(__PAIR64__(v4, v5));
  }
  else
  {
    zzzInternalSetCursorPos(v5, v4, a3, 0);
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
