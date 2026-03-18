/*
 * XREFs of NtUserSetCursorContents @ 0x1C0234010
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01EC00C (-_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 */

__int64 __fastcall NtUserSetCursorContents(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  struct tagCURSOR *v6; // rdi
  struct tagCURSOR *v7; // rax
  __int64 v8; // rcx
  char v10; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  v4 = HMValidateHandle(a1, 3);
  v5 = 0LL;
  v6 = (struct tagCURSOR *)v4;
  if ( v4 )
  {
    v7 = (struct tagCURSOR *)HMValidateHandle(a2, 3);
    if ( v7 )
      v5 = (unsigned __int8)_SetCursorContents(v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
