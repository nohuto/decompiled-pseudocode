/*
 * XREFs of VidMmGetAllocationInstance @ 0x1C0014FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_SEGMENT@@UEAAJPEAV1@_K@Z @ 0x1C0082BA0 (-ValidateApertureUnmapToDummyPage@VIDMM_SEGMENT@@UEAAJPEAV1@_K@Z.c)
 */

__int64 __fastcall VidMmGetAllocationInstance(VIDMM_SEGMENT *a1, struct VIDMM_SEGMENT *a2, unsigned __int64 a3)
{
  return VIDMM_SEGMENT::ValidateApertureUnmapToDummyPage(a1, a2, a3);
}
