/*
 * XREFs of NtUserGetProcessUIContextInformation @ 0x1C0109490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetProcessUIContextInformation(HANDLE Handle, _QWORD *a2)
{
  PVOID v4; // rdi
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v16; // ecx
  ULONG64 v17; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
  }
  else
  {
    v8 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    v4 = Object;
    if ( v8 < 0 )
    {
      UserSetLastError(87LL, v9, v10, v11);
      v5 = 0;
      goto LABEL_14;
    }
    if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    {
      v19 = 87LL;
      goto LABEL_17;
    }
    CurrentProcessWin32Process = PsGetProcessWin32Process(v4);
  }
  if ( CurrentProcessWin32Process && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x21) != 0 )
  {
    v16 = *(_DWORD *)(CurrentProcessWin32Process + 812);
    LODWORD(v20) = (v16 >> 4) & 3;
    HIDWORD(v20) = (v16 & 0x40) != 0;
    if ( (v16 & 0x100) != 0 )
      HIDWORD(v20) = ((v16 & 0x40) != 0) | 2;
    v17 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v20;
    goto LABEL_12;
  }
  v19 = 1471LL;
LABEL_17:
  UserSetLastError(v19, v12, v13, v14);
  v5 = 0;
LABEL_12:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_14:
  UserSessionSwitchLeaveCrit(v17);
  return v5;
}
