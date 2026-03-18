/*
 * XREFs of NtUserGetMessage @ 0x1C0031460
 * Callers:
 *     <none>
 * Callees:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ClientGetMessageMPH @ 0x1C0103FA4 (ClientGetMessageMPH.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, int a2, int a3, int a4)
{
  int v8; // ebx
  int MessageMPH; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  ULONG64 v15; // rcx
  int v17; // [rsp+20h] [rbp-78h]
  _OWORD v18[3]; // [rsp+48h] [rbp-50h] BYREF

  memset(v18, 0, sizeof(v18));
  EnterCrit(0LL, 1LL);
  v8 = 0;
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v17 = 1;
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL) > 0 )
      MessageMPH = ClientGetMessageMPH((unsigned int)v18, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)v18, a2, a3, a4, v17, 1);
    v8 = MessageMPH;
    HIDWORD(v18[0]) = 0;
    HIDWORD(v18[2]) = 0;
    v13 = v18[1];
    v14 = v18[2];
    v15 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v18[0];
    a1[1] = v13;
    a1[2] = v14;
  }
  UserSessionSwitchLeaveCrit(v15, v10, v11, v12);
  return v8;
}
