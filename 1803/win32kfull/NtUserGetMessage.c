/*
 * XREFs of NtUserGetMessage @ 0x1C0046E80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     ClientGetMessageMPH @ 0x1C00E57A0 (ClientGetMessageMPH.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  int MessageMPH; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  ULONG64 v16; // rcx
  int v18; // [rsp+20h] [rbp-78h]
  _OWORD v19[3]; // [rsp+48h] [rbp-50h] BYREF

  memset(v19, 0, sizeof(v19));
  EnterCrit(0LL, 1LL);
  v9 = 0;
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8);
  }
  else
  {
    v18 = 1;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL) > 0 )
      MessageMPH = ClientGetMessageMPH((unsigned int)v19, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)v19, a2, a3, a4, v18, 1);
    v9 = MessageMPH;
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
  UserSessionSwitchLeaveCrit(v16, v11, v12, v13);
  return v9;
}
