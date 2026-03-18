/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C005BCF0
 * Callers:
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0022520 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreLockVisRgnShared @ 0x1C0033280 (GreLockVisRgnShared.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C004199C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0043200 (DrvEnumDisplaySettings.c)
 *     GreSfmOpenTokenEvent @ 0x1C004D030 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C004D250 (GreSfmGetNotificationTokens.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C004E4C8 (DrvNotifyModeChangeStartStop.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C005D39C (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C00C9330 (-DxgkEngVisRgnUniq@@YAIXZ.c)
 *     DxEngLockShareSem @ 0x1C00C9760 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C00D8660 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pz(a1, (unsigned int)&LockAcquireShared, a3, a2, a1);
  }
  return result;
}
