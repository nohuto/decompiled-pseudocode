/*
 * XREFs of MSGSQMAddMessage @ 0x1C0062398
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C001B330 (NtUserPostThreadMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0024530 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     NtUserPostMessage @ 0x1C0041200 (NtUserPostMessage.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     _PostTransformableMessageIL @ 0x1C0061A1C (_PostTransformableMessageIL.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00620C0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C010ADA8 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01AC270 (_PostMessageCheckIL.c)
 * Callees:
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C01D0FB0 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C01D11CC (-MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01D128C (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 *     ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C01D1414 (-MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z.c)
 */

struct tagMSGSQM_MSGRECORD *__fastcall MSGSQMAddMessage(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        __int16 a7)
{
  struct tagMSGSQM_MSGRECORD *result; // rax
  unsigned __int64 v12; // rdi
  unsigned int v13; // r8d
  struct tagMSGSQM_MSGRECORD *v14; // rbx
  unsigned int v15; // r8d
  _BYTE v16[8]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-40h]
  __int16 v18; // [rsp+2Ch] [rbp-3Ch]
  __int16 v19; // [rsp+2Eh] [rbp-3Ah]
  unsigned __int64 v20; // [rsp+30h] [rbp-38h]

  result = (struct tagMSGSQM_MSGRECORD *)MEMORY[0xFFFFF78000000320];
  v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( gfWinMsgSQMIsOptedIn )
  {
    result = MsgSQMGetSourceListProcessPair(a1, a2, a3);
    if ( result )
    {
      v17 = a3;
      v18 = a6 != 0;
      v19 = a7;
      v20 = 0LL;
      if ( a3 >= 0x111 )
      {
        if ( a3 <= 0x112 || a3 == 281 || a3 == 528 )
        {
          v20 = a4;
        }
        else if ( a3 == 793 )
        {
          v20 = (a5 >> 16) & 0xFFF;
        }
      }
      result = MsgSQMGetMsgRecord(
                 (struct tagMSGSQM_MSGRECORD **)result + 6,
                 (const struct tagMSGSQM_MSGRECORD *)v16,
                 v12);
      v14 = result;
      if ( result )
      {
        result = (struct tagMSGSQM_MSGRECORD *)MsgSQMUpdateMsgRecord(result, v12, v13);
        if ( !(_DWORD)result )
        {
          MsgSQMFlushMsgRecord(a1, a2, v14);
          return (struct tagMSGSQM_MSGRECORD *)MsgSQMUpdateMsgRecord(v14, v12, v15);
        }
      }
    }
  }
  return result;
}
