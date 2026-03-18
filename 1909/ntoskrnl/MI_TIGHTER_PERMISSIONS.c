/*
 * XREFs of MI_TIGHTER_PERMISSIONS @ 0x1400FABB4
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x14005E570 (MmSetAddressRangeModifiedEx.c)
 *     MmProtectPool @ 0x1400ECD14 (MmProtectPool.c)
 *     MiSetSystemCodeProtection @ 0x1400FA778 (MiSetSystemCodeProtection.c)
 *     MiProtectEnclavePages @ 0x1402D4818 (MiProtectEnclavePages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_TIGHTER_PERMISSIONS(__int64 a1, __int64 a2)
{
  return (a2 & 0x40) == 0 && (a1 & 0x40) != 0 || (a2 & 2) == 0 && (a1 & 2) != 0 || a2 < 0 && a1 >= 0;
}
