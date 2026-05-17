/*
 * XREFs of RtlpInitUnicodeStringUsingBuffer @ 0x180016CBC
 * Callers:
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x1800F6DD8 (RtlpGetCustomCultureDataFromFile.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlpInitUnicodeStringUsingBuffer(char a1, const void *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  __int16 v6; // bx

  if ( a1 )
  {
    if ( (unsigned __int8)RtlCreateUnicodeString(a4, a2) )
      return 0LL;
    return 3221225495LL;
  }
  else
  {
    if ( a3 < 0x55 )
    {
      v5 = 2LL * a3;
      if ( *(unsigned __int16 *)(a4 + 2) > v5 )
      {
        v6 = 2 * a3;
        memmove(*(void **)(a4 + 8), a2, (unsigned __int16)(2 * a3));
        *(_WORD *)(v5 + *(_QWORD *)(a4 + 8)) = 0;
        *(_WORD *)a4 = v6;
        return 0LL;
      }
    }
    return 3221225507LL;
  }
}
