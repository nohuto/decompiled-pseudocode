/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x140865FE8
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1402E47A0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlpSystemBootStatusRequest @ 0x14071C4D4 (RtlpSystemBootStatusRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140410178 + dword_14041017C) & 0x3F);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140410180 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140410188 = MEMORY[0xFFFFF78000000014];
    ++dword_140410178;
    LOBYTE(xmmword_14043FEA0) = PopBsdCurrentCsPhase;
    DWORD1(xmmword_14043FEA0) = PopBsdTransitionLatestCheckpointId;
    *((_QWORD *)&xmmword_14043FEA0 + 1) = __PAIR64__(
                                            PopBsdTransitionLatestCheckpointSeqNumber,
                                            PopBsdTransitionLatestCheckpointType);
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_14043FE90 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_14043FE90);
    qword_140410180 &= ~v2;
    ++dword_14041017C;
    WORD6(xmmword_14043FE90) = MEMORY[0xFFFFF780000002C4];
    qword_140410190 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_140410178 < (unsigned int)dword_14041017C || (unsigned int)(dword_140410178 - dword_14041017C) > 1 )
    byte_1404101A8 = 1;
  v3 = 14;
  v5 = 48;
  v4 = &PopBsdPhysicalPowerButtonInfo;
  if ( (int)RtlpSystemBootStatusRequest(0x20u, (__int64)&v3, 1u, 0LL) < 0 && HIWORD(xmmword_14043FE90) != 0xFFFF )
    ++HIWORD(xmmword_14043FE90);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
