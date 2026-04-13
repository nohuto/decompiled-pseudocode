/*
 * XREFs of ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x1800971F4
 * Callers:
 *     ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180097F20 (-MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@A.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003D480 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180067F1C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x180097020 (-GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z.c)
 */

// Hidden C++ exception states: #wind=8
CreativeFramework::Actions::SetLockScreenHotspotsService *__fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this,
        wchar_t *a2,
        wchar_t *a3,
        wchar_t *a4,
        const wchar_t *lpString1)
{
  PSID *v8; // r12
  LPCWSTR *v9; // r15
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  wchar_t **v14; // rdx
  int CurrentUserSidString; // eax
  wil::details::in1diag3 *v16; // rcx
  WCHAR *v17; // r14
  DWORD LastError; // ebx
  BOOL v19; // eax
  const char *v20; // r9
  wil::details::in1diag3 *v21; // rcx
  PSID v22; // r15
  PSID v23; // r14
  DWORD v24; // ebx
  PSID Sid; // [rsp+40h] [rbp-10h] BYREF
  char v27; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  *(_QWORD *)this = &CreativeFramework::Actions::SetLockScreenHotspotsService::`vftable';
  v8 = (PSID *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  v9 = (LPCWSTR *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  v10 = (_QWORD *)((char *)this + 24);
  v10[3] = 7LL;
  v10[2] = 0LL;
  *(_WORD *)v10 = 0;
  if ( *a2 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
  }
  else
  {
    v11 = 0LL;
  }
  std::wstring::assign(v10, (char *)a2, v11);
  *((_QWORD *)this + 10) = 7LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_WORD *)this + 28) = 0;
  if ( *a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign((_QWORD *)this + 7, (char *)a3, v12);
  *((_QWORD *)this + 14) = 7LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_WORD *)this + 44) = 0;
  if ( *a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign((_QWORD *)this + 11, (char *)a4, v13);
  *((_BYTE *)this + 124) = 1;
  if ( lpString1 && CompareStringOrdinal(lpString1, -1, L"true", -1, 1) == 2 )
    *((_DWORD *)this + 30) = 1;
  Sid = 0LL;
  v27 = 1;
  CurrentUserSidString = CreativeFramework::Actions::GetCurrentUserSidString((CreativeFramework::Actions *)&Sid, v14);
  v16 = retaddr;
  if ( CurrentUserSidString < 0 )
    goto LABEL_29;
  if ( v27 )
  {
    v17 = (WCHAR *)*v9;
    if ( *v9 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v17);
      SetLastError(LastError);
    }
    *v9 = (LPCWSTR)Sid;
  }
  Sid = 0LL;
  v27 = 1;
  v19 = ConvertStringSidToSidW(*v9, &Sid);
  v21 = retaddr;
  if ( !v19 )
  {
LABEL_30:
    wil::details::in1diag3::_Throw_GetLastError(
      v21,
      (void *)0x3F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      v20);
    JUMPOUT(0x180097436LL);
  }
  if ( v27 )
  {
    v22 = Sid;
    v23 = *v8;
    if ( *v8 )
    {
      v24 = GetLastError();
      LocalFree(v23);
      SetLastError(v24);
    }
    *v8 = v22;
  }
  if ( !IsValidSid(*v8) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)0x8000FFFFLL);
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)CurrentUserSidString);
    goto LABEL_30;
  }
  return this;
}
