/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C01F4FA0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _SetDisplayMapping @ 0x1C01B81C8 (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  char v16; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  v4 = 0;
  v5 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v5 + 872) < 0x2000 )
  {
    EtwTraceUIPISystemError(v5, 0LL, 10LL);
LABEL_4:
    v7 = 5LL;
LABEL_5:
    UserSetLastError(v7, v6);
    goto LABEL_6;
  }
  v13 = HMValidateHandle(a1, 19);
  v14 = v13;
  if ( !v13 || (*(_DWORD *)(v13 + 200) & 0x80u) == 0 )
  {
    UserSetLastError(6LL, v6);
    v7 = 6LL;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(v13 + 184) & 0x1000) != 0 )
  {
    UserSetLastError(5LL, v6);
    goto LABEL_4;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v13 + 480) + 24LL) - 6) <= 1 )
    goto LABEL_4;
  v15 = ValidateHmonitor(a2);
  if ( v15 )
  {
    v4 = 1;
    if ( *(_QWORD *)(v14 + 856) != v15 )
      v4 = SetDisplayMapping(*(_QWORD *)(v14 + 480), v15);
    *(_DWORD *)(v14 + 864) = 1;
  }
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v4;
}
