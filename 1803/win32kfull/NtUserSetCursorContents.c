/*
 * XREFs of NtUserSetCursorContents @ 0x1C01F4D50
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _SetCursorContents @ 0x1C01B4124 (_SetCursorContents.c)
 */

__int64 __fastcall NtUserSetCursorContents(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  v4 = HMValidateHandle(a1, 3);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v7 = HMValidateHandle(a2, 3);
    if ( v7 )
      v5 = SetCursorContents(v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v5;
}
