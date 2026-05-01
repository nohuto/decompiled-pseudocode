/*
 * XREFs of ??_GSnapAssistViewInvocationAnimationCoordinator@@UEAAPEAXI@Z @ 0x18035F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ @ 0x18035E40C (--1MultitaskingViewAnimationCoordinatorBase@@QEAA@XZ.c)
 */

SnapAssistViewInvocationAnimationCoordinator *__fastcall SnapAssistViewInvocationAnimationCoordinator::`scalar deleting destructor'(
        SnapAssistViewInvocationAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 57) = -1073741823;
  MultitaskingViewAnimationCoordinatorBase::~MultitaskingViewAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
