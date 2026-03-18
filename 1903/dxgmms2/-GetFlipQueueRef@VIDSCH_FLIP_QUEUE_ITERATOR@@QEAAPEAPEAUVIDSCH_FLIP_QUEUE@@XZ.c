/*
 * XREFs of ?GetFlipQueueRef@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029F40
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0003A50 (VidSchiSetFlipDevice.c)
 * Callees:
 *     <none>
 */

struct VIDSCH_FLIP_QUEUE **__fastcall VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueueRef(VIDSCH_FLIP_QUEUE_ITERATOR *this)
{
  __int64 v1; // r8
  __int64 v2; // rcx

  v1 = *((int *)this + 3);
  v2 = *(_QWORD *)(*(_QWORD *)this + 8LL * *((unsigned int *)this + 2) + 2576);
  if ( (_DWORD)v1 == -1 )
    return (struct VIDSCH_FLIP_QUEUE **)(v2 + 24);
  else
    return (struct VIDSCH_FLIP_QUEUE **)(v2 + 8 * (v1 + 4));
}
