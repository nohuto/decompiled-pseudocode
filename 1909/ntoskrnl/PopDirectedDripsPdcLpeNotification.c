/*
 * XREFs of PopDirectedDripsPdcLpeNotification @ 0x1408A3FF0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueDirectedDripsWork @ 0x1402F15A0 (PopQueueDirectedDripsWork.c)
 */

__int64 __fastcall PopDirectedDripsPdcLpeNotification(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( _InterlockedExchangeAdd(&PopDirectedDripsEngaged, 0) )
  {
    *(_BYTE *)(a1 + 56) = a2 == 1;
    PopQueueDirectedDripsWork((struct _KEVENT *)a1, 0x1010000uLL);
    return 259;
  }
  return v2;
}
