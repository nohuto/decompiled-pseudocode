/*
 * XREFs of NtUserRealInternalGetMessage @ 0x1C0109660
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int Message; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  ULONG64 v19; // rcx
  unsigned __int64 v21; // [rsp+20h] [rbp-68h]
  _OWORD v22[3]; // [rsp+48h] [rbp-40h] BYREF

  memset(v22, 0, sizeof(v22));
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL, v10, v11, v12);
    Message = 0;
  }
  else
  {
    LODWORD(v21) = a5;
    Message = xxxRealInternalGetMessage((__int64)v22, a2, a3, a4, v21, a6);
    HIDWORD(v22[0]) = 0;
    HIDWORD(v22[2]) = 0;
    v17 = v22[1];
    v18 = v22[2];
    v19 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v22[0];
    a1[1] = v17;
    a1[2] = v18;
  }
  UserSessionSwitchLeaveCrit(v19, v13, v15, v16);
  return Message;
}
