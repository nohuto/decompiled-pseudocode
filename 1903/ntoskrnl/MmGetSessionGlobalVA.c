/*
 * XREFs of MmGetSessionGlobalVA @ 0x140659910
 * Callers:
 *     PfpLogApplicationEvent @ 0x140096F98 (PfpLogApplicationEvent.c)
 *     PfpPrivSourceEnum @ 0x1406358EC (PfpPrivSourceEnum.c)
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
