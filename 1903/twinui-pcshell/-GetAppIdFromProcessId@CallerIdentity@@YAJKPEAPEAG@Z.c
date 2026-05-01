/*
 * XREFs of ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x18000F7D4
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x18000EFD0 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstallBroker@@@experimental@std@@@23@PEAX@Z @ 0x18000F7C4 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAVPenWorkspaceAppInstal.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x18000F83C (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18001D500 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

__int64 __fastcall CallerIdentity::GetAppIdFromProcessId(DWORD dwProcessId, _QWORD *a2, unsigned __int16 **a3)
{
  HANDLE v4; // rax
  unsigned __int16 **v5; // r8
  signed int ProcessAppId; // edi
  signed int LastError; // eax
  HANDLE ProcessHandle; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = OpenProcess(0x1000u, 0, dwProcessId);
  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,PenWorkspaceAppInstallBroker *>::_Handle_from_frame(
    &ProcessHandle,
    (__int64)v4);
  if ( ProcessHandle )
    goto LABEL_2;
  LastError = GetLastError();
  ProcessAppId = LastError;
  if ( LastError > 0 )
    ProcessAppId = (unsigned __int16)LastError | 0x80070000;
  if ( ProcessAppId >= 0 )
LABEL_2:
    ProcessAppId = CallerIdentity::GetProcessAppId(ProcessHandle, a2, v5);
  CAutoHandle<void *>::~CAutoHandle<void *>(&ProcessHandle);
  return (unsigned int)ProcessAppId;
}
