/*
 * XREFs of TpAllocPool @ 0x180062EF0
 * Callers:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 * Callees:
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

NTSTATUS __cdecl TpAllocPool(PTP_POOL *PoolReturn, PVOID Reserved)
{
  __int64 v2; // r8

  if ( PoolReturn )
  {
    if ( !Reserved )
    {
      Reserved = NtCurrentPeb()->Ldr;
      if ( !*((_BYTE *)Reserved + 72) )
        return sub_180062F34(PoolReturn, 0LL);
    }
  }
  sub_18010EFC8(PoolReturn, Reserved, v2);
  return -1073741811;
}
