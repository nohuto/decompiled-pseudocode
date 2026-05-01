/*
 * XREFs of ?_SetWindowBand@RetailDemoExperienceManager@@AEAAXXZ @ 0x180186A78
 * Callers:
 *     ?SetWindowBand@RetailDemoExperienceManager@@UEAAJH@Z @ 0x180185930 (-SetWindowBand@RetailDemoExperienceManager@@UEAAJH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x180186AC8 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_SetWindowBand(RetailDemoExperienceManager *this)
{
  __int64 v2; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 25);
  if ( !v2 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      374LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, *((unsigned int *)this + 86));
}
