/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0011658
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 * Callees:
 *     ExchangeW32ThreadLock @ 0x1C0011A80 (ExchangeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 */

void __fastcall xxxSystemBroadcastMessage(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        union tagBROADCASTMSG *a5,
        int a6,
        unsigned int a7)
{
  int v7; // r14d
  _QWORD *v8; // rdi
  int v9; // esi
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // [rsp+48h] [rbp-41h]
  _QWORD v13[3]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v14[12]; // [rsp+68h] [rbp-21h] BYREF

  memset(v14, 0, 24);
  v7 = a4;
  memset(v13, 0, sizeof(v13));
  PushW32ThreadLock(0LL, v14, UserDereferenceObject);
  PushW32ThreadLock(0LL, v13, UserDereferenceObject);
  v8 = (_QWORD *)grpWinStaList;
  v12 = (_QWORD *)grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      if ( v7 || (v9 = 1, v8 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL)) )
        v9 = v7;
      if ( v8 )
        ObfReferenceObject(v8);
      ExchangeW32ThreadLock(v8, v14);
      v10 = (_QWORD *)v8[2];
      if ( v10 )
      {
        do
        {
          ObfReferenceObject(v10);
          ExchangeW32ThreadLock(v10, v13);
          v11 = *(_QWORD *)(v10[1] + 24LL);
          if ( v11 )
            xxxBroadcastMessageEx(v11, a1, a2, a3, v9, a5, a6, a7);
          v10 = (_QWORD *)v10[4];
        }
        while ( v10 );
        v8 = v12;
        v7 = a4;
      }
      v8 = (_QWORD *)v8[1];
      v12 = v8;
    }
    while ( v8 );
  }
  PopAndFreeW32ThreadLock(v13);
  PopAndFreeW32ThreadLock(v14);
}
