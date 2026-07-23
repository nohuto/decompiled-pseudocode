/*
 * XREFs of PopRecordPhysicalPowerButton @ 0x140867248
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1402E4990 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     RtlpSystemBootStatusRequest @ 0x14071D774 (RtlpSystemBootStatusRequest.c)
 */

void __fastcall PopRecordPhysicalPowerButton(char a1)
{
  __int64 v2; // r8
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  v2 = 1LL << ((dword_140411218 + dword_14041121C) & 0x3F);
  if ( a1 )
  {
    *(_QWORD *)&PopBsdPhysicalPowerButtonInfo = MEMORY[0xFFFFF78000000014];
    ++DWORD2(PopBsdPhysicalPowerButtonInfo);
    qword_140411220 |= v2;
    WORD6(PopBsdPhysicalPowerButtonInfo) = MEMORY[0xFFFFF780000002C4];
    BYTE14(PopBsdPhysicalPowerButtonInfo) = PopBsdLastPowerWatchdogStage;
    qword_140411228 = MEMORY[0xFFFFF78000000014];
    ++dword_140411218;
    LOBYTE(xmmword_140440FB0) = PopBsdCurrentCsPhase;
    *(_QWORD *)((char *)&xmmword_140440FB0 + 4) = __PAIR64__(
                                                    PopBsdTransitionLatestCheckpointType,
                                                    PopBsdTransitionLatestCheckpointId);
    HIDWORD(xmmword_140440FB0) = PopBsdTransitionLatestCheckpointSeqNumber;
    HIBYTE(PopBsdPhysicalPowerButtonInfo) = HIBYTE(PopBsdPhysicalPowerButtonInfo) & 0xFC | PopBsdPowerWatchdogArmed & 1 | (2 * (PopBsdShutdownInProgress & 1));
  }
  else
  {
    *(_QWORD *)&xmmword_140440FA0 = MEMORY[0xFFFFF78000000014];
    ++DWORD2(xmmword_140440FA0);
    qword_140411220 &= ~v2;
    ++dword_14041121C;
    WORD6(xmmword_140440FA0) = MEMORY[0xFFFFF780000002C4];
    qword_140411230 = MEMORY[0xFFFFF78000000014];
  }
  if ( dword_140411218 < (unsigned int)dword_14041121C || (unsigned int)(dword_140411218 - dword_14041121C) > 1 )
    byte_140411248 = 1;
  v3 = 14;
  v5 = 48;
  v4 = &PopBsdPhysicalPowerButtonInfo;
  if ( (int)RtlpSystemBootStatusRequest(0x20u, (__int64)&v3, 1u, 0LL) < 0 && HIWORD(xmmword_140440FA0) != 0xFFFF )
    ++HIWORD(xmmword_140440FA0);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
