/*
 * XREFs of ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C01D128C
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     MSGSQMAddMessage @ 0x1C0062398 (MSGSQMAddMessage.c)
 * Callees:
 *     ?MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C01D0EB0 (-MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 *     ?MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C01D0F14 (-MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z @ 0x1C01D1154 (-MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z.c)
 */

struct tagMSGSQM_PROCESSPAIR *__fastcall MsgSQMGetSourceListProcessPair(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2)
{
  struct tagMSGSQM_PROCESSPAIR *result; // rax
  struct tagMSGSQM_PROCESSPAIR *v5; // rax
  struct tagMSGSQM_PROCESSPAIR *v6; // rdi
  struct tagMSGSQM_PROCESSPAIR *v7; // rcx
  struct tagMSGSQM_PROCESSPAIR *v8; // rbx
  struct tagMSGSQM_PROCESSPAIR *v9; // rax
  struct tagMSGSQM_PROCESSPAIR **v10; // rax

  result = MsgSQMGetMsgCache(a1, 1);
  if ( result )
  {
    v5 = (struct tagMSGSQM_PROCESSPAIR *)((char *)result + 48);
    v6 = v5;
    if ( *(struct tagMSGSQM_PROCESSPAIR **)v5 == v5 )
      goto LABEL_10;
    v7 = (struct tagMSGSQM_PROCESSPAIR *)*((_QWORD *)v5 + 1);
    if ( *((_QWORD *)v7 + 5) > (unsigned __int64)a2 )
    {
      v6 = *(struct tagMSGSQM_PROCESSPAIR **)v5;
      do
      {
        v7 = v6;
        if ( *((_QWORD *)v6 + 5) >= (unsigned __int64)a2 )
          break;
        v6 = *(struct tagMSGSQM_PROCESSPAIR **)v6;
      }
      while ( v6 != v5 );
    }
    v8 = 0LL;
    if ( *((struct tagPROCESSINFO **)v7 + 5) == a2 )
      v8 = v7;
    if ( !v8 )
    {
LABEL_10:
      v9 = (struct tagMSGSQM_PROCESSPAIR *)Win32AllocPoolZInit(56LL, 1937077077LL);
      v8 = v9;
      if ( v9 )
      {
        if ( !(unsigned int)MsgSQMAddTargetNode(a2, v9) )
        {
          Win32FreePool(v8);
          v8 = 0LL;
        }
        if ( v8 )
        {
          *((_QWORD *)v8 + 4) = a1;
          v10 = (struct tagMSGSQM_PROCESSPAIR **)*((_QWORD *)v6 + 1);
          if ( *v10 != v6 )
            __fastfail(3u);
          *(_QWORD *)v8 = v6;
          *((_QWORD *)v8 + 1) = v10;
          *v10 = v8;
          *((_QWORD *)v6 + 1) = v8;
        }
      }
    }
    MsgSQMCleanupMsgCache(a1);
    return v8;
  }
  return result;
}
