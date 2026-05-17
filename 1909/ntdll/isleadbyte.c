/*
 * XREFs of isleadbyte @ 0x1800906B8
 * Callers:
 *     ReadString @ 0x180095FB4 (ReadString.c)
 *     _input_l @ 0x180096340 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
