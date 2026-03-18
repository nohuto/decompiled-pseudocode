/*
 * XREFs of xxxCancelTrackingForThread @ 0x1C02005C0
 * Callers:
 *     xxxCancelTracking @ 0x1C0134DA0 (xxxCancelTracking.c)
 * Callees:
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     IsInsideMenuLoop @ 0x1C0139498 (IsInsideMenuLoop.c)
 *     bSetDevDragRect @ 0x1C0139C20 (bSetDevDragRect.c)
 *     ChangeComposableCursor @ 0x1C01CC3EC (ChangeComposableCursor.c)
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxCancelTrackingForThread(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 664);
    if ( v1 )
    {
      v3 = *(_DWORD *)(v1 + 196);
      if ( (v3 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0LL);
        v3 = *(_DWORD *)(v1 + 196) & 0xF7FFFFFF;
      }
      *(_DWORD *)(v1 + 196) = v3 | 8;
      if ( (*(_DWORD *)(a1 + 480) & 0x10) != 0 )
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
        if ( (*(_DWORD *)(v1 + 196) & 0x20) == 0 )
          xxxDrawDragRectEx((struct _MOVESIZEDATA *)v1);
      }
      *(_DWORD *)(a1 + 480) &= ~0x10u;
      if ( *(_QWORD *)(a1 + 424) )
        SetWakeBit(a1, 2u);
      if ( (unsigned int)IsInsideMenuLoop(a1) )
      {
        v4 = *(_QWORD *)(a1 + 664);
        if ( v4 )
          PostMessage(*(_QWORD *)(v4 + 16), 31, 0, 0);
      }
      xxxCapture(a1, 0LL, 0);
    }
  }
}
