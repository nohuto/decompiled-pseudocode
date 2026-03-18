/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0066A70
 * Callers:
 *     ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C0004500 (-DxgkEngVisRgnUniq@@YAIXZ.c)
 *     DrvEnumDisplaySettings @ 0x1C00144F0 (DrvEnumDisplaySettings.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C002A080 (GreLockVisRgnSharedOrExclusive.c)
 *     GreLockVisRgnShared @ 0x1C002A4C0 (GreLockVisRgnShared.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002AA70 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreSfmGetNotificationTokens @ 0x1C00343D0 (GreSfmGetNotificationTokens.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C003EBF8 (DrvNotifyModeChangeStartStop.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C004A1D4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0063140 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C0069E20 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     GreSfmOpenTokenEvent @ 0x1C0089700 (GreSfmOpenTokenEvent.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00AB4F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     DxEngLockShareSem @ 0x1C00FD640 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C01064E0 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C0108360 (McTemplateK0pz.c)
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
