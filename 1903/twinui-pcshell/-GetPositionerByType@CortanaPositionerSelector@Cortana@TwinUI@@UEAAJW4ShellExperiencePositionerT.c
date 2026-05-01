/*
 * XREFs of ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x180078500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x18007853C (-_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExp.c)
 *     ?_GetHoloExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x1801C007C (-_GetHoloExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperi.c)
 */

__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::GetPositionerByType(
        TwinUI::Cortana::CortanaPositionerSelector *a1,
        int a2,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a3)
{
  int v3; // edx
  int HoloExperiencePositioner; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        HoloExperiencePositioner = TwinUI::Cortana::CortanaPositionerSelector::_GetHoloExperiencePositioner(a1, a3);
        if ( HoloExperiencePositioner >= 0 )
          return (unsigned int)HoloExperiencePositioner;
        v6 = 42LL;
      }
      else
      {
        HoloExperiencePositioner = -2147024809;
        v6 = 48LL;
      }
    }
    else
    {
      HoloExperiencePositioner = TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner(a1, a3);
      if ( HoloExperiencePositioner >= 0 )
        return (unsigned int)HoloExperiencePositioner;
      v6 = 39LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
      (const char *)(unsigned int)HoloExperiencePositioner);
    return (unsigned int)HoloExperiencePositioner;
  }
  return 0LL;
}
