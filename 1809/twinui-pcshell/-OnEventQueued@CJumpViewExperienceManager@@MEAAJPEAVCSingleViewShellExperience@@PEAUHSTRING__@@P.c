/*
 * XREFs of ?OnEventQueued@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18016E100
 * Callers:
 *     <none>
 * Callees:
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x180021DE8 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18007F7A0 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CJumpViewExperienceManager::OnEventQueued(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  HSTRING_HEADER *v10; // rax
  HSTRING_HEADER *v11; // rax
  int v12[2]; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v13; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)v12 = a3;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v13,
         (const WCHAR **)&JumpViewExperienceEvents::DismissForLaunch);
  if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v12, (__int64)v6) )
  {
    v7 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)((char *)this - 64), 0);
    if ( v7 < 0 )
    {
      v8 = 613LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      return (unsigned int)v7;
    }
  }
  else
  {
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v13,
            (const WCHAR **)&JumpViewExperienceEvents::DismissToCaller);
    if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v12, (__int64)v10) )
    {
      v7 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)((char *)this - 64), 1);
      if ( v7 < 0 )
      {
        v8 = 618LL;
        goto LABEL_4;
      }
    }
    else
    {
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &v13,
              (const WCHAR **)&JumpViewExperienceEvents::Focus);
      if ( Microsoft::WRL::Wrappers::operator==((HSTRING *)v12, (__int64)v11) )
      {
        if ( !*((_QWORD *)a2 + 3)
          || *((_DWORD *)a2 + 10) != 2
          || (v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 10) + 80LL))(*((_QWORD *)a2 + 10)), v7 >= 0) )
        {
          v7 = 0;
        }
        if ( v7 < 0 )
        {
          v8 = 622LL;
          goto LABEL_4;
        }
      }
    }
  }
  return 0LL;
}
