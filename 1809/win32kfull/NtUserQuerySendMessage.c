/*
 * XREFs of NtUserQuerySendMessage @ 0x1C021B2C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 *     _QuerySendMessage @ 0x1C01F6024 (_QuerySendMessage.c)
 */

_BOOL8 __fastcall NtUserQuerySendMessage(_OWORD *a1)
{
  __int64 v2; // rax
  ULONG64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  BOOL SendMessage; // ebx
  _OWORD v9[4]; // [rsp+28h] [rbp-40h] BYREF

  memset(v9, 0, 0x30uLL);
  v2 = EnterSharedCrit(0LL, 1LL);
  if ( *(_QWORD *)(v2 + 512) )
  {
    SendMessage = QuerySendMessage(v2, (__int64)v9);
    if ( SendMessage && a1 )
    {
      v3 = MmUserProbeAddress;
      v4 = *((_QWORD *)&v9[1] + 1);
      if ( *((_QWORD *)&v9[1] + 1) > MmUserProbeAddress )
        v4 = 0LL;
      *((_QWORD *)&v9[1] + 1) = v4;
      HIDWORD(v9[0]) = 0;
      HIDWORD(v9[2]) = 0;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v9[0];
      a1[1] = v9[1];
      a1[2] = v9[2];
    }
  }
  else
  {
    SendMessage = 0;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return SendMessage;
}
