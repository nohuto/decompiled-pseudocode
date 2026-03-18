/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1408A252C
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1403015D0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BEAE4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140438A78 + dword_140438A7C) & 0x3F);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140438A80 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140438A88 = MEMORY[0xFFFFF78000000014];
    ++dword_140438A78;
    LOBYTE(xmmword_140467DF8) = PopBsdCurrentCsPhase;
    *(_QWORD *)((char *)&xmmword_140467DF8 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140467DF8) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_140467DE8 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140467DE8);
    qword_140438A80 &= ~v2;
    ++dword_140438A7C;
    WORD6(xmmword_140467DE8) = MEMORY[0xFFFFF780000002C4];
    qword_140438A90 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_140438A78 < (unsigned int)dword_140438A7C || (unsigned int)(dword_140438A78 - dword_140438A7C) > 1 )
    byte_140438AA8 = 1;
  PopBsdHandleRequest(4);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
