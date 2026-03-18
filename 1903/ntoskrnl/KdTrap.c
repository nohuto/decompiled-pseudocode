/*
 * XREFs of KdTrap @ 0x140016274
 * Callers:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 * Callees:
 *     KdpStub @ 0x1400162A8 (KdpStub.c)
 *     KdpTrap @ 0x140957FB8 (KdpTrap.c)
 */

__int64 __fastcall KdTrap(int a1, int a2, int a3, int a4, char a5, char a6)
{
  if ( KdpDebugRoutineSelect )
    return KdpTrap(a1, a2, a3, a4, a5, a6);
  else
    return KdpStub(a1, a2, a3, a4, a5, a6);
}
