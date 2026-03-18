/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C022EB70
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _GetTouchValidationStatus @ 0x1C01E0F88 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(unsigned __int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (v3 = HMValidateHandle(a1, 19)) != 0 )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3);
  }
  else
  {
    UserSetLastError(6LL, v4, v5, v6);
    UserSetLastError(0LL, v7, v8, v9);
  }
  UserSessionSwitchLeaveCrit(v10);
  return TouchValidationStatus;
}
