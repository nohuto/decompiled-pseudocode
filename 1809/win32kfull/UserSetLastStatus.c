/*
 * XREFs of UserSetLastStatus @ 0x1C00C8D04
 * Callers:
 *     NtUserFindExistingCursorIcon @ 0x1C006AEE0 (NtUserFindExistingCursorIcon.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0078020 (NtUserUpdateLayeredWindow.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C0079CD0 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserConsoleControl @ 0x1C00B27D0 (NtUserConsoleControl.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C00C8BA0 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00C91D0 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserOpenWindowStation @ 0x1C00EEB60 (NtUserOpenWindowStation.c)
 *     NtUserRegisterWindowMessage @ 0x1C00F3B00 (NtUserRegisterWindowMessage.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C0115D50 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0122EC0 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0131160 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelStartup @ 0x1C0135D70 (NtUserDwmKernelStartup.c)
 *     NtUserDwmKernelShutdown @ 0x1C02137E0 (NtUserDwmKernelShutdown.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0217FA0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserSetAutoRotation @ 0x1C021BF70 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C021E7F0 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  __int64 v6; // rcx
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v4 = 0;
    if ( Status < 0 )
      v4 = -1073741823;
  }
  else
  {
    v4 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process(v6);
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[200].Self) = Status;
    }
    if ( a2 )
    {
      v7 = RtlNtStatusToDosError(v4);
      return UserSetLastError(v7, v8, v9, v10);
    }
  }
  return result;
}
