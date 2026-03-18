/*
 * XREFs of ?Dispose@FxInterrupt@@UEAAEXZ @ 0x1C008D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushAndRundown@FxInterrupt@@AEAAXXZ @ 0x1C008D3F8 (-FlushAndRundown@FxInterrupt@@AEAAXXZ.c)
 */

unsigned __int8 __fastcall FxInterrupt::Dispose(FxInterrupt *this)
{
  FxInterrupt::FlushAndRundown(this);
  return 1;
}
