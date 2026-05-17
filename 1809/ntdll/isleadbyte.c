/*
 * XREFs of isleadbyte @ 0x180093768
 * Callers:
 *     ReadString @ 0x180099064 (ReadString.c)
 *     _input_l @ 0x1800993F0 (_input_l.c)
 * Callees:
 *     <none>
 */

int __cdecl isleadbyte(int C)
{
  return pctype[(unsigned __int8)C] & 0x8000;
}
