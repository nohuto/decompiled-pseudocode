/*
 * XREFs of xxxSendMessageBSM @ 0x1C0011930
 * Callers:
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0011034 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     xxxWrapSendMessageBSM @ 0x1C0011840 (xxxWrapSendMessageBSM.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x1C0011A80 (ExchangeW32ThreadLock.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0011AAC (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMessageBSM(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagBROADCASTSYSTEMMSGPARAMS *a5,
        int a6)
{
  unsigned int v6; // esi
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  _QWORD v13[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0;
  if ( (*(_DWORD *)a5 & 0x10) == 0 )
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  PushW32ThreadLock(0LL, v14, UserDereferenceObject);
  PushW32ThreadLock(0LL, v13, UserDereferenceObject);
  v10 = (_QWORD *)grpWinStaList;
LABEL_4:
  if ( !v10 )
  {
    PopAndFreeW32ThreadLock(v13);
    PopAndFreeW32ThreadLock(v14);
    return v6;
  }
  ObfReferenceObject(v10);
  ExchangeW32ThreadLock(v10, v14);
  for ( i = (_QWORD *)v10[2]; ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      v10 = (_QWORD *)v10[1];
      goto LABEL_4;
    }
    ObfReferenceObject(i);
    ExchangeW32ThreadLock(i, v13);
    v6 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 24LL), a2, a3, a4, a5, a6);
    if ( !v6 && (*((_DWORD *)a5 + 1) & 1) != 0 )
      break;
  }
  PopAndFreeW32ThreadLock(v13);
  PopAndFreeW32ThreadLock(v14);
  return 0LL;
}
