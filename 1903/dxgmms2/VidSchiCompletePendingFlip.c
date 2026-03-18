/*
 * XREFs of VidSchiCompletePendingFlip @ 0x1C003A45C
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0003A50 (VidSchiSetFlipDevice.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0039FD4 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029F14 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C003A4F4 (VidSchiCompletePendingFlipOnPlane.c)
 */

__int64 __fastcall VidSchiCompletePendingFlip(int a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rsi
  int i; // edi
  unsigned int FlipQueue; // eax
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-10h]
  int v13; // [rsp+3Ch] [rbp-Ch]

  v4 = a3;
  v12 = a3;
  v11 = a2;
  for ( i = -1; ; ++i )
  {
    v13 = i;
    if ( i == *(_DWORD *)(a2 + 140) )
      break;
    FlipQueue = (unsigned int)VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v11);
    VidSchiCompletePendingFlipOnPlane(a1, a2, v4, FlipQueue, a4);
  }
  if ( a4 == 9 )
    *(_DWORD *)(*(_QWORD *)(a2 + 8 * v4 + 2576) + 2344LL) = 0;
  return 0LL;
}
