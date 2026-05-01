/*
 * XREFs of ??_EVirtualDesktopRemoveAnimationCoordinator@@UEAAPEAXI@Z @ 0x18037B690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x18037B450 (--1ItemAnimationCoordinatorBase@@QEAA@XZ.c)
 */

VirtualDesktopRemoveAnimationCoordinator *__fastcall VirtualDesktopRemoveAnimationCoordinator::`vector deleting destructor'(
        VirtualDesktopRemoveAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 61) = -1073741823;
  ItemAnimationCoordinatorBase::~ItemAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
