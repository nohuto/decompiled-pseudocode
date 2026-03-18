/*
 * XREFs of MiIsImageFullyRetpolined @ 0x140711754
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140711648 (MiMarkKernelImageRetpolineBits.c)
 * Callees:
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     RtlIsImageFullyRetpolined @ 0x140154A88 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsImageFullyRetpolined(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 112) )
    return (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96) + 32LL) + 72LL) >> 5) & 1;
  else
    return RtlIsImageFullyRetpolined(*(void **)(a1 + 48));
}
