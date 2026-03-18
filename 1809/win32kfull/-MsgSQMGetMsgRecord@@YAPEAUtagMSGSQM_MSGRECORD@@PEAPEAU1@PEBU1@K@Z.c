/*
 * XREFs of ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C01F5A08
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     MSGSQMAddMessage @ 0x1C00D0A28 (MSGSQMAddMessage.c)
 * Callees:
 *     <none>
 */

struct tagMSGSQM_MSGRECORD *__fastcall MsgSQMGetMsgRecord(
        struct tagMSGSQM_MSGRECORD **a1,
        const struct tagMSGSQM_MSGRECORD *a2,
        int a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx

  v3 = (__int64 *)*a1;
  v4 = 0LL;
  if ( !*a1 )
    goto LABEL_9;
  v8 = *((_QWORD *)a2 + 1);
  while ( 1 )
  {
    v9 = v3[1];
    if ( v9 >= v8 )
    {
      if ( v9 > v8 )
        goto LABEL_9;
      v10 = v3[2];
      v11 = *((_QWORD *)a2 + 2);
      if ( v10 >= v11 )
        break;
    }
    v4 = v3;
    v3 = (__int64 *)*v3;
    if ( !v3 )
      goto LABEL_9;
  }
  if ( v10 > v11 )
  {
LABEL_9:
    v12 = Win32AllocPoolZInit(40LL, 1937077077LL);
    v3 = (__int64 *)v12;
    if ( v12 )
    {
      *(_QWORD *)(v12 + 8) = *((_QWORD *)a2 + 1);
      v13 = *((_QWORD *)a2 + 2);
      *(_DWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0LL;
      *(_QWORD *)(v12 + 16) = v13;
      *(_DWORD *)(v12 + 28) = a3;
      if ( v4 )
      {
        *(_QWORD *)v12 = *v4;
        *v4 = v12;
      }
      else
      {
        *(_QWORD *)v12 = *a1;
        *a1 = (struct tagMSGSQM_MSGRECORD *)v12;
      }
    }
  }
  return (struct tagMSGSQM_MSGRECORD *)v3;
}
