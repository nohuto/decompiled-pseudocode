/*
 * XREFs of MiAddressToRetpolineBit @ 0x1402B91E0
 * Callers:
 *     MiMarkRetpolineBits @ 0x140854FB0 (MiMarkRetpolineBits.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAddressToRetpolineBit(__int64 a1)
{
  return (unsigned __int64)(a1 + 0x800000000000LL) >> 16;
}
