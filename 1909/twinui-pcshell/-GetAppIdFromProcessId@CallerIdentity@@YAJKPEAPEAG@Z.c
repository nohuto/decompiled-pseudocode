/*
 * XREFs of ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x180054844
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180054050 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180027870 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1800548AC (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?_Handle_from_frame@?$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@SA?AU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@@experimental@std@@@23@PEAX@Z @ 0x180056618 (-_Handle_from_frame@-$_Resumable_helper_traits@Ufire_and_forget@winrt@@PEAUShellFeedsLauncher@im.c)
 */

__int64 __fastcall CallerIdentity::GetAppIdFromProcessId(DWORD dwProcessId, unsigned int **a2, unsigned __int16 **a3)
{
  HANDLE v4; // rax
  unsigned __int16 **v5; // r8
  int ProcessAppId; // edi
  signed int LastError; // eax
  HANDLE ProcessHandle; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = OpenProcess(0x1000u, 0, dwProcessId);
  std::experimental::_Resumable_helper_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher *>::_Handle_from_frame(
    &ProcessHandle,
    v4);
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
