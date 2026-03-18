/*
 * XREFs of _OpenThreadDesktop @ 0x1C01D5860
 * Callers:
 *     NtUserOpenThreadDesktop @ 0x1C021A8B0 (NtUserOpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00BB984 (CloseProtectedHandle.c)
 *     OpenDesktopCompletion @ 0x1C00F0E28 (OpenDesktopCompletion.c)
 *     GetConsoleDesktop @ 0x1C01D56F0 (GetConsoleDesktop.c)
 */

__int64 __fastcall OpenThreadDesktop(__int64 a1, char a2, int a3, int a4, HANDLE *Object)
{
  int v8; // ebx
  __int64 v9; // rax
  HANDLE *v10; // r14
  ACCESS_MASK v11; // esi
  __int64 v12; // r10
  __int64 result; // rax
  PRKPROCESS *v14; // rcx
  HANDLE v15; // rax
  NTSTATUS v16; // eax
  HANDLE *v17; // rdi
  NTSTATUS v18; // ebx
  ULONG v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  NTSTATUS v23; // ecx
  NTSTATUS v24; // eax
  ULONG v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  HANDLE Handle; // [rsp+40h] [rbp-10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-8h] BYREF

  v8 = a1;
  v9 = PtiFromThreadId(a1);
  v10 = Object;
  v11 = a4 | 0x81;
  v12 = v9;
  *Object = 0LL;
  if ( v9 )
  {
    v15 = *(HANDLE *)(v9 + 592);
    Handle = v15;
    v14 = *(PRKPROCESS **)(v12 + 424);
  }
  else
  {
    result = GetConsoleDesktop(v8, &Handle, 0LL, (__int64 *)&Object);
    if ( (int)result < 0 )
      return result;
    v14 = (PRKPROCESS *)Object;
    v15 = Handle;
  }
  if ( !v15 )
    return 0;
  KeAttachProcess(*v14);
  v16 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, (PVOID *)&Object, &HandleInformation);
  v17 = Object;
  v18 = v16;
  KeDetachProcess();
  if ( v18 >= 0 )
  {
    if ( *(_DWORD *)v17 == gSessionId && ((_DWORD)v17[6] & 0xE) == 0 )
    {
      v24 = ObOpenObjectByPointer(v17, a3 != 0 ? 66 : 64, 0LL, v11, (POBJECT_TYPE)ExDesktopObjectType, 1, &Handle);
      v18 = v24;
      if ( v24 >= 0 )
      {
        v18 = OpenDesktopCompletion((__int64)v17, (__int64)Handle, a2);
        if ( v18 >= 0 )
        {
          if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
          {
            v18 = 0;
            *v10 = Handle;
          }
          else
          {
            CloseProtectedHandle(Handle, 1);
            v18 = -1073741801;
          }
        }
        else
        {
          CloseProtectedHandle(Handle, 1);
          Handle = 0LL;
        }
        goto LABEL_19;
      }
      v23 = v24;
    }
    else
    {
      v23 = -1073741816;
      v18 = -1073741816;
    }
    v25 = RtlNtStatusToDosError(v23);
    UserSetLastError(v25, v26, v27, v28);
LABEL_19:
    ObfDereferenceObject(v17);
    return (unsigned int)v18;
  }
  v19 = RtlNtStatusToDosError(v18);
  UserSetLastError(v19, v20, v21, v22);
  return (unsigned int)v18;
}
