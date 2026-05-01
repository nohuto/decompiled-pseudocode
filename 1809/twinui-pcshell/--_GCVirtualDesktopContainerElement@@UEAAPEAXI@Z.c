/*
 * XREFs of ??_GCVirtualDesktopContainerElement@@UEAAPEAXI@Z @ 0x180320EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??1CVirtualDesktopContainerElement@@UEAA@XZ @ 0x180320D44 (--1CVirtualDesktopContainerElement@@UEAA@XZ.c)
 */

CVirtualDesktopContainerElement *__fastcall CVirtualDesktopContainerElement::`scalar deleting destructor'(
        CVirtualDesktopContainerElement *this,
        char a2)
{
  CVirtualDesktopContainerElement::~CVirtualDesktopContainerElement(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
