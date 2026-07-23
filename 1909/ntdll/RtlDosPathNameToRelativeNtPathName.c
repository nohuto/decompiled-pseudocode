/*
 * XREFs of RtlDosPathNameToRelativeNtPathName @ 0x180029BCC
 * Callers:
 *     LdrpGetNtPathFromDosPath @ 0x180029C14 (LdrpGetNtPathFromDosPath.c)
 *     RtlpCreateNewDirectoryReference @ 0x180076E84 (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1800D0E3C (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800276A8 (RtlpDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName(
        char a1,
        __int64 a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        _UNICODE_STRING *a5,
        _UNICODE_STRING **a6)
{
  return RtlpDosPathNameToRelativeNtPathName(a1 != 0, a3, a4, a5, a6, 0LL, 0LL);
}
