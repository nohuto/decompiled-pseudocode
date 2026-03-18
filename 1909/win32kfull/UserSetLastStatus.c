/*
 * XREFs of UserSetLastStatus @ 0x1C010CF58
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0015F50 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C001A6E0 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserConsoleControl @ 0x1C0020710 (NtUserConsoleControl.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0026C20 (NtUserFindExistingCursorIcon.c)
 *     NtUserUpdateLayeredWindow @ 0x1C002D690 (NtUserUpdateLayeredWindow.c)
 *     NtUserOpenWindowStation @ 0x1C007D1F0 (NtUserOpenWindowStation.c)
 *     NtUserRegisterWindowMessage @ 0x1C00D9F40 (NtUserRegisterWindowMessage.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C00FAA40 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0106E60 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C010CDE0 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0116BB0 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelStartup @ 0x1C011B180 (NtUserDwmKernelStartup.c)
 *     NtUserDwmKernelShutdown @ 0x1C022B030 (NtUserDwmKernelShutdown.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C022F810 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserSetAutoRotation @ 0x1C0233AC0 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C0236520 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
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
