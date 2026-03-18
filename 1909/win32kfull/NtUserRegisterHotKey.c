/*
 * XREFs of NtUserRegisterHotKey @ 0x1C0088070
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _RegisterHotKey @ 0x1C008817C (_RegisterHotKey.c)
 */

__int64 __fastcall NtUserRegisterHotKey(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  struct tagWND *v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-28h]
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  v10 = 0;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
    goto LABEL_12;
  if ( (a3 & 0xFFFF95F0) != 0 )
  {
    v14 = 1004LL;
    goto LABEL_13;
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_4;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v14 = 5LL;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v14 = 87LL;
LABEL_13:
    UserSetLastError(v14, v7, v8, v9);
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v16);
  UserSessionSwitchLeaveCrit(v12);
  return v10;
}
