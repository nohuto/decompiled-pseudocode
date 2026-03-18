/*
 * XREFs of NtUserPeekMessage @ 0x1C0046F80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     ClientGetMessageMPH @ 0x1C00E57A0 (ClientGetMessageMPH.c)
 */

__int64 __fastcall NtUserPeekMessage(_OWORD *a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // rdx
  int MessageMPH; // eax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v19; // [rsp+48h] [rbp-40h] BYREF
  __int128 v20; // [rsp+58h] [rbp-30h]
  __int128 v21; // [rsp+68h] [rbp-20h]

  v19 = 0uLL;
  v20 = 0uLL;
  v21 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( (a5 & 0xE300FFFC) != 0 )
  {
    UserSetLastError(1004LL, v9);
    v15 = 0;
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL) > 0 )
      MessageMPH = ClientGetMessageMPH((unsigned int)&v19, a2, a3, a4, a5, 0);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)&v19, a2, a3, a4, a5, 0);
    v15 = MessageMPH;
    if ( MessageMPH )
    {
      HIDWORD(v19) = 0;
      HIDWORD(v21) = 0;
      v16 = v20;
      v17 = v21;
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v19;
      a1[1] = v16;
      a1[2] = v17;
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v15;
}
