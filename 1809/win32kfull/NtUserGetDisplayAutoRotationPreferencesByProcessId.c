/*
 * XREFs of NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1C0214650
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     LockProcessByClientId @ 0x1C00B2D44 (LockProcessByClientId.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferencesByProcessId(int a1, _DWORD *a2, _DWORD *a3)
{
  void *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v5 = (void *)a1;
  EnterSharedCrit(0LL, 1LL);
  v6 = LockProcessByClientId(v5, (PEPROCESS *)&Object);
  v10 = 0;
  if ( v6 >= 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    if ( ProcessWin32Process )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = *(_DWORD *)(ProcessWin32Process + 920);
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = 0;
      v10 = 1;
    }
    else
    {
      UserSetLastError(5LL, v16, v17, v18);
    }
    ObfDereferenceObject(Object);
  }
  else
  {
    UserSetLastError(87LL, v7, v8, v9);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v10;
}
