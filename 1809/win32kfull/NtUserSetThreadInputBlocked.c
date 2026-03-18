/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1C0041480
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  __int64 v4; // rbx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( a1 != 4096 )
  {
    UserSetLastError(87LL);
    v4 = 0LL;
    goto LABEL_7;
  }
  v4 = 0LL;
  v5 = *(_DWORD *)(gptiCurrent + 1208LL);
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
  v4 = 1LL;
  v6 = v5 & 0xFFFF7FFF;
  v7 = v5 | 0x8000;
  if ( !a2 )
    v7 = v6;
  *(_DWORD *)(gptiCurrent + 1208LL) = v7;
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v4;
}
