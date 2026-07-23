/*
 * XREFs of SeSrpAccessCheck @ 0x1402FEB20
 * Callers:
 *     <none>
 * Callees:
 *     SepCommonAccessCheckEx @ 0x14015B78C (SepCommonAccessCheckEx.c)
 */

__int64 __fastcall SeSrpAccessCheck(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  return SepCommonAccessCheckEx(a1, a2, a3, a4, a5, a6, 1);
}
