/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C021C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _SetDisplayMapping @ 0x1C01DADC0 (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  v5 = 0;
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(v6 + 880) < 0x2000 )
  {
    EtwTraceUIPISystemError(v6, 0LL, 10LL);
LABEL_4:
    v10 = 5LL;
LABEL_5:
    UserSetLastError(v10, v7, v8, v9);
    goto LABEL_6;
  }
  LOBYTE(v4) = 19;
  v16 = HMValidateHandle(a1, v4);
  v17 = v16;
  if ( !v16 || (*(_DWORD *)(v16 + 200) & 0x80u) == 0 )
  {
    UserSetLastError(6LL, v7, v8, v9);
    v10 = 6LL;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(v16 + 184) & 0x2000) != 0 )
  {
    UserSetLastError(5LL, v7, v8, v9);
    goto LABEL_4;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v16 + 480) + 24LL) - 6) <= 1 )
    goto LABEL_4;
  v18 = ValidateHmonitor(a2);
  if ( v18 )
  {
    v5 = 1;
    if ( *(_QWORD *)(v17 + 1200) != v18 )
      v5 = SetDisplayMapping(*(_QWORD *)(v17 + 480), v18);
    *(_DWORD *)(v17 + 1208) = 1;
  }
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v5;
}
