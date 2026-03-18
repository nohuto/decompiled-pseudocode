/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00839E4
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 * Callees:
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C0087100 (ExchangeW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 */

void __fastcall xxxSystemBroadcastMessage(
        unsigned int a1,
        unsigned __int64 a2,
        struct _LARGE_STRING *a3,
        __int64 a4,
        union tagBROADCASTMSG *a5,
        int a6,
        unsigned int a7)
{
  unsigned int v7; // r14d
  __int64 v8; // r9
  _QWORD *v9; // rdi
  unsigned int v10; // esi
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // [rsp+48h] [rbp-41h]
  _QWORD v14[3]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v15[12]; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v19; // [rsp+F0h] [rbp+67h]

  v19 = a4;
  memset(v15, 0, 24);
  v7 = a4;
  memset(v14, 0, sizeof(v14));
  PushW32ThreadLock(0LL, v15, UserDereferenceObject, a4);
  PushW32ThreadLock(0LL, v14, UserDereferenceObject, v8);
  v9 = (_QWORD *)grpWinStaList;
  v13 = (_QWORD *)grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      if ( v7 || (v10 = 1, v9 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL)) )
        v10 = v7;
      if ( v9 )
        ObfReferenceObject(v9);
      ExchangeW32ThreadLock(v9, v15);
      v11 = (_QWORD *)v9[2];
      if ( v11 )
      {
        do
        {
          ObfReferenceObject(v11);
          ExchangeW32ThreadLock(v11, v14);
          v12 = *(_QWORD *)(v11[1] + 24LL);
          if ( v12 )
            xxxBroadcastMessageEx(v12, a1, a2, a3, v10, a5, a6, a7);
          v11 = (_QWORD *)v11[4];
        }
        while ( v11 );
        v9 = v13;
        v7 = v19;
      }
      v9 = (_QWORD *)v9[1];
      v13 = v9;
    }
    while ( v9 );
  }
  PopAndFreeW32ThreadLock(v14);
  PopAndFreeW32ThreadLock(v15);
}
