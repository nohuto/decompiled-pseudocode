/*
 * XREFs of SepCommonAccessCheckEx @ 0x140155BCC
 * Callers:
 *     SeAccessCheckEx @ 0x140155BA0 (SeAccessCheckEx.c)
 *     SeSrpAccessCheck @ 0x14031CB40 (SeSrpAccessCheck.c)
 * Callees:
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140155C04 (SepCommonAccessCheckExWithAdminlessChecks.c)
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
