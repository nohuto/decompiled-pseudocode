/*
 * XREFs of ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0156F98
 * Callers:
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C0156E20 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02B25B0 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGELOCK *__fastcall DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK(DYNAMICMODECHANGELOCK *this)
{
  GreAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  return this;
}
