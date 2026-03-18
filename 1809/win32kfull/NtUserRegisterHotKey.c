/*
 * XREFs of NtUserRegisterHotKey @ 0x1C00A4FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _RegisterHotKey @ 0x1C00A50DC (_RegisterHotKey.c)
 */

__int64 __fastcall NtUserRegisterHotKey(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  struct tagWND *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-28h]
  _BYTE v19[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v19);
  v10 = 0;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
    goto LABEL_12;
  if ( (a3 & 0xFFFF95F0) != 0 )
  {
    v17 = 1004LL;
    goto LABEL_13;
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_4;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v17 = 5LL;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v17 = 87LL;
LABEL_13:
    UserSetLastError(v17, v7, v8, v9);
    goto LABEL_7;
  }
LABEL_4:
  if ( !a1 )
  {
    v11 = 0LL;
    goto LABEL_6;
  }
  v11 = (struct tagWND *)ValidateHwnd(a1);
  if ( v11 )
  {
LABEL_6:
    LODWORD(BugCheckParameter2) = a4;
    v10 = RegisterHotKey(v11, BugCheckParameter2);
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v19);
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v10;
}
