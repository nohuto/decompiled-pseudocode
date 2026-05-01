/*
 * XREFs of ??_EWindowArrangementView@@UEAAPEAXI@Z @ 0x18035AF90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x18035AC84 (--1WindowArrangementView@@UEAA@XZ.c)
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
