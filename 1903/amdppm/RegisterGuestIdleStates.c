/*
 * XREFs of RegisterGuestIdleStates @ 0x1C00215A0
 * Callers:
 *     <none>
 * Callees:
 *     RegisterVmIdleStates @ 0x1C00215C8 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterGuestIdleStates(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 264) & 0x200LL) != 0 )
    return RegisterVmIdleStates(a1);
  else
    return 0LL;
}
