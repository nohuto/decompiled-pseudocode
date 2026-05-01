/*
 * XREFs of ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1803AE1F4
 * Callers:
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x180148948 (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x18014CB6C (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CCortanaConversationExperienceManager@@QEAA@XZ @ 0x18014F438 (--0CCortanaConversationExperienceManager@@QEAA@XZ.c)
 *     ??0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ @ 0x180150EC0 (--0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ.c)
 *     ??0ImeNotificationExperienceManager@@QEAA@XZ @ 0x180156218 (--0ImeNotificationExperienceManager@@QEAA@XZ.c)
 *     ??0CTaskContinuityActivitiesExperienceManager@@QEAA@XZ @ 0x180157098 (--0CTaskContinuityActivitiesExperienceManager@@QEAA@XZ.c)
 *     ??0CToastCenterExperienceManager@@QEAA@XZ @ 0x180158870 (--0CToastCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x180161AB8 (--0CPeopleBarFlyoutExperienceManager@@QEAA@XZ.c)
 *     ??0CPeopleBarJumpViewExperienceManager@@QEAA@XZ @ 0x180165618 (--0CPeopleBarJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0CShoulderTapExperienceManager@@QEAA@XZ @ 0x1801673B4 (--0CShoulderTapExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@XZ @ 0x180169894 (--0CStartExperienceManager@@QEAA@XZ.c)
 *     ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x18016C468 (--0CJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0CQuickConnectExperienceManager@@QEAA@XZ @ 0x180171208 (--0CQuickConnectExperienceManager@@QEAA@XZ.c)
 *     ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x18017780C (--0CVirtualTouchpadExperienceManager@@QEAA@XZ.c)
 *     ??0CScreenClippingExperienceManager@@QEAA@XZ @ 0x18017C4A0 (--0CScreenClippingExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSingleViewShellExperience::CSingleViewShellExperience(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 1;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = SHTaskPoolGetUniqueContext(a1);
  *(_DWORD *)(a1 + 132) = a3;
  *(_DWORD *)(a1 + 136) = 0;
  *(_WORD *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 184) = 0;
  return result;
}
