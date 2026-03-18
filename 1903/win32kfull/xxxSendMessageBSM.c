/*
 * XREFs of xxxSendMessageBSM @ 0x1C0086FB0
 * Callers:
 *     xxxWrapSendMessageBSM @ 0x1C00866C0 (xxxWrapSendMessageBSM.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C013ED60 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C0087100 (ExchangeW32ThreadLock.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008712C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
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
  __int64 v10; // r9
  _QWORD *v11; // rdi
  _QWORD *i; // rbx
  _QWORD v14[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v15[3]; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0;
  if ( (*(_DWORD *)a5 & 0x10) == 0 )
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
  PushW32ThreadLock(0LL, v15, UserDereferenceObject, a4);
  PushW32ThreadLock(0LL, v14, UserDereferenceObject, v10);
  v11 = (_QWORD *)grpWinStaList;
LABEL_4:
  if ( !v11 )
  {
    PopAndFreeW32ThreadLock(v14);
    PopAndFreeW32ThreadLock(v15);
    return v6;
  }
  ObfReferenceObject(v11);
  ExchangeW32ThreadLock(v11, v15);
  for ( i = (_QWORD *)v11[2]; ; i = (_QWORD *)i[4] )
  {
    if ( !i )
    {
      v11 = (_QWORD *)v11[1];
      goto LABEL_4;
    }
    ObfReferenceObject(i);
    ExchangeW32ThreadLock(i, v14);
    v6 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 24LL), a2, a3, a4, a5, a6);
    if ( !v6 && (*((_DWORD *)a5 + 1) & 1) != 0 )
      break;
  }
  PopAndFreeW32ThreadLock(v14);
  PopAndFreeW32ThreadLock(v15);
  return 0LL;
}
