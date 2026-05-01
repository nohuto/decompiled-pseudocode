/*
 * XREFs of ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180426580
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x18013F69C (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x1802645CC (-GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z.c)
 *     ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1803ADD24 (-_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180426A88 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180027870 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1800548AC (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180426614 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessAppId(unsigned int **this, unsigned __int16 **a2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  int CallingProcessHandle; // ebx
  unsigned __int16 **v6; // r8
  int ProcessAppId; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE ProcessHandle; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *this = 0LL;
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&ProcessHandle);
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v4, 1LL, &ProcessHandle);
  if ( CallingProcessHandle < 0 )
    goto LABEL_6;
  ProcessAppId = CallerIdentity::GetProcessAppId(ProcessHandle, this, v6);
  CallingProcessHandle = ProcessAppId;
  if ( ProcessAppId == -2147023728 || ProcessAppId == -2147024891 )
    goto LABEL_6;
  if ( ProcessAppId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)ProcessAppId);
LABEL_6:
    v2 = CallingProcessHandle;
  }
  CAutoHandle<void *>::~CAutoHandle<void *>(&ProcessHandle);
  return v2;
}
