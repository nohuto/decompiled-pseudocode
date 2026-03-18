/*
 * XREFs of NtUserSetActivationFilter @ 0x1C0009C20
 * Callers:
 *     <none>
 * Callees:
 *     _SetActivationFilter @ 0x1C0009CDC (_SetActivationFilter.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsIAMThread @ 0x1C011B430 (IsIAMThread.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetActivationFilter(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v8; // rcx
  char v9; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v8 = 5LL;
    goto LABEL_8;
  }
  v5 = ValidateHwnd(a1);
  if ( !v5 || !(unsigned int)IsIAMThread(*(_QWORD *)(v5 + 16)) )
  {
    v8 = 87LL;
LABEL_8:
    UserSetLastError(v8);
    goto LABEL_5;
  }
  v4 = SetActivationFilter(v6, a2);
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  UserSessionSwitchLeaveCrit();
  return v4;
}
