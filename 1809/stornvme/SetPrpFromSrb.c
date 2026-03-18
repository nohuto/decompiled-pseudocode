/*
 * XREFs of SetPrpFromSrb @ 0x1C0002664
 * Callers:
 *     IoctlToNVMe @ 0x1C0002698 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C00132F4 (ProtocolCommandToNVMe.c)
 * Callees:
 *     MdlToPrp @ 0x1C0004B10 (MdlToPrp.c)
 *     SglToPrp @ 0x1C00144B0 (SglToPrp.c)
 */

__int64 __fastcall SetPrpFromSrb(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
    result = MdlToPrp();
  else
    result = SglToPrp();
  if ( (_DWORD)result )
    ++*(_DWORD *)(a1 + 3768);
  return result;
}
