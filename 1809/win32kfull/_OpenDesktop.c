/*
 * XREFs of _OpenDesktop @ 0x1C00EEE38
 * Callers:
 *     NtUserOpenDesktop @ 0x1C00EEDA0 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C00EF100 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01D5AB4 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00BB984 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1C00F0E28 (OpenDesktopCompletion.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C015DD04 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 */

__int64 __fastcall OpenDesktop(struct _OBJECT_ATTRIBUTES *a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r15d
  KPROCESSOR_MODE v6; // si
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  __int64 v14; // rdx
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  ULONG v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PVOID v24; // rdi
  ULONG v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  void *v32; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v33; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES v34; // [rsp+68h] [rbp-98h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v35; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v36[256]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v10 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v11, v12);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v32 = 0LL;
      Object = 0LL;
      v10 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
              0,
              a1,
              (unsigned __int16 (*)[256])v36,
              &v34,
              &v35,
              &v32,
              &v33,
              (unsigned __int16 **)&Object);
      if ( v10 < 0 )
      {
LABEL_8:
        v15 = RtlNtStatusToDosError(v10);
        UserSetLastError(v15, v16, v17, v18);
        return (unsigned int)v10;
      }
      v6 = 0;
      v10 = ObOpenObjectByName(&v34, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle);
      if ( v32 )
      {
        LOBYTE(v14) = 1;
        SeReleaseSecurityDescriptor(v32, v14, 0LL);
        v32 = 0LL;
      }
      Win32FreePool(Object);
    }
    if ( v10 < 0 )
      goto LABEL_8;
  }
  v19 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v10 = v19;
  if ( v19 < 0 )
  {
    v20 = RtlNtStatusToDosError(v19);
    UserSetLastError(v20, v21, v22, v23);
LABEL_13:
    CloseProtectedHandle(Handle, v6);
    return (unsigned int)v10;
  }
  v24 = Object;
  if ( *(_DWORD *)Object != gSessionId )
  {
    v10 = -1073741816;
    v25 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v25, v26, v27, v28);
    ObfDereferenceObject(v24);
    goto LABEL_13;
  }
  v10 = OpenDesktopCompletion(Object, Handle, v5);
  if ( v10 < 0 )
  {
    CloseProtectedHandle(Handle, v6);
    Handle = 0LL;
  }
  ObfDereferenceObject(v24);
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
