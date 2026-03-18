/*
 * XREFs of NtUserImpersonateDdeClientWindow @ 0x1C0218670
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01F4B2C (_ImpersonateDdeClientWindow.c)
 */

__int64 __fastcall NtUserImpersonateDdeClientWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v15; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
  v4 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v7 = ValidateHwnd(a2);
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 16);
      if ( v9 == gptiCurrent )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL) == *(_QWORD *)(v9 + 424) )
          v5 = 1;
        else
          v5 = ImpersonateDdeClientWindow((struct tagWND *)v6, (struct tagWND *)v7);
      }
      else
      {
        UserSetLastError(87LL, v7, v9, v8);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v5;
}
