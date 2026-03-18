/*
 * XREFs of NtUserTranslateMessage @ 0x1C00F4E50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxTranslateMessage @ 0x1C00F4EDC (xxxTranslateMessage.c)
 */

__int64 __fastcall NtUserTranslateMessage(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  _OWORD v10[4]; // [rsp+38h] [rbp-40h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v10[0] = *a1;
  v10[1] = a1[1];
  v10[2] = a1[2];
  v8 = 0;
  if ( ValidateHwnd(*(_QWORD *)&v10[0]) )
    v8 = xxxTranslateMessage(v10, a2);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
