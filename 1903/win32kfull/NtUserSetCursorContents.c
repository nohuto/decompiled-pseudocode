/*
 * XREFs of NtUserSetCursorContents @ 0x1C0234630
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01EC18C (-_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 */

__int64 __fastcall NtUserSetCursorContents(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  struct tagCURSOR *v12; // rdi
  struct tagCURSOR *v13; // rax
  __int64 v14; // rcx
  char v16; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  LOBYTE(v4) = 3;
  v7 = HMValidateHandle(a1, v4, v5, v6);
  v11 = 0LL;
  v12 = (struct tagCURSOR *)v7;
  if ( v7 )
  {
    LOBYTE(v8) = 3;
    v13 = (struct tagCURSOR *)HMValidateHandle(a2, v8, v9, v10);
    if ( v13 )
      v11 = (unsigned __int8)_SetCursorContents(v12, v13);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  UserSessionSwitchLeaveCrit(v14);
  return v11;
}
