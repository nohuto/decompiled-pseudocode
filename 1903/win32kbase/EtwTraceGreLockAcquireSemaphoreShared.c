/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C007A110
 * Callers:
 *     DxgkEngVisRgnUniq @ 0x1C0004A30 (DxgkEngVisRgnUniq.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0014640 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreLockVisRgnShared @ 0x1C0015130 (GreLockVisRgnShared.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0015210 (GreLockVisRgnSharedOrExclusive.c)
 *     GreGetDeviceCaps @ 0x1C0018CC0 (GreGetDeviceCaps.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     GreSfmGetNotificationTokens @ 0x1C0038A10 (GreSfmGetNotificationTokens.c)
 *     DrvEnumDisplaySettings @ 0x1C003A320 (DrvEnumDisplaySettings.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0043C20 (DrvNotifyModeChangeStartStop.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005009C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreSfmOpenTokenEvent @ 0x1C009A840 (GreSfmOpenTokenEvent.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009B750 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00AD4C0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     DxEngLockShareSem @ 0x1C01229D0 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C01308B0 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz(a1, &LockAcquireShared, a3, a2, a1);
  }
  return result;
}
