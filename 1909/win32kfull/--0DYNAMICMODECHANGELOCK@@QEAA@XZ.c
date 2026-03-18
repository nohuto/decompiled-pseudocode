/*
 * XREFs of ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0157D58
 * Callers:
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C0157BE0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02B2100 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGELOCK *__fastcall DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK(DYNAMICMODECHANGELOCK *this)
{
  GreAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  return this;
}
