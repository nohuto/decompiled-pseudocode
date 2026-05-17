/*
 * XREFs of RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800CE5D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800349B4 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

__int64 __fastcall RtlDosLongPathNameToRelativeNtPathName_U_WithStatus(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int64 *a3,
        _DWORD *a4)
{
  return RtlpDosPathNameToRelativeNtPathName_U(6, a1, a2, a3, a4);
}
