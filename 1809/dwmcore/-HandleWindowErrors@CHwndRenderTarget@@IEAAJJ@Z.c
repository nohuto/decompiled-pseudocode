/*
 * XREFs of ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18004D3B8
 * Callers:
 *     ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x18004D1D8 (-InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z.c)
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18004D350 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x180097528 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x1800D8014 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800EAA00 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::HandleWindowErrors(CHwndRenderTarget *this, int a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( a2 < 0 )
  {
    switch ( a2 )
    {
      case -2003304442:
        goto LABEL_14;
      case -2003304309:
        v2 = 0;
        break;
      case -2003304307:
        v2 = -2003304307;
        break;
      case -2003304306:
LABEL_14:
        v2 = -2003304442;
        break;
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)((char *)this + 64));
    *((_BYTE *)this + 161) = 1;
    return v2;
  }
  switch ( a2 )
  {
    case 142213121:
      *((_BYTE *)this + 859) = 1;
      return v2;
    case 142213129:
      *((_BYTE *)this + 859) = 0;
      *((_BYTE *)this + 161) = 1;
      CHwndRenderTarget::UpdateMPOCaps(this, 1);
      return 0;
    case 142213130:
    case 142213167:
      ScheduleCompositionPass(0LL, 0x2000LL);
      *((_BYTE *)this + 857) = 1;
      return 0;
  }
  return v2;
}
