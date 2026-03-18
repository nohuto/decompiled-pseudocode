/*
 * XREFs of _GetThreadDesktop @ 0x1C0101F90
 * Callers:
 *     NtUserGetThreadDesktop @ 0x1C0101F50 (NtUserGetThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetConsoleDesktop @ 0x1C01D56F0 (GetConsoleDesktop.c)
 */

HANDLE __fastcall GetThreadDesktop(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  HANDLE result; // rax
  PRKPROCESS *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // eax
  NTSTATUS v11; // eax
  PVOID v12; // rbx
  int v13; // edi
  __int64 v14; // rcx
  __int64 CurrentProcess; // rax
  HANDLE Handle; // [rsp+58h] [rbp+28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp+38h] BYREF

  v1 = a1;
  v2 = PtiFromThreadId(a1);
  v4 = v2;
  if ( v2 )
  {
    result = *(HANDLE *)(v2 + 592);
    Handle = result;
    v6 = *(PRKPROCESS **)(v4 + 424);
  }
  else
  {
    if ( (int)GetConsoleDesktop(v1, &Handle, 0LL, &Object) < 0 )
      return 0LL;
    v6 = (PRKPROCESS *)Object;
    result = Handle;
  }
  if ( result )
  {
    if ( v6 != (PRKPROCESS *)PsGetCurrentProcessWin32Process(v3) )
    {
      KeAttachProcess(*v6);
      v11 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, &HandleInformation);
      v12 = Object;
      v13 = v11;
      KeDetachProcess();
      if ( v13 < 0
        || (CurrentProcess = PsGetCurrentProcess(v14, v7, v8, v9),
            !(unsigned __int8)ObFindHandleForObject(CurrentProcess, v12, 0LL, &HandleInformation, &Handle)) )
      {
        Handle = 0LL;
      }
      if ( v13 >= 0 )
        ObfDereferenceObject(v12);
    }
    if ( Handle )
    {
      v10 = SetHandleFlag(Handle, 1LL, 1LL);
      return (HANDLE)((unsigned __int64)Handle & -(__int64)(v10 != 0));
    }
    else
    {
      UserSetLastError(5LL, v7, v8, v9);
      return Handle;
    }
  }
  return result;
}
