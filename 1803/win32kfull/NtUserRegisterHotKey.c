/*
 * XREFs of NtUserRegisterHotKey @ 0x1C006A2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _RegisterHotKey @ 0x1C006A3D4 (_RegisterHotKey.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall NtUserRegisterHotKey(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  struct tagWND *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-28h]
  _BYTE v17[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  v8 = 0;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
    goto LABEL_12;
  if ( (a3 & 0xFFFF95F0) != 0 )
  {
    v15 = 1004LL;
    goto LABEL_13;
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_4;
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v15 = 5LL;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v15 = 87LL;
LABEL_13:
    UserSetLastError(v15, v7);
    goto LABEL_7;
  }
LABEL_4:
  if ( !a1 )
  {
    v9 = 0LL;
    goto LABEL_6;
  }
  v9 = (struct tagWND *)ValidateHwnd(a1);
  if ( v9 )
  {
LABEL_6:
    LODWORD(BugCheckParameter2) = a4;
    v8 = RegisterHotKey(v9, BugCheckParameter2);
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v8;
}
