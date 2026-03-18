/*
 * XREFs of zzzSetCursorPos @ 0x1C0067194
 * Callers:
 *     NtUserSetCursorPos @ 0x1C0067140 (NtUserSetCursorPos.c)
 * Callees:
 *     _GetCurrentLogicalCursorThread @ 0x1C0015808 (_GetCurrentLogicalCursorThread.c)
 *     IsGpqForegroundAccessibleForPti @ 0x1C005DF90 (IsGpqForegroundAccessibleForPti.c)
 *     zzzInternalSetCursorPos @ 0x1C0067330 (zzzInternalSetCursorPos.c)
 *     CheckWinstaAttributeAccess @ 0x1C006A910 (CheckWinstaAttributeAccess.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetCursorPos(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 CurrentLogicalCursorThread; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  __m128i v9; // xmm0

  CurrentLogicalCursorThread = GetCurrentLogicalCursorThread();
  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(CurrentLogicalCursorThread + 416)) )
  {
    return 0LL;
  }
  v7 = *(_QWORD *)(CurrentLogicalCursorThread + 448);
  if ( v7 )
  {
    if ( v7 != grpdeskRitInput )
      return 0LL;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleForPti(CurrentLogicalCursorThread, 1) )
  {
    EtwTraceUIPIInputError(CurrentLogicalCursorThread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 1);
    return 0LL;
  }
  if ( a3 == 1 && (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    SaveCursorPosition(__PAIR64__(a2, a1));
  }
  else
  {
    zzzInternalSetCursorPos(a1, a2, a3);
    v8 = *(_QWORD *)(*gpDispInfo + 24LL);
    v9 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8);
    *((_DWORD *)&gaptMouse + 6 * gptInd) = gptCursorAsync[0] | ((unsigned __int16)(v9.m128i_i16[0] - v8 - 1) << 16);
    *((_DWORD *)&gaptMouse + 6 * gptInd + 1) = gptCursorAsync[2] | ((unsigned __int16)(v9.m128i_i16[2] - WORD2(v8) - 1) << 16);
    *((_DWORD *)&gaptMouse + 6 * gptInd + 2) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *((_QWORD *)&gaptMouse + 3 * gptInd + 2) = 0LL;
    gptInd = (gptInd + 1) & 0x3F;
  }
  return 1LL;
}
