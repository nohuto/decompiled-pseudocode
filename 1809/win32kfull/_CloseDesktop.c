/*
 * XREFs of _CloseDesktop @ 0x1C00BB508
 * Callers:
 *     NtUserCloseDesktop @ 0x1C00BB4C0 (NtUserCloseDesktop.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00ED8F8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00BB984 (CloseProtectedHandle.c)
 */

__int64 __fastcall CloseDesktop(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  unsigned int v4; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  PVOID v11; // rbp
  __int64 i; // rcx
  ULONG v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  v6 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, a2, &Object, 0LL);
  v10 = v6;
  if ( v6 < 0 )
  {
    v14 = RtlNtStatusToDosError(v6);
    UserSetLastError(v14, v15, v16, v17);
    return v10;
  }
  else
  {
    v11 = Object;
    if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
    {
      for ( i = *(_QWORD *)(CurrentProcessWin32Process + 328); i; i = *(_QWORD *)(i + 664) )
      {
        if ( ((Handle ^ *(_QWORD *)(i + 592)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170LL, v7, v8, v9);
          v4 = -2147483631;
          goto LABEL_11;
        }
      }
      if ( Object == *(PVOID *)(CurrentProcessWin32Process + 344)
        && ((Handle ^ *(_QWORD *)(CurrentProcessWin32Process + 400)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        UnlockObjectAssignment(CurrentProcessWin32Process + 344);
        *(_QWORD *)(CurrentProcessWin32Process + 400) = 0LL;
      }
    }
    SetHandleFlag(Handle, 0LL, 0LL);
    CloseProtectedHandle((HANDLE)Handle);
LABEL_11:
    ObfDereferenceObject(v11);
    return v4;
  }
}
