/*
 * XREFs of KdTrap @ 0x1400A33EC
 * Callers:
 *     KiDispatchException @ 0x1400A2F50 (KiDispatchException.c)
 * Callees:
 *     KdpStub @ 0x1400A3420 (KdpStub.c)
 *     KdpTrap @ 0x140919518 (KdpTrap.c)
 */

__int64 __fastcall KdTrap(int a1, int a2, int a3, int a4, char a5, char a6)
{
  if ( KdpDebugRoutineSelect )
    return KdpTrap(a1, a2, a3, a4, a5, a6);
  else
    return KdpStub(a1, a2, a3, a4, a5, a6);
}
