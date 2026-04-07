/*
 * XREFs of ?SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z @ 0x1800AF878
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180038DD0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDCompDesktopThumbnailCVI::SetSourceRect(CDCompDesktopThumbnailCVI *this, const struct tagRECT *a2)
{
  unsigned int v3; // ebx
  HMONITOR v4; // rax

  v3 = 0;
  v4 = MonitorFromRect(a2, 0);
  if ( v4 )
  {
    *((_QWORD *)this + 7) = v4;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x21Fu);
  }
  return v3;
}
