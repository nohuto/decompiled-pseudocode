/*
 * XREFs of xxxSleepThread2 @ 0x1C0045060
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000C488 (xxxDCETrackCaptionButton.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     NtUserWaitMessage @ 0x1C004F200 (NtUserWaitMessage.c)
 *     xxxRemoteDisconnect @ 0x1C010DF50 (xxxRemoteDisconnect.c)
 *     xxxSleepThread @ 0x1C01D6F4C (xxxSleepThread.c)
 *     xxxWaitMessageEx @ 0x1C01E42E0 (xxxWaitMessageEx.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C020D114 (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C020D218 (xxxbFullscreenSwitch.c)
 *     NtUserRealWaitMessageEx @ 0x1C0232EE0 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C0236D10 (NtUserWaitAvailableMessageEx.c)
 *     xxxTrackCaptionButton @ 0x1C0243DB0 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02472D4 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C02479D8 (xxxIsDragging.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0044820 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxHandleHealthyThread @ 0x1C0151200 (xxxHandleHealthyThread.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, int a2, int a3, unsigned int a4, enum SLEEP_STATUS *a5)
{
  int v5; // edi
  __int64 result; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // rdi

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1168LL) = 0;
    if ( *(int *)(gptiCurrent + 480LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1224LL) &= ~0x100000000uLL;
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
    *(_DWORD *)(gptiCurrent + 1168LL) = v12;
    if ( *(int *)(gptiCurrent + 480LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1224LL) &= ~0x100000000uLL;
    EtwTraceProcessWindowInfo(gptiCurrent);
    return v11;
  }
  return result;
}
