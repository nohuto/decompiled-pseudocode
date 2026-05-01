/*
 * XREFs of ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800770B4
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180027110 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180114420 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z @ 0x1801259D0 (-GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x18021EFF8 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18021F530 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1803A1D1C (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 *     ?VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z @ 0x1803A2314 (-VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$?0PEAX$$V@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@$$QEAPEAX@Z @ 0x18003373C (--$-0PEAX$$V@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseH.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18003374C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003DA00 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18004DE8C (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CallerIdentity::GetImmersiveAppIdFromWindow(
        CallerIdentity *this,
        unsigned int **a2,
        unsigned __int16 **a3)
{
  const char *v5; // r9
  const char *v6; // r9
  HANDLE v7; // rbx
  __int64 v8; // rdx
  int ProcessAppId; // edi
  unsigned __int16 **v11; // r8
  int WeakWindowAppId; // eax
  int v13[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD dwProcessId; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  HANDLE ProcessHandle; // [rsp+68h] [rbp+20h] BYREF

  *a2 = 0LL;
  if ( GetWindowThreadProcessId((HWND)this, &dwProcessId) )
  {
    *(_QWORD *)v13 = OpenProcess(0x1000u, 0, dwProcessId);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
      &ProcessHandle,
      v13);
    v7 = ProcessHandle;
    if ( (((unsigned __int64)ProcessHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v16 = 0LL;
      if ( (unsigned int)GetProcessUIContextInformation(ProcessHandle, &v16) )
      {
        if ( (_DWORD)v16 == 2
          && (WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(this, a2, v11),
              ProcessAppId = WeakWindowAppId,
              WeakWindowAppId < 0) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x77,
            (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
            (const char *)(unsigned int)WeakWindowAppId);
        }
        else if ( *a2 || (ProcessAppId = CallerIdentity::GetProcessAppId(v7, a2, v11), ProcessAppId >= 0) )
        {
          ProcessAppId = 0;
        }
        goto LABEL_5;
      }
      v8 = 112LL;
    }
    else
    {
      v8 = 109LL;
    }
    ProcessAppId = wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v8,
                     (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                     v6);
LABEL_5:
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&ProcessHandle);
    return (unsigned int)ProcessAppId;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x6B,
           (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
           v5);
}
