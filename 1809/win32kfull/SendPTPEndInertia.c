/*
 * XREFs of SendPTPEndInertia @ 0x1C01C2CB0
 * Callers:
 *     SendPTPCancelInertia @ 0x1C01C2C50 (SendPTPCancelInertia.c)
 * Callees:
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     zzzPostInertiaMessage @ 0x1C0226BCC (zzzPostInertiaMessage.c)
 */

__int64 __fastcall SendPTPEndInertia(__int64 a1)
{
  __int64 result; // rax

  EtwTraceTouchpadEndInertiaQueued();
  result = zzzPostInertiaMessage(572LL, a1, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 152), 1);
  *(_DWORD *)(a1 + 160) &= ~1u;
  if ( gtmridTouchpadInertiaTimer )
  {
    result = FindTimer(0LL, gtmridTouchpadInertiaTimer, 4u, 1, 0LL);
    gtmridTouchpadInertiaTimer = 0LL;
    ghdevTouchpad = 0LL;
  }
  return result;
}
