/*
 * XREFs of xxxSleepThread2 @ 0x1C0046670
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000B108 (xxxDCETrackCaptionButton.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     xxxRemoteDisconnect @ 0x1C00BB750 (xxxRemoteDisconnect.c)
 *     NtUserWaitMessage @ 0x1C00DD530 (NtUserWaitMessage.c)
 *     xxxIsDragging @ 0x1C0135D78 (xxxIsDragging.c)
 *     xxxSleepThread @ 0x1C01A246C (xxxSleepThread.c)
 *     xxxWaitMessageEx @ 0x1C01AC5FC (xxxWaitMessageEx.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01D2714 (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C01D27FC (xxxbFullscreenSwitch.c)
 *     NtUserRealWaitMessageEx @ 0x1C01F3CF0 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C01F7400 (NtUserWaitAvailableMessageEx.c)
 *     xxxTrackCaptionButton @ 0x1C0202AE0 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0206058 (xxxDragObject.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00467C0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxHandleHealthyThread @ 0x1C00E6A60 (xxxHandleHealthyThread.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // edi
  __int64 result; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1144LL) = 0;
    if ( *(int *)(gptiCurrent + 480LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1200LL) &= ~0x80000000;
    EtwTraceProcessWindowInfo(gptiCurrent);
  }
  result = xxxRealSleepThread(a1, a2, a3, a4, a5);
  v11 = result;
  if ( v5 )
  {
    v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( !(_DWORD)v12 )
      LODWORD(v12) = -1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1144LL) = v12;
    if ( *(int *)(gptiCurrent + 480LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1200LL) &= ~0x80000000;
    EtwTraceProcessWindowInfo(gptiCurrent);
    return v11;
  }
  return result;
}
