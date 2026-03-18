/*
 * XREFs of atoi @ 0x14019F6A0
 * Callers:
 *     KiInitializeBootStructures @ 0x14059FFC0 (KiInitializeBootStructures.c)
 * Callees:
 *     atol @ 0x14019F6C0 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
