/*
 * XREFs of NtUserUnregisterHotKey @ 0x1C00EF090
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _UnregisterHotKey @ 0x1C00EF11C (_UnregisterHotKey.c)
 */

__int64 __fastcall NtUserUnregisterHotKey(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  v4 = 0;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_3;
  }
  v5 = ValidateHwnd(a1);
  if ( v5 )
LABEL_3:
    v4 = UnregisterHotKey(v5, a2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
