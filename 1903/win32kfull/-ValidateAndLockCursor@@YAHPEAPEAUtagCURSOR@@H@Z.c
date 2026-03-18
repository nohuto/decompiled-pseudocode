/*
 * XREFs of ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C0097F14
 * Callers:
 *     InternalRegisterClassEx @ 0x1C0097760 (InternalRegisterClassEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidateAndLockCursor(struct tagCURSOR **a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  v4 = (__int64)*a1;
  if ( !v4 )
    return 1LL;
  LOBYTE(a2) = 3;
  v6 = HMValidateHandleNoSecure(v4, a2);
  if ( v6 || !v3 )
  {
    *a1 = 0LL;
    v10[0] = a1;
    v10[1] = v6;
    HMAssignmentLock(v10);
    return 1LL;
  }
  UserSetLastError(87LL, v7, v8, v9);
  return 0LL;
}
