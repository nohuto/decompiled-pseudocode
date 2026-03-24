/*
 * XREFs of SepCommonAccessCheckEx @ 0x14015B68C
 * Callers:
 *     SeAccessCheckEx @ 0x14015B660 (SeAccessCheckEx.c)
 *     SeSrpAccessCheck @ 0x1402FE930 (SeSrpAccessCheck.c)
 * Callees:
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B6C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 */

__int64 __fastcall SepCommonAccessCheckEx(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7)
{
  return SepCommonAccessCheckExWithAdminlessChecks(a1, a5, a6, a7, 0);
}
