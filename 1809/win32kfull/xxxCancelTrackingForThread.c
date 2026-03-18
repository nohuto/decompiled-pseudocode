/*
 * XREFs of xxxCancelTrackingForThread @ 0x1C01EAB00
 * Callers:
 *     xxxCancelTracking @ 0x1C00D81FC (xxxCancelTracking.c)
 * Callees:
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     IsInsideMenuLoop @ 0x1C0120900 (IsInsideMenuLoop.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     ChangeComposableCursor @ 0x1C01B871C (ChangeComposableCursor.c)
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxCancelTrackingForThread(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 672);
    if ( v1 )
    {
      v3 = *(_DWORD *)(v1 + 196);
      if ( (v3 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0);
        v3 = *(_DWORD *)(v1 + 196) & 0xF7FFFFFF;
        *(_DWORD *)(v1 + 196) = v3;
      }
      *(_DWORD *)(v1 + 196) = v3 | 8;
      if ( (*(_DWORD *)(a1 + 488) & 0x10) != 0 )
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        if ( (*(_DWORD *)(v1 + 196) & 0x20) == 0 )
          xxxDrawDragRectEx((struct _MOVESIZEDATA *)v1);
      }
      *(_DWORD *)(a1 + 488) &= ~0x10u;
      if ( *(_QWORD *)(a1 + 432) )
        SetWakeBit(a1, 2u);
      if ( (unsigned int)IsInsideMenuLoop(a1) )
      {
        v4 = *(_QWORD *)(a1 + 672);
        if ( v4 )
          PostMessage(*(struct tagWND **)(v4 + 16), 0x1Fu, 0LL, 0LL);
      }
      xxxCapture((_QWORD *)a1, 0LL, 0);
    }
  }
}
