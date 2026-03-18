/*
 * XREFs of NtUserOpenInputDesktop @ 0x1C007CBF0
 * Callers:
 *     <none>
 * Callees:
 *     CloseProtectedHandle @ 0x1C000D284 (CloseProtectedHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x1C007D1B0 (_GetProcessWindowStation.c)
 *     OpenDesktopCompletion @ 0x1C007F088 (OpenDesktopCompletion.c)
 */

HANDLE __fastcall NtUserOpenInputDesktop(unsigned int a1, int a2, int a3)
{
  KPROCESSOR_MODE AccessMode; // si
  void **v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ProcessWindowStation; // rax
  __int64 v11; // rcx
  void *v12; // rbx
  __int64 CurrentProcess; // rax
  NTSTATUS v14; // eax
  int v15; // ebx
  __int64 v16; // rcx
  HANDLE v17; // rbx
  NTSTATUS v19; // ecx
  __int64 v20; // rcx
  const UNICODE_STRING *NameInfo; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  Handle = 0LL;
  AccessMode = 1;
  EnterCrit(0LL, 1LL);
  if ( !grpdeskRitInput )
    goto LABEL_25;
  ProcessWindowStation = GetProcessWindowStation(&DestinationString);
  if ( !ProcessWindowStation )
  {
    v20 = 5LL;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(ProcessWindowStation + 32) & 4) != 0 )
  {
    v20 = 1LL;
    goto LABEL_14;
  }
  v7 = (void **)grpdeskRitInput;
  if ( gbDesktopLocked )
    v7 = (void **)gspdeskShouldBeForeground;
  v12 = *v7;
  if ( !*v7 )
  {
LABEL_25:
    v20 = 110LL;
    goto LABEL_14;
  }
  CurrentProcess = PsGetCurrentProcess(v11, v7, v8, v9);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
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
    v19 = v14;
LABEL_13:
    Handle = 0LL;
    v20 = RtlNtStatusToDosError(v19);
LABEL_14:
    UserSetLastError(v20, (__int64)v7, v8, v9);
    goto LABEL_11;
  }
  v15 = OpenDesktopCompletion(v12, Handle, a1);
  if ( v15 < 0 || !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
  {
    CloseProtectedHandle(Handle, 1);
    if ( v15 >= 0 )
      v15 = -1073741801;
    v19 = v15;
    goto LABEL_13;
  }
LABEL_11:
  v17 = Handle;
  UserSessionSwitchLeaveCrit(v16);
  return v17;
}
