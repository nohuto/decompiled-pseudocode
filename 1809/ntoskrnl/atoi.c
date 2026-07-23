/*
 * XREFs of atoi @ 0x140195090
 * Callers:
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 * Callees:
 *     atol @ 0x1401950B0 (atol.c)
 */

int __cdecl atoi(const char *Str)
{
  return atol(Str);
}
