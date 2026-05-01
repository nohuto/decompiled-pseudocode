/*
 * XREFs of ?_GetCortanaEntryPointAndArgs@CortanaSharedExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x18004BBE8
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18004C1C0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180044FF0 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180048DA8 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18004BAD8 (--1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAAXXZ @ 0x18004BB04 (-StartActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@Q.c)
 *     ?_GetLaunchArgsSubstring@CortanaSharedExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z @ 0x18004BD50 (-_GetLaunchArgsSubstring@CortanaSharedExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_GetCortanaEntryPointAndArgs(
        CortanaSharedExperienceManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HSTRING *a4,
        HSTRING *string)
{
  const WCHAR *v8; // rcx
  UINT32 v9; // ebx
  HRESULT v10; // eax
  HRESULT v11; // eax
  unsigned int v12; // ebx
  int v14; // [rsp+20h] [rbp-E0h]
  int v15; // [rsp+20h] [rbp-E0h]
  PCNZWCH sourceString; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 length[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v18,
    (__int64)"CortanaExperienceManager_GetCortanaEntryPointAndArgs");
  v18[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v18);
  v8 = (const WCHAR *)L"Unknown";
  v9 = 7;
  sourceString = (PCNZWCH)L"Unknown";
  *(_QWORD *)length = 7LL;
  if ( a2 )
  {
    CortanaSharedExperienceManager::_GetLaunchArgsSubstring(
      a2,
      L"Positioner=",
      a3,
      &sourceString,
      (unsigned __int64 *)length);
    v10 = WindowsCreateString(sourceString, length[0], string);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x369,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v10,
        v15);
    CortanaSharedExperienceManager::_GetLaunchArgsSubstring(
      a2,
      L"StartMode=",
      a3,
      &sourceString,
      (unsigned __int64 *)length);
    if ( sourceString && wcsstr(sourceString, L"AppTransition") )
    {
      v8 = L"StartButton";
      v9 = 11;
    }
    else
    {
      CortanaSharedExperienceManager::_GetLaunchArgsSubstring(
        a2,
        L"QuerySource=",
        a3,
        &sourceString,
        (unsigned __int64 *)length);
      v8 = sourceString;
      if ( sourceString )
        v9 = length[0];
      else
        v8 = (const WCHAR *)L"Unknown";
    }
  }
  v11 = WindowsCreateString(v8, v9, a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v11,
      v14);
  }
  else
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18);
    v12 = 0;
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::~CortanaExperienceManager_GetCortanaEntryPointAndArgs((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v18);
  return v12;
}
