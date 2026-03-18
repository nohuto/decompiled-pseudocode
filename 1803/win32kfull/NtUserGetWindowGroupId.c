/*
 * XREFs of NtUserGetWindowGroupId @ 0x1C01F07D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetWindowGroupId(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  char v11; // [rsp+68h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v9 = 0;
  if ( v6 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = *(_DWORD *)(v6 + 280);
    v9 = 1;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v9;
}
