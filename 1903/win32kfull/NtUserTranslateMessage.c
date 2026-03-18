/*
 * XREFs of NtUserTranslateMessage @ 0x1C0013600
 * Callers:
 *     <none>
 * Callees:
 *     xxxTranslateMessage @ 0x1C00136B0 (xxxTranslateMessage.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserTranslateMessage(_OWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  _OWORD v7[4]; // [rsp+38h] [rbp-40h] BYREF

  memset(v7, 0, 0x30uLL);
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v7[0] = *a1;
  v7[1] = a1[1];
  v7[2] = a1[2];
  v5 = 0;
  if ( ValidateHwnd(*(_QWORD *)&v7[0]) )
    v5 = xxxTranslateMessage(v7, a2);
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
