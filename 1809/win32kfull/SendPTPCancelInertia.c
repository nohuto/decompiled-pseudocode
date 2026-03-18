/*
 * XREFs of SendPTPCancelInertia @ 0x1C01C2C50
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     SendPTPEndInertia @ 0x1C01C2CB0 (SendPTPEndInertia.c)
 */

__int64 __fastcall SendPTPCancelInertia(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(unsigned int *)(a1 + 160);
    if ( (result & 1) != 0 )
      result = SendPTPEndInertia();
  }
  *(_DWORD *)(a1 + 160) &= ~1u;
  if ( gtmridTouchpadInertiaTimer )
  {
    result = FindTimer(0LL, gtmridTouchpadInertiaTimer, 4u, 1, 0LL);
    gtmridTouchpadInertiaTimer = 0LL;
    ghdevTouchpad = 0LL;
  }
  return result;
}
