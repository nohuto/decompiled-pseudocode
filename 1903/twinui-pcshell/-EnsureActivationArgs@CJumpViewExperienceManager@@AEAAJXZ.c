/*
 * XREFs of ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x18019BCE0
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019DE30 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180052490 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180117764 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x18019A8D0 (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un_ea_18019A8D0.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18019E9EC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18019EA64 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CJumpViewExperienceManager::EnsureActivationArgs(HSTRING *this)
{
  const wchar_t *v2; // rdx
  HRESULT v3; // eax
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  UINT32 v7; // [rsp+20h] [rbp-48h] BYREF
  HSTRING string[2]; // [rsp+28h] [rbp-40h] BYREF
  wchar_t *Src[2]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v10[2]; // [rsp+48h] [rbp-20h]
  unsigned __int64 v11; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  string[1] = (HSTRING)-2LL;
  WindowsGetStringRawBuffer(this[43], &v7);
  try
  {
    *(_QWORD *)v10 = 0LL;
    v11 = 7LL;
    LOWORD(Src[0]) = 0;
    if ( v7 + 43 >= 8 )
    {
      std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___(
        (void **)Src,
        v7 + 43);
      *(_QWORD *)v10 = 0LL;
    }
    std::wstring::append(Src);
    std::wstring::append(Src, 1LL, 32LL);
    std::wstring::append(Src);
    string[0] = 0LL;
    v2 = (const wchar_t *)Src;
    if ( v11 >= 8 )
      v2 = Src[0];
    v3 = Microsoft::WRL::Wrappers::HString::Set(string, v2, v10[0]);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        893LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    v4 = CSingleViewShellExperience::SetArgs(this + 19, string[0]);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        894LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    WindowsDeleteString(string[0]);
    string[0] = 0LL;
    std::wstring::_Tidy_deallocate(Src);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x381,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
                           v5);
  }
  return result;
}
