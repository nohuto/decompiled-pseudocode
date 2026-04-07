/*
 * XREFs of ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18008D9BC
 * Callers:
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180038F10 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18008FF10 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x180091DD4 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180014EB4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnThumbnailAdded(CTopLevelWindow *this, struct CVisual *a2)
{
  int inserted; // eax
  unsigned int v4; // ebx
  int v5; // eax

  inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), a2, 0LL, 0, 1);
  v4 = inserted;
  if ( inserted >= 0 )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 66) + 72LL) == (*((_QWORD *)this + 59) != 0LL) + 1 )
    {
      v5 = CWindowData::NotifyRepresentationChanged(*((CWindowData **)this + 90));
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x691u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x68Bu);
  }
  return v4;
}
