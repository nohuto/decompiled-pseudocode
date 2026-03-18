/*
 * XREFs of ClrWFNoDwmNotify @ 0x1C01DA214
 * Callers:
 *     xxxSetWindowStyle @ 0x1C003C020 (xxxSetWindowStyle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 */

char __fastcall ClrWFNoDwmNotify(__int64 a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 0);
}
