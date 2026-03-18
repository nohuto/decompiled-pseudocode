/*
 * XREFs of NtUserImpersonateDdeClientWindow @ 0x1C01F12D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _ImpersonateDdeClientWindow @ 0x1C01D0428 (_ImpersonateDdeClientWindow.c)
 */

__int64 __fastcall NtUserImpersonateDdeClientWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  v4 = ValidateHwnd(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v7 = ValidateHwnd(a2);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 16);
      if ( v8 == gptiCurrent )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 416LL) == *(_QWORD *)(v8 + 416) )
          v5 = 1;
        else
          v5 = ImpersonateDdeClientWindow((struct tagWND *)v6, (struct tagWND *)v7);
      }
      else
      {
        UserSetLastError(87LL, v7);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v5;
}
