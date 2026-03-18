/*
 * XREFs of SetDeepDelayableVisRITTimer @ 0x1C001A868
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C001A6D0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C001A1B0 (InternalSetTimer.c)
 */

__int64 __fastcall SetDeepDelayableVisRITTimer(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d

  v2 = 864000000;
  if ( (gdwRITdemonLockState & 1) == 0 )
    v2 = a2;
  return InternalSetTimer(
           0LL,
           gtmridAniCursor,
           v2,
           (__int64)zzzAnimateCursor,
           (gdwRITdemonLockState & 1) != 0 ? 0x36EE80 : 0,
           20);
}
