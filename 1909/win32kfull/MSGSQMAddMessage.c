/*
 * XREFs of MSGSQMAddMessage @ 0x1C0012850
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C000E4C0 (NtUserPostThreadMessage.c)
 *     _PostTransformableMessageIL @ 0x1C0012080 (_PostTransformableMessageIL.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00126E4 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     NtUserPostMessage @ 0x1C0046340 (NtUserPostMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00A9E40 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C0111318 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _PostMessageCheckIL @ 0x1C01E3F44 (_PostMessageCheckIL.c)
 * Callees:
 *     ?MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z @ 0x1C020C4D4 (-MsgSQMFlushMsgRecord@@YAXPEAUtagPROCESSINFO@@0PEAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C020C6FC (-MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C020C7BC (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 *     ?MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z @ 0x1C020C984 (-MsgSQMUpdateMsgRecord@@YAHPEAUtagMSGSQM_MSGRECORD@@KK@Z.c)
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
  struct tagMSGSQM_MSGRECORD *v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+28h] [rbp-40h]
  __int16 v19; // [rsp+2Ch] [rbp-3Ch]
  __int16 v20; // [rsp+2Eh] [rbp-3Ah]
  unsigned __int64 v21; // [rsp+30h] [rbp-38h]
  __int128 v22; // [rsp+38h] [rbp-30h]

  v17 = 0LL;
  v22 = 0LL;
  result = (struct tagMSGSQM_MSGRECORD *)MEMORY[0xFFFFF78000000320];
  v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( gfWinMsgSQMIsOptedIn )
  {
    result = MsgSQMGetSourceListProcessPair(a1, a2, a3);
    if ( result )
    {
      v18 = a3;
      v19 = a6 != 0;
      v20 = a7;
      v21 = 0LL;
      if ( a3 >= 0x111 )
      {
        if ( a3 <= 0x112 || a3 == 281 || a3 == 528 )
        {
          v21 = a4;
        }
        else if ( a3 == 793 )
        {
          v21 = (a5 >> 16) & 0xFFF;
        }
      }
      result = MsgSQMGetMsgRecord(
                 (struct tagMSGSQM_MSGRECORD **)result + 6,
                 (const struct tagMSGSQM_MSGRECORD *)&v17,
                 v12);
      v14 = result;
      if ( result )
      {
        result = (struct tagMSGSQM_MSGRECORD *)MsgSQMUpdateMsgRecord(result, v12, v13);
        if ( !(_DWORD)result )
        {
          MsgSQMFlushMsgRecord(a1, a2, v15);
          return (struct tagMSGSQM_MSGRECORD *)MsgSQMUpdateMsgRecord(v14, v12, v16);
        }
      }
    }
  }
  return result;
}
