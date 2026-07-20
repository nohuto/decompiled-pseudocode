/*
 * XREFs of memmove_0 @ 0x1400101E3
 * Callers:
 *     BasepGetFileNameInformation @ 0x14000DF28 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x14000E02C (BasepGetObjectNTName.c)
 *     BasepGetVolumeDosLetterNameFromNTName @ 0x14000E130 (BasepGetVolumeDosLetterNameFromNTName.c)
 *     GetFinalPathNameByHandleW @ 0x14000E548 (GetFinalPathNameByHandleW.c)
 *     GetLongPathNameW @ 0x14000F388 (GetLongPathNameW.c)
 *     BaseFindFirstDevice @ 0x14000F948 (BaseFindFirstDevice.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove_0(void *a1, const void *Src, size_t Size)
{
  return memmove(a1, Src, Size);
}
