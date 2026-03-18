/*
 * XREFs of ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C006357C
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C0060914 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxBroadcastMessageEx @ 0x1C0060914 (xxxBroadcastMessageEx.c)
 *     ExchangeW32ThreadLock @ 0x1C0061508 (ExchangeW32ThreadLock.c)
 */

void __fastcall xxxSystemBroadcastMessage(
        unsigned int a1,
        HWND a2,
        struct _LARGE_STRING *a3,
        unsigned int a4,
        union tagBROADCASTMSG *a5,
        int a6,
        unsigned int a7)
{
  unsigned int v8; // ebp
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  unsigned int v11; // esi
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // [rsp+40h] [rbp-78h]
  _QWORD v16[3]; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v17[11]; // [rsp+60h] [rbp-58h] BYREF

  v8 = a4;
  PushW32ThreadLock(0LL, v17, UserDereferenceObject);
  PushW32ThreadLock(0LL, v16, UserDereferenceObject);
  v10 = (_QWORD *)grpWinStaList;
  v15 = (_QWORD *)grpWinStaList;
  if ( grpWinStaList )
  {
    do
    {
      if ( v8 || (v11 = 1, v10 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 448LL) + 40LL)) )
        v11 = v8;
      if ( v10 )
        ObfReferenceObject(v10);
      ExchangeW32ThreadLock((__int64)v10, (__int64)v17);
      v12 = (_QWORD *)v10[2];
      if ( v12 )
      {
        do
        {
          ObfReferenceObject(v12);
          ExchangeW32ThreadLock((__int64)v12, (__int64)v16);
          v13 = *(_QWORD *)(v12[1] + 24LL);
          if ( v13 )
            xxxBroadcastMessageEx(v13, a1, a2, a3, v11, a5, a6, a7);
          v12 = (_QWORD *)v12[4];
        }
        while ( v12 );
        v10 = v15;
        v8 = a4;
      }
      v10 = (_QWORD *)v10[1];
      v15 = v10;
    }
    while ( v10 );
  }
  PopAndFreeW32ThreadLock((__int64)v16, v9);
  PopAndFreeW32ThreadLock((__int64)v17, v14);
}
