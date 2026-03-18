/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1C0028FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v12; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( a1 != 4096 )
  {
    UserSetLastError(87LL);
    v4 = 0LL;
    goto LABEL_7;
  }
  v4 = 0LL;
  v5 = *(_DWORD *)(gptiCurrent + 1200LL);
  if ( !a2 )
  {
    if ( (v5 & 0x8000) != 0 )
      goto LABEL_4;
LABEL_9:
    UserSetLastError(87LL);
    goto LABEL_7;
  }
  if ( (v5 & 0x8000) != 0 )
    goto LABEL_9;
LABEL_4:
  if ( a2 )
    v6 = v5 | 0x8000;
  else
    v6 = v5 & 0xFFFF7FFF;
  *(_DWORD *)(gptiCurrent + 1200LL) = v6;
  v4 = 1LL;
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v4;
}
