/*
 * XREFs of NtUserGetMessage @ 0x1C003BF10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ClientGetMessageMPH @ 0x1C003BB1C (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserGetMessage(_OWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  int MessageMPH; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  ULONG64 v15; // rcx
  _OWORD v17[3]; // [rsp+48h] [rbp-50h] BYREF

  memset(v17, 0, sizeof(v17));
  EnterCrit(0LL, 1LL);
  v11 = 0;
  if ( ((a4 | a3) & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8, v9, v10);
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL) > 0 )
      MessageMPH = ClientGetMessageMPH(v17, a2, a3, a4, 1, 1);
    else
      MessageMPH = xxxRealInternalGetMessage((unsigned int)v17, a2, a3, a4, 1uLL, 1);
    v11 = MessageMPH;
    HIDWORD(v17[0]) = 0;
    HIDWORD(v17[2]) = 0;
    v13 = v17[1];
    v14 = v17[2];
    v15 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = v17[0];
    a1[1] = v13;
    a1[2] = v14;
  }
  UserSessionSwitchLeaveCrit(v15);
  return v11;
}
