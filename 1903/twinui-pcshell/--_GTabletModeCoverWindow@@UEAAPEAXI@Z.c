/*
 * XREFs of ??_GTabletModeCoverWindow@@UEAAPEAXI@Z @ 0x1803C8410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1TabletModeCoverWindow@@UEAA@XZ @ 0x1803C8318 (--1TabletModeCoverWindow@@UEAA@XZ.c)
 */

TabletModeCoverWindow *__fastcall TabletModeCoverWindow::`scalar deleting destructor'(
        TabletModeCoverWindow *this,
        char a2)
{
  TabletModeCoverWindow::~TabletModeCoverWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
