/*
 * XREFs of ClrWFNoDwmNotify @ 0x1C01DA394
 * Callers:
 *     xxxSetWindowStyle @ 0x1C009B250 (xxxSetWindowStyle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 */

char __fastcall ClrWFNoDwmNotify(__int64 a1, unsigned __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 0);
}
