/*
 * XREFs of ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0143340
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C0141900 (NtGdiExtFloodFill.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C01431B0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGELOCK *__fastcall DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK(DYNAMICMODECHANGELOCK *this)
{
  GreAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  return this;
}
