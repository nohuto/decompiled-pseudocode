/*
 * XREFs of MiSelectSystemImageAddress @ 0x140712F0C
 * Callers:
 *     MiSelectImageBase @ 0x14064904C (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140712478 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140712F54 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1, __int64 a2)
{
  __int64 result; // rax

  result = MiReserveDriverPtes((unsigned int)a2, a2, a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
