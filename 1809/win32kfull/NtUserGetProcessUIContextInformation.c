/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1C00FDD10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2)
{
  PVOID v4; // rdi
  int v5; // ebx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ecx
  ULONG64 v12; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  }
  else
  {
    v14 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    if ( v14 < 0 )
    {
      UserSetLastError(87LL, v15, v16, v17);
      v5 = 0;
      goto LABEL_12;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v18 = 87LL;
      goto LABEL_17;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v4);
  }
  if ( CurrentProcessWin32Process && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x21) != 0 )
  {
    v11 = *(_DWORD *)(CurrentProcessWin32Process + 820);
    LODWORD(v19) = (v11 >> 4) & 3;
    HIDWORD(v19) = (v11 & 0x40) != 0;
    if ( (v11 & 0x100) != 0 )
      HIDWORD(v19) = ((v11 & 0x40) != 0) | 2;
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v19;
    goto LABEL_10;
  }
  v18 = 1471LL;
LABEL_17:
  UserSetLastError(v18, v8, v9, v10);
  v5 = 0;
LABEL_10:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_12:
  UserSessionSwitchLeaveCrit(v12, v8, v9, v10);
  return v5;
}
