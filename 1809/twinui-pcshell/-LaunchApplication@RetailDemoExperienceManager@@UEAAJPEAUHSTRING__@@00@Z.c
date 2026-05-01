/*
 * XREFs of ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x180184B30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1800629D0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18006C29C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180083640 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18013A520 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?_Close@RetailDemoExperienceManager@@AEAAXXZ @ 0x180186024 (-_Close@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801862F8 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x180186AC8 (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180186C84 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall RetailDemoExperienceManager::LaunchApplication(
        RetailDemoExperienceManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  RetailDemoExperienceManager *v7; // r14
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r8
  RetailDemoExperienceManager *v12; // r15
  WCHAR *v13; // rax
  PCWSTR v14; // rax
  _WORD *v15; // rbx
  _WORD *v16; // rdx
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int64 v19; // r9
  const WCHAR *v20; // rdx
  const unsigned __int16 *v21; // rcx
  int v22; // eax
  WCHAR *v23; // rsi
  const WCHAR *v24; // r8
  const WCHAR *v25; // rcx
  void *v26; // rbx
  DWORD v27; // eax
  PCWSTR v28; // rax
  __int64 v29; // r9
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  int v32; // eax
  const WCHAR *v33; // rbx
  const WCHAR *v34; // rsi
  const WCHAR *v35; // rax
  PCWSTR v36; // rax
  __int64 v37; // r9
  const unsigned __int16 *v38; // rcx
  int v39; // eax
  const char *v40; // r9
  __int64 result; // rax
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+30h] [rbp-B8h] BYREF
  LPCWCH lpString1[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+50h] [rbp-98h]
  _QWORD v45[4]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v46[4]; // [rsp+80h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v7 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 336));
  lpCriticalSection[0] = v8;
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( StringRawBuffer[v11] );
  try
  {
    std::wstring::assign((char *)v7 + 184, StringRawBuffer, v11);
    v12 = (RetailDemoExperienceManager *)((char *)v7 - 128);
    RetailDemoExperienceManager::_ParseExperienceArguments((char *)v7 - 128, (char *)v7 + 184);
    v13 = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
    std::wstring::wstring((__int64)lpString1, v13);
    if ( *((_QWORD *)v7 + 9) )
    {
      if ( *((_QWORD *)v7 + 17) )
      {
        v23 = (WCHAR *)((char *)v7 + 120);
        v24 = (const WCHAR *)((char *)v7 + 120);
        if ( *((_QWORD *)v7 + 18) >= 8uLL )
          v24 = *(const WCHAR **)v23;
        v25 = (const WCHAR *)lpString1;
        if ( *((_QWORD *)&v44 + 1) >= 8uLL )
          v25 = lpString1[0];
        if ( CompareStringOrdinal(v25, -1, v24, -1, 1) != 2 )
        {
          RetailDemoExperienceManager::_Close((RetailDemoExperienceManager *)((char *)v7 - 128));
          v26 = (void *)*((_QWORD *)v7 + 41);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
            lpCriticalSection,
            0LL);
          v27 = WaitForSingleObject(v26, 0x1388u);
          wil::details::in1diag3::Log_HrIfMsg(
            retaddr,
            442LL,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
            (const char *)0x8000FFFFLL,
            v27 == 258,
            (bool)"RDX Experience Manager timeout waiting for close",
            (const char *)lpCriticalSection[0]);
          v28 = WindowsGetStringRawBuffer(a3, 0LL);
          do
            ++v10;
          while ( v28[v10] );
          v7 = (RetailDemoExperienceManager *)((char *)v7 + 152);
          std::wstring::assign((char *)v7, v28, v10);
          v30 = *(_OWORD *)v23;
          v31 = *((_OWORD *)v23 + 1);
          *(_OWORD *)v23 = *(_OWORD *)lpString1;
          *((_OWORD *)v23 + 1) = v44;
          *(_OWORD *)lpString1 = v30;
          v44 = v31;
          if ( *((_QWORD *)v7 + 3) >= 8uLL )
            v7 = *(RetailDemoExperienceManager **)v7;
          if ( *((_QWORD *)v23 + 3) >= 8uLL )
            v23 = *(WCHAR **)v23;
          v32 = ActivateApplicationForExperienceWithPropertySet(
                  v23,
                  (const WCHAR *)v7,
                  (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
                  v29,
                  1u,
                  0LL);
          if ( v32 >= 0 )
            goto LABEL_44;
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            446LL,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
            (const char *)(unsigned int)v32);
        }
      }
      v33 = (const WCHAR *)((char *)v7 + 152);
      v34 = (const WCHAR *)((char *)v7 + 152);
      if ( *((_QWORD *)v7 + 22) >= 8uLL )
        v34 = *(const WCHAR **)v33;
      v35 = WindowsGetStringRawBuffer(a3, 0LL);
      if ( CompareStringOrdinal(v34, v10, v35, v10, 1) != 2 )
      {
        v36 = WindowsGetStringRawBuffer(a3, 0LL);
        do
          ++v10;
        while ( v36[v10] );
        std::wstring::assign((char *)v7 + 152, v36, v10);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
          lpCriticalSection,
          0LL);
        if ( *((_QWORD *)v7 + 22) >= 8uLL )
          v33 = *(const WCHAR **)v33;
        v38 = (const unsigned __int16 *)((char *)v7 + 120);
        if ( *((_QWORD *)v7 + 18) >= 8uLL )
          v38 = *(const unsigned __int16 **)v38;
        v39 = ActivateApplicationForExperienceWithPropertySet(
                v38,
                v33,
                (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
                v37,
                1u,
                0LL);
        if ( v39 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            455LL,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
            (const char *)(unsigned int)v39);
      }
      RetailDemoExperienceManager::_Show(v12);
    }
    else
    {
      v14 = WindowsGetStringRawBuffer(a3, 0LL);
      do
        ++v10;
      while ( v14[v10] );
      v15 = (_WORD *)((char *)v7 + 152);
      std::wstring::assign((char *)v7 + 152, v14, v10);
      v16 = (_WORD *)((char *)v7 + 120);
      v17 = *(_OWORD *)((char *)v7 + 120);
      v18 = *(_OWORD *)((char *)v7 + 136);
      *(_OWORD *)((char *)v7 + 120) = *(_OWORD *)lpString1;
      *(_OWORD *)((char *)v7 + 136) = v44;
      *(_OWORD *)lpString1 = v17;
      v44 = v18;
      if ( *((_QWORD *)v7 + 18) >= 8uLL )
        v16 = *(_WORD **)v16;
      std::wstring::wstring((__int64)v46, v16);
      if ( *((_QWORD *)v7 + 22) >= 8uLL )
        v15 = *(_WORD **)v15;
      std::wstring::wstring((__int64)v45, v15);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        lpCriticalSection,
        0LL);
      v20 = (const WCHAR *)v45;
      if ( v45[3] >= 8uLL )
        v20 = (const WCHAR *)v45[0];
      v21 = (const unsigned __int16 *)v46;
      if ( v46[3] >= 8uLL )
        v21 = (const unsigned __int16 *)v46[0];
      v22 = ActivateApplicationForExperienceWithPropertySet(
              v21,
              v20,
              (__int64)L"Windows.Internal.ShellExperience.RetailDemo",
              v19,
              1u,
              0LL);
      if ( v22 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          426LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
          (const char *)(unsigned int)v22);
      std::wstring::_Tidy_deallocate(v45);
      std::wstring::_Tidy_deallocate(v46);
    }
LABEL_44:
    std::wstring::_Tidy_deallocate(lpString1);
    if ( lpCriticalSection[0] )
      LeaveCriticalSection(lpCriticalSection[0]);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1D2,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v40);
  }
  return result;
}
