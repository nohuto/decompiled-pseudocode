/*
 * XREFs of MiIsImageFullyRetpolined @ 0x14070F974
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x14070F868 (MiMarkKernelImageRetpolineBits.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400717E0 (MiSectionControlArea.c)
 *     RtlIsImageFullyRetpolined @ 0x1401543E8 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsImageFullyRetpolined(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 112) )
    return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96) + 32LL) + 72LL) >> 5) & 1;
  else
    return RtlIsImageFullyRetpolined(*(void **)(a1 + 48));
}
