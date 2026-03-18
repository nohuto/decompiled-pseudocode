/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C02172E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _GetTouchValidationStatus @ 0x1C01CCC28 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (LOBYTE(v4) = 19, (v3 = HMValidateHandle(a1, v4)) != 0) )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3);
  }
  else
  {
    UserSetLastError(6LL, v5, v6, v7);
    UserSetLastError(0LL, v8, v9, v10);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return TouchValidationStatus;
}
