/*
 * XREFs of TpAllocPool @ 0x180062F90
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18002FBA8 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
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
        return TpAllocPoolInternal(PoolReturn, 0LL);
    }
  }
  TppRaiseInvalidParameter(PoolReturn, Reserved, v2);
  return -1073741811;
}
