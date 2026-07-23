/*
 * XREFs of RtlDosPathNameToRelativeNtPathName @ 0x18002A538
 * Callers:
 *     LdrpGetNtPathFromDosPath @ 0x180029D7C (LdrpGetNtPathFromDosPath.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007BC34 (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1800D266C (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18000D640 (RtlpDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName(
        char a1,
        __int64 a2,
        _UNICODE_STRING *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        _QWORD *a6)
{
  return RtlpDosPathNameToRelativeNtPathName(a1 != 0, a3, a4, a5, a6, 0LL, 0LL);
}
