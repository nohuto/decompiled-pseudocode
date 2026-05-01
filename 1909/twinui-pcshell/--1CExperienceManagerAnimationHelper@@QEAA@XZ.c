/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180432164
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180097080 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1ShellFeedsDesktopExperienceView@@UEAA@XZ @ 0x18009BD50 (--1ShellFeedsDesktopExperienceView@@UEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x180194068 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180198944 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x1801A3DC0 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801B12A4 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$16 @ 0x1801B5BD1 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$16.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$17 @ 0x1801B5BE4 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$17.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$16_0 @ 0x1801B5EF5 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$16_0.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$17_0 @ 0x1801B5F08 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$17_0.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1801B6008 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1801BA034 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1801C610C (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CortanaDesktopExperienceView@@UEAA@XZ @ 0x1801EDF40 (--1CortanaDesktopExperienceView@@UEAA@XZ.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$26 @ 0x18032C53E (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$26.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$27 @ 0x18032C551 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$27.c)
 *     ??1TouchKeyboardExperienceManager@@EEAA@XZ @ 0x18032CA04 (--1TouchKeyboardExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this)
{
  volatile int **v1; // rbx
  __int64 v2; // rcx

  v1 = (volatile int **)((char *)this + 24);
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    DestroyWindow(*(HWND *)(v2 + 24));
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(v1);
}
