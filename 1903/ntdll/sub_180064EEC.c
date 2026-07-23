/*
 * XREFs of sub_180064EEC @ 0x180064EEC
 * Callers:
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_180064FB8 @ 0x180064FB8 (sub_180064FB8.c)
 *     sub_180065058 @ 0x180065058 (sub_180065058.c)
 * Callees:
 *     sub_180064FB8 @ 0x180064FB8 (sub_180064FB8.c)
 */

int __fastcall sub_180064EEC(PVOID *BaseAddress)
{
  sub_180064FB8(BaseAddress[22]);
  *((_DWORD *)BaseAddress + 26) &= ~0x20u;
  *((_DWORD *)BaseAddress + 69) = 1;
  return sub_18001B678((char *)BaseAddress);
}
