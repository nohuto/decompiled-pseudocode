/*
 * XREFs of LdrResFindResourceDirectory @ 0x180056770
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 */

__int64 __fastcall LdrResFindResourceDirectory(
        const WCHAR *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7)
{
  if ( (a7 & 0xC00) != 0 )
    return 3221225485LL;
  else
    return LdrResSearchResource(a1, a4, 0LL, a5, a6);
}
