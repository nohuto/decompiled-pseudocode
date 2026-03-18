/*
 * XREFs of MiIsImageFullyRetpolined @ 0x140582274
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140853D24 (MiMarkKernelImageRetpolineBits.c)
 * Callees:
 *     MiSectionControlArea @ 0x140075E70 (MiSectionControlArea.c)
 *     RtlIsImageFullyRetpolined @ 0x1401B5FB8 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsImageFullyRetpolined(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 112) )
    return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96) + 32LL) + 72LL) >> 5) & 1;
  else
    return RtlIsImageFullyRetpolined(*(void **)(a1 + 48));
}
