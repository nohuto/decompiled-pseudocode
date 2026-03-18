/*
 * XREFs of MiSelectSystemImageAddress @ 0x140683888
 * Callers:
 *     MiSelectImageBase @ 0x14064F81C (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140682F60 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x1406838CC (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
