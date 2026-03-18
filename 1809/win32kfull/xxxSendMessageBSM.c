/*
 * XREFs of xxxSendMessageBSM @ 0x1C00CFB80
 * Callers:
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C00CC818 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     xxxWrapSendMessageBSM @ 0x1C00CCC60 (xxxWrapSendMessageBSM.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C00CFCC8 (ExchangeW32ThreadLock.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CFCF4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
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
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *i; // rdi
  __int64 v13; // rdx
  __int64 v15; // rdx
  _QWORD v16[3]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-40h] BYREF

  v6 = 0;
  if ( (*(_DWORD *)a5 & 0x10) != 0 )
  {
    PushW32ThreadLock(0LL, v17, UserDereferenceObject);
    PushW32ThreadLock(0LL, v16, UserDereferenceObject);
    v11 = (_QWORD *)grpWinStaList;
    if ( grpWinStaList )
    {
      while ( 2 )
      {
        ObfReferenceObject(v11);
        ExchangeW32ThreadLock(v11, v17);
        for ( i = (_QWORD *)v11[2]; i; i = (_QWORD *)i[4] )
        {
          ObfReferenceObject(i);
          ExchangeW32ThreadLock(i, v16);
          v6 = xxxSendBSMtoDesktop(*(struct tagWND **)(i[1] + 24LL), a2, a3, a4, a5, a6);
          if ( !v6 && (*((_DWORD *)a5 + 1) & 1) != 0 )
          {
            PopAndFreeW32ThreadLock((__int64)v16, v10);
            PopAndFreeW32ThreadLock((__int64)v17, v15);
            return 0LL;
          }
        }
        v11 = (_QWORD *)v11[1];
        if ( v11 )
          continue;
        break;
      }
    }
    PopAndFreeW32ThreadLock((__int64)v16, v10);
    PopAndFreeW32ThreadLock((__int64)v17, v13);
  }
  else
  {
    return (unsigned int)xxxSendBSMtoDesktop(a1, a2, a3, a4, a5, a6);
  }
  return v6;
}
