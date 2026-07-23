/*
 * XREFs of FsRtlCompareNodeAndKey @ 0x140014750
 * Callers:
 *     FsRtlAddToTunnelCacheEx @ 0x1405829D0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140582D00 (FsRtlFindInTunnelCacheEx.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 */

LONG __fastcall FsRtlCompareNodeAndKey(__int64 a1, unsigned __int64 a2, const UNICODE_STRING *a3, char a4)
{
  unsigned __int64 v4; // rax
  LONG result; // eax
  const UNICODE_STRING *v8; // rsi

  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 > a2 )
    return 1;
  if ( v4 < a2 )
    return -1;
  v8 = (const UNICODE_STRING *)(a1 + 8 * (*(_DWORD *)(a1 + 56) & 2 | 8LL));
  result = RtlCompareUnicodeString(v8, a3, 1u);
  if ( !result )
  {
    if ( a4 )
      return RtlCompareUnicodeString(v8, a3, 0);
  }
  return result;
}
