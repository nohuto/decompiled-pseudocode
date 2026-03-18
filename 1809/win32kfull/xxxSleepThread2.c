/*
 * XREFs of xxxSleepThread2 @ 0x1C0030BEC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAAFC (xxxDCETrackCaptionButton.c)
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 *     NtUserWaitMessage @ 0x1C00FED60 (NtUserWaitMessage.c)
 *     xxxIsDragging @ 0x1C0157238 (xxxIsDragging.c)
 *     xxxSleepThread @ 0x1C01C3D7C (xxxSleepThread.c)
 *     xxxWaitMessageEx @ 0x1C01CF7DC (xxxWaitMessageEx.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01F7098 (xxxRequestOutOfFullScreenMode.c)
 *     xxxbFullscreenSwitch @ 0x1C01F7184 (xxxbFullscreenSwitch.c)
 *     NtUserRealWaitMessageEx @ 0x1C021B410 (NtUserRealWaitMessageEx.c)
 *     NtUserWaitAvailableMessageEx @ 0x1C021EFC0 (NtUserWaitAvailableMessageEx.c)
 *     xxxTrackCaptionButton @ 0x1C022B4B4 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C022F198 (xxxDragObject.c)
 * Callees:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0030D50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxHandleHealthyThread @ 0x1C01E3B40 (xxxHandleHealthyThread.c)
 */

__int64 __fastcall xxxSleepThread2(unsigned int a1, unsigned int a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // ebp
  unsigned int v10; // esi
  unsigned __int64 v11; // rbx
  int v12; // eax

  v5 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) )
  {
    v5 = 1;
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1152LL) = 0;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1208LL) &= ~0x80000000;
    EtwTraceProcessWindowInfo(gptiCurrent);
  }
  v10 = xxxRealSleepThread(a1, a2, a3, a4, a5);
  if ( v5 )
  {
    v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    EtwTraceMessageCheckDelay(gptiCurrent);
    v12 = -1;
    if ( (_DWORD)v11 )
      v12 = v11;
    *(_DWORD *)(gptiCurrent + 1152LL) = v12;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1208LL) &= ~0x80000000;
    EtwTraceProcessWindowInfo(gptiCurrent);
  }
  return v10;
}
