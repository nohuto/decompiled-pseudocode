/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x1408A1D6C
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140301080 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1401BF5D4 (PopBsdHandleRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_1404389F8 + dword_1404389FC) & 0x3F);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140438A00 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140438A08 = MEMORY[0xFFFFF78000000014];
    ++dword_1404389F8;
    LOBYTE(xmmword_140467AF8) = PopBsdCurrentCsPhase;
    *(_QWORD *)((char *)&xmmword_140467AF8 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140467AF8) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_140467AE8 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140467AE8);
    qword_140438A00 &= ~v2;
    ++dword_1404389FC;
    WORD6(xmmword_140467AE8) = MEMORY[0xFFFFF780000002C4];
    qword_140438A10 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_1404389F8 < (unsigned int)dword_1404389FC || (unsigned int)(dword_1404389F8 - dword_1404389FC) > 1 )
    byte_140438A28 = 1;
  PopBsdHandleRequest(4);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
