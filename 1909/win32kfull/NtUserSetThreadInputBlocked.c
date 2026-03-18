/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1C0060800
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  __int64 v11; // rcx
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( a1 != 4096 )
  {
    UserSetLastError(87LL, v4, v5, v6);
    v7 = 0LL;
    goto LABEL_7;
  }
  v7 = 0LL;
  v8 = *(_DWORD *)(gptiCurrent + 1224LL);
  if ( !a2 )
  {
    if ( (v8 & 0x8000) != 0 )
      goto LABEL_4;
LABEL_9:
    UserSetLastError(87LL, gptiCurrent, 0x8000LL, v6);
    goto LABEL_7;
  }
  if ( (v8 & 0x8000) != 0 )
    goto LABEL_9;
LABEL_4:
  v7 = 1LL;
  v9 = v8 & 0xFFFF7FFF;
  v10 = v8 | 0x8000;
  if ( !a2 )
    v10 = v9;
  *(_DWORD *)(gptiCurrent + 1224LL) = v10;
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v11);
  return v7;
}
