/*
 * XREFs of sub_180016CBC @ 0x180016CBC
 * Callers:
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     sub_1800F6CF8 @ 0x1800F6CF8 (sub_1800F6CF8.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_180016CBC(char a1, const WCHAR *a2, unsigned int a3, _UNICODE_STRING *a4)
{
  unsigned __int64 v5; // rsi
  USHORT v6; // bx

  if ( a1 )
  {
    if ( RtlCreateUnicodeString(a4, a2) )
      return 0LL;
    return 3221225495LL;
  }
  else
  {
    if ( a3 < 0x55 )
    {
      v5 = 2LL * a3;
      if ( a4->MaximumLength > v5 )
      {
        v6 = 2 * a3;
        memmove(a4->Buffer, a2, (unsigned __int16)(2 * a3));
        a4->Buffer[v5 / 2] = 0;
        a4->Length = v6;
        return 0LL;
      }
    }
    return 3221225507LL;
  }
}
