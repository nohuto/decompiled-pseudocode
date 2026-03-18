/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1C00E90C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserRealInternalGetMessage(
        _OWORD *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rdx
  int Message; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  ULONG64 v17; // rcx
  unsigned __int64 v19; // [rsp+20h] [rbp-68h]
  _OWORD v20[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v20, 0, sizeof(v20));
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL, v10);
    Message = 0;
  }
  else
  {
    LODWORD(v19) = a5;
    Message = xxxRealInternalGetMessage((__int64)v20, a2, a3, a4, v19, a6);
    HIDWORD(v20[0]) = 0;
    HIDWORD(v20[2]) = 0;
    v15 = v20[1];
    v16 = v20[2];
    v17 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v20[0];
    a1[1] = v15;
    a1[2] = v16;
  }
  UserSessionSwitchLeaveCrit(v17, v11, v13, v14);
  return Message;
}
