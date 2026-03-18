/*
 * XREFs of _CloseDesktop @ 0x1C000E67C
 * Callers:
 *     NtUserCloseDesktop @ 0x1C000E640 (NtUserCloseDesktop.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00B702C (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 * Callees:
 *     CloseProtectedHandle @ 0x1C000E77C (CloseProtectedHandle.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall CloseDesktop(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  unsigned int v4; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v6; // eax
  unsigned int v7; // ebp
  PVOID v8; // rbp
  __int64 i; // rcx
  ULONG v11; // eax
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  v6 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, a2, &Object, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = RtlNtStatusToDosError(v6);
    UserSetLastError(v11);
    return v7;
  }
  else
  {
    v8 = Object;
    if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
    {
      for ( i = *(_QWORD *)(CurrentProcessWin32Process + 320); i; i = *(_QWORD *)(i + 656) )
      {
        if ( ((Handle ^ *(_QWORD *)(i + 584)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170LL);
          v4 = -2147483631;
          goto LABEL_11;
        }
      }
      if ( Object == *(PVOID *)(CurrentProcessWin32Process + 336)
        && ((Handle ^ *(_QWORD *)(CurrentProcessWin32Process + 392)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        UnlockObjectAssignment();
        *(_QWORD *)(CurrentProcessWin32Process + 392) = 0LL;
      }
    }
    SetHandleFlag(Handle, 0LL, 0LL);
    CloseProtectedHandle((HANDLE)Handle);
LABEL_11:
    ObfDereferenceObject(v8);
    return v4;
  }
}
