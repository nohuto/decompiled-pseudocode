/*
 * XREFs of NtUserCheckAccessForIntegrityLevel @ 0x1C01EC000
 * Callers:
 *     <none>
 * Callees:
 *     LockProcessByClientId @ 0x1C0012364 (LockProcessByClientId.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserCheckAccessForIntegrityLevel(int a1, int a2, int *a3)
{
  void *v4; // r14
  void *v5; // rbx
  int v6; // edi
  _DWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 ProcessWin32Process; // rbx
  __int64 v13; // rax
  PVOID v14; // rcx
  PVOID v16; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v4 = (void *)a2;
  v5 = (void *)a1;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v16 = 0LL;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v5, (PEPROCESS *)&Object) < 0 )
    goto LABEL_2;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  if ( !ProcessWin32Process )
    goto LABEL_2;
  if ( PsGetCurrentProcess(v11, v7) != gpepCSRSS && ProcessWin32Process != PsGetCurrentProcessWin32Process(gpepCSRSS) )
  {
    v10 = -1073741790;
    goto LABEL_19;
  }
  if ( (int)LockProcessByClientId(v4, (PEPROCESS *)&v16) < 0 || (v13 = PsGetProcessWin32Process(v16)) == 0 )
  {
LABEL_2:
    v10 = -1073741811;
    goto LABEL_19;
  }
  v8 = *(_QWORD *)(v13 + 872);
  v9 = *(_QWORD *)(ProcessWin32Process + 872);
  if ( gbEnforceUIPI
    && (unsigned int)v9 <= (unsigned int)v8
    && ((_DWORD)v9 != (_DWORD)v8 || HIDWORD(v9) != HIDWORD(v8) && HIDWORD(v9) != -1 && HIDWORD(v8) != -1) )
  {
    v6 = 0;
  }
  v7 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  *v7 = *v7;
  *a3 = v6;
  v10 = 0;
LABEL_19:
  if ( Object )
    ObfDereferenceObject(Object);
  v14 = v16;
  if ( v16 )
    ObfDereferenceObject(v16);
  UserSessionSwitchLeaveCrit(v14, v7, v8, v9);
  return v10;
}
