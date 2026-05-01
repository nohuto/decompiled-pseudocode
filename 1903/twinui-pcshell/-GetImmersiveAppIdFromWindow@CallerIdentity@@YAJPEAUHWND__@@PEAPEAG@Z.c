/*
 * XREFs of ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180406D20
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18003AE00 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18013BAD0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z @ 0x18014F0E0 (-GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x1802746E8 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180274C20 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18030FA24 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x180407A60 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 *     ?VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z @ 0x180408054 (-VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18000EF60 (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18001D500 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??$?0PEAX$$V@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@$$QEAPEAX@Z @ 0x18001D84C (--$-0PEAX$$V@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseH.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001D85C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CallerIdentity::GetImmersiveAppIdFromWindow(
        CallerIdentity *this,
        unsigned int **a2,
        unsigned __int16 **a3)
{
  const char *v5; // r9
  __int64 v7; // rdx
  wil::details *v8; // rcx
  __int64 v9; // r8
  const char *v10; // r9
  HANDLE v11; // rbx
  int LastError; // eax
  unsigned __int16 **v13; // r8
  const char *v14; // r9
  int ProcessAppId; // edi
  int WeakWindowAppId; // eax
  int v17[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD dwProcessId; // [rsp+58h] [rbp+10h] BYREF
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF
  HANDLE ProcessHandle; // [rsp+68h] [rbp+20h] BYREF

  *a2 = 0LL;
  if ( !GetWindowThreadProcessId((HWND)this, &dwProcessId) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x6B,
             (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
             v5);
  *(_QWORD *)v17 = OpenProcess(0x1000u, 0, dwProcessId);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
    &ProcessHandle,
    v17);
  v11 = ProcessHandle;
  if ( (((unsigned __int64)ProcessHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v20 = 0LL;
    if ( (unsigned int)GetProcessUIContextInformation(ProcessHandle, &v20) )
    {
      if ( (_DWORD)v20 == 2
        && (WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(this, a2, v13),
            ProcessAppId = WeakWindowAppId,
            WeakWindowAppId < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x78,
          (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
          (const char *)(unsigned int)WeakWindowAppId);
      }
      else if ( *a2 || (ProcessAppId = CallerIdentity::GetProcessAppId(v11, a2, v13), ProcessAppId >= 0) )
      {
        ProcessAppId = 0;
      }
      goto LABEL_14;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x71,
                  (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                  v14);
  }
  else
  {
    LastError = wil::details::GetLastErrorFailHr(v8, v7, v9, v10);
  }
  ProcessAppId = LastError;
LABEL_14:
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&ProcessHandle);
  return (unsigned int)ProcessAppId;
}
