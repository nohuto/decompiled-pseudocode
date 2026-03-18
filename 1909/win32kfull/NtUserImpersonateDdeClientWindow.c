/*
 * XREFs of NtUserImpersonateDdeClientWindow @ 0x1C022FEE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _ImpersonateDdeClientWindow @ 0x1C020B530 (_ImpersonateDdeClientWindow.c)
 */

__int64 __fastcall NtUserImpersonateDdeClientWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  char v12; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
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
        if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 416LL) == *(_QWORD *)(v9 + 416) )
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v10);
  return v5;
}
