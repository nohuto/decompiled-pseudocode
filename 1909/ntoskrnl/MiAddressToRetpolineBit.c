/*
 * XREFs of MiAddressToRetpolineBit @ 0x140154F50
 * Callers:
 *     MiMarkRetpolineBits @ 0x140711694 (MiMarkRetpolineBits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAddressToRetpolineBit(__int64 a1)
{
  return (unsigned __int64)(a1 + 0x800000000000LL) >> 16;
}
