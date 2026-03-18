/*
 * XREFs of MiBytesToMapSystemImage @ 0x1406A6A80
 * Callers:
 *     MiSelectImageBase @ 0x14066F6E8 (MiSelectImageBase.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x14070F5A4 (MiMapSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140710698 (MiGetSystemAddressForImage.c)
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
  v2 = (((unsigned int)dword_1404648B0 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL) + v1;
  if ( v2 < a1 )
    return 0LL;
  result = (unsigned int)(dword_14046484C << 12) + v2;
  if ( result < a1 )
    return 0LL;
  return result;
}
