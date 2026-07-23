/*
 * XREFs of isleadbyte @ 0x180093778
 * Callers:
 *     ReadString @ 0x180099074 (ReadString.c)
 *     _input_l @ 0x180099400 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
