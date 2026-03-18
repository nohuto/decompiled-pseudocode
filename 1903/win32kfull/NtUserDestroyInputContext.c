/*
 * XREFs of NtUserDestroyInputContext @ 0x1C01561C0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     DestroyInputContext @ 0x1C015623C (DestroyInputContext.c)
 */

__int64 __fastcall NtUserDestroyInputContext(unsigned __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rcx
  char v9; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v4 = gpsi;
  if ( (*gpsi & 4) != 0 )
  {
    LOBYTE(v4) = 17;
    v5 = HMValidateHandle(a1, v4, v2, v3);
    v6 = 0;
    if ( v5 )
      v6 = DestroyInputContext(v5);
  }
  else
  {
    UserSetLastError(120LL, gpsi, v2, v3);
    v6 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
