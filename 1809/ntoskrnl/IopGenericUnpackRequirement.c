/*
 * XREFs of IopGenericUnpackRequirement @ 0x140741410
 * Callers:
 *     <none>
 * Callees:
 *     RtlIoDecodeMemIoResource @ 0x1401840C0 (RtlIoDecodeMemIoResource.c)
 */

__int64 __fastcall IopGenericUnpackRequirement(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        ULONGLONG *a4,
        unsigned __int64 *Alignment)
{
  *a4 = RtlIoDecodeMemIoResource((PIO_RESOURCE_DESCRIPTOR)a1, Alignment, a2, a3);
  if ( !*Alignment )
    *Alignment = 1LL;
  if ( *(_BYTE *)(a1 + 1) == 3 && (*(_BYTE *)(a1 + 4) & 0x10) != 0 && *(__int64 *)(a1 + 24) > 0xFFFFFF )
    *a3 = 0xFFFFFFLL;
  return 0LL;
}
