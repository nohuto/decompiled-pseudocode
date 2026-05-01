/*
 * XREFs of ?HotKeyInvoked@CControlCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180199030
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CControlCenterExperienceManager@@AEAAJXZ @ 0x180198FE4 (-Hide@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CControlCenterExperienceManager@@AEAAJXZ @ 0x18019A7E4 (-Show@CControlCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CControlCenterExperienceManager::HotKeyInvoked(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 112) == 2 )
    {
      v2 = CControlCenterExperienceManager::Hide((CControlCenterExperienceManager *)(a1 - 32));
      if ( v2 < 0 )
      {
        v3 = 276LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v3,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
        return (unsigned int)v2;
      }
    }
    else
    {
      v2 = CControlCenterExperienceManager::Show((CControlCenterExperienceManager *)(a1 - 32));
      if ( v2 < 0 )
      {
        v3 = 280LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
