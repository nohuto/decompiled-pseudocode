/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1C003BE20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(_OWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int Message; // ebx
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  ULONG64 v16; // rcx
  _OWORD v19[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v19, 0, sizeof(v19));
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL, v10, v11, v12);
    Message = 0;
  }
  else
  {
    Message = xxxRealInternalGetMessage((unsigned int)v19, a2, a3, a4, a5, a6);
    HIDWORD(v19[0]) = 0;
    HIDWORD(v19[2]) = 0;
    v14 = v19[1];
    v15 = v19[2];
    v16 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v19[0];
    a1[1] = v14;
    a1[2] = v15;
  }
  UserSessionSwitchLeaveCrit(v16);
  return Message;
}
