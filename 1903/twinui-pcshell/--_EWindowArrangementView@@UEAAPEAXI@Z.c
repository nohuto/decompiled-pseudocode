/*
 * XREFs of ??_EWindowArrangementView@@UEAAPEAXI@Z @ 0x1803C0D50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x1803C0A3C (--1WindowArrangementView@@UEAA@XZ.c)
 */

WindowArrangementView *__fastcall WindowArrangementView::`vector deleting destructor'(
        WindowArrangementView *this,
        char a2)
{
  WindowArrangementView::~WindowArrangementView(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
