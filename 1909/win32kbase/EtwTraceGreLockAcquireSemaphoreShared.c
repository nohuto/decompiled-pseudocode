/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0075F30
 * Callers:
 *     DxgkEngVisRgnUniq @ 0x1C0004A30 (DxgkEngVisRgnUniq.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C002C1B0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreLockVisRgnShared @ 0x1C002C670 (GreLockVisRgnShared.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C8A0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C00379A0 (GreSfmGetNotificationTokens.c)
 *     DrvEnumDisplaySettings @ 0x1C0038F60 (DrvEnumDisplaySettings.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003D2AC (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C003E70C (DrvNotifyModeChangeStartStop.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00778D4 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     GreSfmOpenTokenEvent @ 0x1C0099400 (GreSfmOpenTokenEvent.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009A2D0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
 *     DxEngLockShareSem @ 0x1C0120060 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C012E100 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
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
