/*
 * XREFs of ?MsgSQMGetMsgRecord@@YAPEAUtagMSGSQM_MSGRECORD@@PEAPEAU1@PEBU1@K@Z @ 0x1C020C9AC
 * Callers:
 *     MSGSQMAddMessage @ 0x1C0087ED0 (MSGSQMAddMessage.c)
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
  __int64 v10; // rax
  __int64 v11; // rcx

  v3 = (__int64 *)*a1;
  v4 = 0LL;
  if ( !*a1 )
    goto LABEL_9;
  v8 = *((_QWORD *)a2 + 1);
  while ( 1 )
  {
    if ( v3[1] >= v8 )
    {
      if ( v3[1] > v8 )
        goto LABEL_9;
      v9 = v3[2];
      if ( v9 >= *((_QWORD *)a2 + 2) )
        break;
    }
    v4 = v3;
    v3 = (__int64 *)*v3;
    if ( !v3 )
      goto LABEL_9;
  }
  if ( v9 > *((_QWORD *)a2 + 2) )
  {
LABEL_9:
    v10 = Win32AllocPoolZInit(40LL, 1937077077LL);
    v3 = (__int64 *)v10;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 8) = *((_QWORD *)a2 + 1);
      v11 = *((_QWORD *)a2 + 2);
      *(_DWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 32) = 0LL;
      *(_QWORD *)(v10 + 16) = v11;
      *(_DWORD *)(v10 + 28) = a3;
      if ( v4 )
      {
        *(_QWORD *)v10 = *v4;
        *v4 = v10;
      }
      else
      {
        *(_QWORD *)v10 = *a1;
        *a1 = (struct tagMSGSQM_MSGRECORD *)v10;
      }
    }
  }
  return (struct tagMSGSQM_MSGRECORD *)v3;
}
