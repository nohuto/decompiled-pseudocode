/*
 * XREFs of ?CacheLastInputReport@MPCMouseProcessor@@EEAAXPEBUInputInfo@@@Z @ 0x1800FD990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCMouseProcessor::CacheLastInputReport(MPCMouseProcessor *this, const struct InputInfo *a2)
{
  memcpy_0((char *)this + 4928, a2, 0x640uLL);
}
