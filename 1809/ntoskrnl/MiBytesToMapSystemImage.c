/*
 * XREFs of MiBytesToMapSystemImage @ 0x1406521DC
 * Callers:
 *     MiSelectImageBase @ 0x14064F7FC (MiSelectImageBase.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x1406820E4 (MiMapSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140682F40 (MiGetSystemAddressForImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiBytesToMapSystemImage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 result; // rax

  v1 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v1 < a1 )
    return 0LL;
  v2 = (((unsigned int)dword_140438E74 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL) + v1;
  if ( v2 < a1 )
    return 0LL;
  result = (unsigned int)(dword_140438E34 << 12) + v2;
  if ( result < a1 )
    return 0LL;
  return result;
}
