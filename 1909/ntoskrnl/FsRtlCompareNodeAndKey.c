/*
 * XREFs of FsRtlCompareNodeAndKey @ 0x14010661C
 * Callers:
 *     FsRtlFindInTunnelCacheEx @ 0x1406B5280 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406B53F0 (FsRtlAddToTunnelCacheEx.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x140666EF0 (RtlCompareUnicodeString.c)
 */

LONG __fastcall FsRtlCompareNodeAndKey(__int64 a1, unsigned __int64 a2, const UNICODE_STRING *a3, char a4)
{
  LONG result; // eax
  const UNICODE_STRING *v7; // rsi

  if ( *(_QWORD *)(a1 + 48) > a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 48) < a2 )
    return -1;
  v7 = (const UNICODE_STRING *)(a1 + 8 * (*(_DWORD *)(a1 + 56) & 2 | 8LL));
  result = RtlCompareUnicodeString(v7, a3, 1u);
  if ( !result )
  {
    if ( a4 )
      return RtlCompareUnicodeString(v7, a3, 0);
  }
  return result;
}
