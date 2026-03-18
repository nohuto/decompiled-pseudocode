/*
 * XREFs of ClrWFNoDwmNotify @ 0x1C01C6FD0
 * Callers:
 *     xxxSetWindowStyle @ 0x1C002C580 (xxxSetWindowStyle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 */

char __fastcall ClrWFNoDwmNotify(__int64 a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 0);
}
