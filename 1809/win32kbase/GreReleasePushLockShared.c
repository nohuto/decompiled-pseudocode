/*
 * XREFs of GreReleasePushLockShared @ 0x1C00695B0
 * Callers:
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C00F6810 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreReleasePushLockShared(__int64 a1)
{
  return ExReleasePushLockSharedEx(a1, 0LL);
}
