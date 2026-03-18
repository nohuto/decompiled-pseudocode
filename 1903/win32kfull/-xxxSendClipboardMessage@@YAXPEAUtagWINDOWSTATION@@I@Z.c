/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0125940
 * Callers:
 *     xxxDisownClipboard @ 0x1C0125564 (xxxDisownClipboard.c)
 *     xxxEmptyClipboard @ 0x1C01256F0 (xxxEmptyClipboard.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  _QWORD v17[3]; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+10h] BYREF

  v4 = *((_QWORD *)a1 + 10);
  v14 = 0LL;
  v5 = a2;
  v15 = 0LL;
  v16 = 0LL;
  memset(v17, 0, sizeof(v17));
  if ( v4 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v14 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
    v15 = v4;
    HMLockObject(v4);
    if ( v5 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(
              (__int64 *)v4,
              0x307u,
              0LL,
              0LL,
              2u,
              0x1388u,
              (__int64 *)&BugCheckParameter3,
              1u,
              0) )
        xxxSendNotifyMessage((struct tagWND *)v4, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v10 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 416LL), 0LL, 2LL);
      v12 = v10;
      if ( v10 )
        PushW32ThreadLock(v10, v17, (__int64)ReleaseWakeReference, v11);
      xxxSendTransformableMessageTimeout((__int64 *)v4, v5, 0LL, 0LL, 0x40u, 0, (__int64 *)&BugCheckParameter3, 1u, 0);
      if ( v12 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v17, v7, v9, v13);
    }
    ThreadUnlock1(v8, v7, v9);
  }
}
