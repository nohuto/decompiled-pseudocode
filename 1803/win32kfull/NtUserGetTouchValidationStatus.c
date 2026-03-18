/*
 * XREFs of NtUserGetTouchValidationStatus @ 0x1C01F0030
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _GetTouchValidationStatus @ 0x1C01AA538 (_GetTouchValidationStatus.c)
 */

__int64 __fastcall NtUserGetTouchValidationStatus(__int64 a1)
{
  unsigned int TouchValidationStatus; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  TouchValidationStatus = 0;
  v3 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( !a1 || (v3 = HMValidateHandle(a1, 19)) != 0 )
  {
    TouchValidationStatus = GetTouchValidationStatus(v3);
  }
  else
  {
    UserSetLastError(6LL, v4);
    UserSetLastError(0LL, v5);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return TouchValidationStatus;
}
