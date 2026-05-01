/*
 * XREFs of ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802B5CAC
 * Callers:
 *     _lambda_090ae1e053e5c7adb69314d8c41aea26_::operator() @ 0x180092674 (_lambda_090ae1e053e5c7adb69314d8c41aea26_--operator().c)
 *     _lambda_4ae43a7ebf3caa9980047f7d59b4d07c_::operator() @ 0x180092AA8 (_lambda_4ae43a7ebf3caa9980047f7d59b4d07c_--operator().c)
 *     _lambda_95049987556ed2fca2fb7bfd11a04e1e_::operator() @ 0x180092F00 (_lambda_95049987556ed2fca2fb7bfd11a04e1e_--operator().c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1802B5958 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z @ 0x1802B6944 (-GetFrameWindowByViewId@TouchKeyboardExperienceManager@@AEAAJIPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18013B550 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180199084 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::FindViewInfo(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  RTL_SRWLOCK *v3; // rdi
  _QWORD *Ptr; // rcx
  _QWORD *i; // rdx
  unsigned int v9; // ebx
  char *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a1 + 56;
  AcquireSRWLockShared(a1 + 56);
  Ptr = a1[58].Ptr;
  for ( i = a1[57].Ptr; i != Ptr && (*(_BYTE *)(*i + 32LL) || *(_DWORD *)(*i + 36LL) != a2); i += 2 )
    ;
  if ( i == Ptr )
  {
    v9 = -2147023728;
    LODWORD(v11) = a2;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      2184LL,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80070490LL,
      (int)"viewId: %u",
      v11);
  }
  else
  {
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, i);
    v9 = 0;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v9;
}
