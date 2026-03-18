/*
 * XREFs of xxxDDETrackSendHook @ 0x1C020BF68
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C020970C (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0209868 (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1C02099C8 (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 *     xxxMessageEvent @ 0x1C0243B1C (xxxMessageEvent.c)
 */

_BOOL8 __fastcall xxxDDETrackSendHook(struct tagWND *a1, int a2, __int64 a3, int a4)
{
  struct tagWND *v8; // rax
  struct tagWND *v9; // rdi
  struct tagDDECONV *DdeConv; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagDDECONV *v14; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v15[14]; // [rsp+48h] [rbp-40h] BYREF
  struct tagDDECONV *v16; // [rsp+90h] [rbp+8h] BYREF

  if ( (MonitorFlags & 0x2000000) != 0 )
  {
    memset(v15, 0, sizeof(v15));
    *(_QWORD *)v15 = (unsigned __int16)a4;
    *(_QWORD *)&v15[2] = HIWORD(a4);
    xxxMessageEvent((_DWORD)a1, a2, a3, a4, 0x2000000, (__int64)v15);
  }
  if ( *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) )
    return 1LL;
  if ( a2 == 996 )
  {
    v8 = (struct tagWND *)ValidateHwnd(a3);
    v9 = v8;
    if ( v8 )
    {
      DdeConv = FindDdeConv(v8, a1);
      if ( DdeConv )
      {
        AnticipatePost(
          DdeConv,
          (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxDupConvTerminate,
          0LL,
          0LL,
          0LL,
          0);
        PostMessage((int)v9, 993, *(_QWORD *)a1, 0);
      }
      else if ( (unsigned int)NewConversation(&v14, &v16, a1, v9) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            v13,
            v12,
            0xEu,
            0xAu,
            (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
            *(_QWORD *)a1,
            a3);
        return 1LL;
      }
    }
    return 0LL;
  }
  return a2 == 992;
}
