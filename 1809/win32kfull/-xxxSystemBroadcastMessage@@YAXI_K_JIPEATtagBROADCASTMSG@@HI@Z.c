/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00CC948
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C00CFCC8 (ExchangeW32ThreadLock.c)
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 */

void __fastcall xxxSystemBroadcastMessage(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // [rsp+40h] [rbp-78h]
  _QWORD v8[3]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v9[11]; // [rsp+60h] [rbp-58h] BYREF

  PushW32ThreadLock(0LL, v9, UserDereferenceObject);
  PushW32ThreadLock(0LL, v8, UserDereferenceObject);
  v3 = (_QWORD *)grpWinStaList;
  v7 = (_QWORD *)grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      if ( v3 )
        ObfReferenceObject(v3);
      ExchangeW32ThreadLock(v3, v9);
      v4 = (_QWORD *)v3[2];
      if ( v4 )
      {
        do
        {
          ObfReferenceObject(v4);
          ExchangeW32ThreadLock(v4, v8);
          v5 = *(_QWORD *)(v4[1] + 24LL);
          if ( v5 )
            xxxBroadcastMessageEx(v5, a1, a2);
          v4 = (_QWORD *)v4[4];
        }
        while ( v4 );
        v3 = v7;
      }
      v3 = (_QWORD *)v3[1];
      v7 = v3;
    }
    while ( v3 );
  }
  PopAndFreeW32ThreadLock((__int64)v8, v2);
  PopAndFreeW32ThreadLock((__int64)v9, v6);
}
