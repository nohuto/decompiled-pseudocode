/*
 * XREFs of ?OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801567E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180013C64 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?DecideDrawingArea@ImeNotificationExperienceManager@@AEAAJAEAUSize@Foundation@Windows@@PEAUtagRECT@@@Z @ 0x180156480 (-DecideDrawingArea@ImeNotificationExperienceManager@@AEAAJAEAUSize@Foundation@Windows@@PEAUtagRE.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::OnViewPropertiesChanging(
        ImeNotificationExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  struct Windows::Foundation::Size *v3; // rdx
  const char *v4; // r9
  int v5; // eax
  __int64 result; // rax
  struct tagRECT v7; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)&v7.left = 0LL;
  *(_QWORD *)&v7.right = 0LL;
  v3 = (struct CSingleViewShellExperience *)((char *)a2 + 44);
  try
  {
    if ( (int)ImeNotificationExperienceManager::DecideDrawingArea(this, v3, &v7) >= 0 )
    {
      if ( *((_QWORD *)this + 4) )
      {
        v5 = CSingleViewShellExperience::SetPosition((ImeNotificationExperienceManager *)((char *)this + 8), &v7);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            179LL,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
            (const char *)(unsigned int)v5);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9B,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
                           v4);
  }
  return result;
}
