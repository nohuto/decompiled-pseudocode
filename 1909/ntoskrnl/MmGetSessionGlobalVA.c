/*
 * XREFs of MmGetSessionGlobalVA @ 0x14066C930
 * Callers:
 *     PfpLogApplicationEvent @ 0x1400D42B8 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x140638B3C (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionGlobalVA(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 1788) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 1024);
}
