/*
 * XREFs of MiAddressToRetpolineBit @ 0x1402B8FF0
 * Callers:
 *     MiMarkRetpolineBits @ 0x140853D50 (MiMarkRetpolineBits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAddressToRetpolineBit(__int64 a1)
{
  return (unsigned __int64)(a1 + 0x800000000000LL) >> 16;
}
