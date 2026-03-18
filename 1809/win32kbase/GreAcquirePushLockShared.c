/*
 * XREFs of GreAcquirePushLockShared @ 0x1C0069590
 * Callers:
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C00F6810 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquirePushLockShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
