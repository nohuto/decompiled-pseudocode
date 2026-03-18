/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C022F190
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _GetTouchValidationStatus @ 0x1C01E1108 (_GetTouchValidationStatus.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (LOBYTE(v4) = 19, (v3 = HMValidateHandle(a1, v4, v5, v6)) != 0) )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3);
  }
  else
  {
    UserSetLastError(6LL, v7, v8, v9);
    UserSetLastError(0LL, v10, v11, v12);
  }
  UserSessionSwitchLeaveCrit(v13);
  return TouchValidationStatus;
}
