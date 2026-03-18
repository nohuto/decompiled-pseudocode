/*
 * XREFs of MiSelectSystemImageAddress @ 0x14071112C
 * Callers:
 *     MiSelectImageBase @ 0x14066F6E8 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140710698 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140711174 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(int a1, __int64 a2)
{
  __int64 result; // rax

  result = MiReserveDriverPtes((unsigned int)a2, a2, a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
