/*
 * XREFs of MmGetSessionGlobalVA @ 0x1405B22A8
 * Callers:
 *     PfpLogApplicationEvent @ 0x1400D8518 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x1405B2B60 (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionGlobalVA(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 1740) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 1024);
}
