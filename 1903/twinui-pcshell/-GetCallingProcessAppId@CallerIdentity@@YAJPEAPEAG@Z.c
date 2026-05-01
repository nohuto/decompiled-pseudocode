/*
 * XREFs of ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180406F50
 * Callers:
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x1801201FC (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 *     ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x180244FDC (-GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z.c)
 *     ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18038E3D4 (-_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180407458 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18000F83C (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180018340 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18001D500 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180406FE4 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
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
