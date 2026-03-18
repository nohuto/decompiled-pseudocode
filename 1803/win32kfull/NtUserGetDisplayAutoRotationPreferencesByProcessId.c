/*
 * XREFs of NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C01EE160
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C0012364 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferencesByProcessId(int a1, _DWORD *a2, _DWORD *a3)
{
  void *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v14; // rdx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v5 = (void *)a1;
  EnterSharedCrit(0LL, 1LL);
  v6 = LockProcessByClientId(v5, (PEPROCESS *)&Object);
  v8 = 0;
  if ( v6 >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = *(_DWORD *)(ProcessWin32Process + 912);
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = 0;
      v8 = 1;
    }
    else
    {
      UserSetLastError(5LL, v14);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL, v7);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v8;
}
