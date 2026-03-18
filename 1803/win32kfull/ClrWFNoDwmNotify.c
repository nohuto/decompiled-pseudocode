/*
 * XREFs of ClrWFNoDwmNotify @ 0x1C01A4E40
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00442C0 (xxxSetWindowStyle.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

char __fastcall ClrWFNoDwmNotify(__int64 a1, __int16 a2)
{
  return SetOrClrWF(0, a1, a2, 0);
}
