/*
 * XREFs of NtUserOpenInputDesktop @ 0x1C00EE570
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00BB984 (CloseProtectedHandle.c)
 *     _GetProcessWindowStation @ 0x1C00EEB20 (_GetProcessWindowStation.c)
 *     OpenDesktopCompletion @ 0x1C00F0E28 (OpenDesktopCompletion.c)
 */

HANDLE __fastcall NtUserOpenInputDesktop(unsigned int a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ProcessWindowStation; // rax
  __int64 v11; // rcx
  PVOID v12; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  HANDLE v20; // rbx
  NTSTATUS v22; // ecx
  __int64 v23; // rcx
  const UNICODE_STRING *NameInfo; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Handle = 0LL;
  AccessMode = 1;
  EnterCrit(0LL, 1LL);
  if ( !grpdeskRitInput )
  {
LABEL_26:
    v23 = 110LL;
    goto LABEL_27;
  }
  ProcessWindowStation = GetProcessWindowStation(&DestinationString);
  if ( !ProcessWindowStation )
  {
    v23 = 5LL;
LABEL_27:
    Handle = 0LL;
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    v23 = 1LL;
    goto LABEL_27;
  }
  if ( gbDesktopLocked )
    v12 = gspdeskShouldBeForeground;
  else
    v12 = (PVOID)grpdeskRitInput;
  if ( !v12 )
    goto LABEL_26;
  CurrentProcess = PsGetCurrentProcess(v11, v7, v8, v9);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    AccessMode = 0;
    RtlInitUnicodeString(&DestinationString, L"Default");
    NameInfo = (const UNICODE_STRING *)ObQueryNameInfo(v12);
    if ( NameInfo )
      NameInfo = (const UNICODE_STRING *)(ObQueryNameInfo(v12) + 8);
    if ( !RtlEqualUnicodeString(&DestinationString, NameInfo, 0) )
      a3 = 64;
  }
  v14 = ObOpenObjectByPointer(
          v12,
          a2 != 0 ? 2 : 0,
          0LL,
          a3 | 0x81,
          (POBJECT_TYPE)ExDesktopObjectType,
          AccessMode,
          &Handle);
  if ( v14 < 0 )
  {
    v22 = v14;
LABEL_14:
    Handle = 0LL;
    v23 = RtlNtStatusToDosError(v22);
LABEL_15:
    UserSetLastError(v23, v7, v8, v9);
    goto LABEL_11;
  }
  v15 = OpenDesktopCompletion(v12, Handle, a1);
  if ( v15 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle, 1);
    if ( v15 >= 0 )
      v15 = -1073741801;
    v22 = v15;
    goto LABEL_14;
  }
LABEL_11:
  v20 = Handle;
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return v20;
}
