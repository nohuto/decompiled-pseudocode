/*
 * XREFs of SetPrpFromSrb @ 0x1C0001854
 * Callers:
 *     IoctlToNVMe @ 0x1C00018EC (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C0012400 (ProtocolCommandToNVMe.c)
 * Callees:
 *     SglToPrp @ 0x1C0001888 (SglToPrp.c)
 *     MdlToPrp @ 0x1C001094C (MdlToPrp.c)
 */

__int64 __fastcall SetPrpFromSrb(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
    result = MdlToPrp();
  else
    result = SglToPrp();
  if ( (_DWORD)result )
    ++*(_DWORD *)(a1 + 3776);
  return result;
}
