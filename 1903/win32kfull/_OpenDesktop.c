/*
 * XREFs of _OpenDesktop @ 0x1C00DD7F8
 * Callers:
 *     NtUserOpenDesktop @ 0x1C00DD760 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00DD9A0 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01EB1BC (xxxResolveDesktopForWOW.c)
 * Callees:
 *     CloseProtectedHandle @ 0x1C000DE14 (CloseProtectedHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     OpenDesktopCompletion @ 0x1C00DF398 (OpenDesktopCompletion.c)
 */

__int64 __fastcall OpenDesktop(__int64 a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r14d
  KPROCESSOR_MODE v6; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  PVOID v14; // rdi
  __int64 CurrentProcess; // rax
  ULONG v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+48h] [rbp-8h] BYREF

  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v10 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v11, v12);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v6 = 0;
      v10 = ObOpenObjectByName(a1, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle);
    }
    if ( v10 < 0 )
    {
      v17 = RtlNtStatusToDosError(v10);
      UserSetLastError(v17, v18, v19, v20);
      return (unsigned int)v10;
    }
  }
  v13 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v10 = v13;
  if ( v13 < 0 )
  {
    v21 = RtlNtStatusToDosError(v13);
    UserSetLastError(v21, v22, v23, v24);
LABEL_16:
    CloseProtectedHandle(Handle, v6);
    return (unsigned int)v10;
  }
  v14 = Object;
  if ( *(_DWORD *)Object != gSessionId )
  {
    v10 = -1073741816;
    v25 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v25, v26, v27, v28);
    ObfDereferenceObject(v14);
    goto LABEL_16;
  }
  v10 = OpenDesktopCompletion(Object, Handle, v5);
  if ( v10 < 0 )
  {
    CloseProtectedHandle(Handle, v6);
    Handle = 0LL;
  }
  ObfDereferenceObject(v14);
  if ( v10 >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v10 = 0;
      *a5 = Handle;
    }
    else
    {
      CloseProtectedHandle(Handle, v6);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v10;
}
