/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00DF170
 * Callers:
 *     xxxEmptyClipboard @ 0x1C00DE988 (xxxEmptyClipboard.c)
 *     xxxDisownClipboard @ 0x1C00E021C (xxxDisownClipboard.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD v9[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v10[3]; // [rsp+68h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  v3 = a2;
  if ( v2 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v9;
    v9[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    if ( v3 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(
              (__int64 *)v2,
              0x307u,
              0LL,
              0LL,
              2,
              5000,
              (__int64 *)&BugCheckParameter3,
              1,
              0) )
        xxxSendNotifyMessage((struct tagWND *)v2, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v7 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v2 + 16) + 424LL), 0LL, 2LL);
      v8 = v7;
      if ( v7 )
        PushW32ThreadLock(v7, v10, (__int64)ReleaseWakeReference);
      xxxSendTransformableMessageTimeout((__int64 *)v2, v3, 0LL, 0LL, 64, 0, (__int64 *)&BugCheckParameter3, 1, 0);
      if ( v8 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v10, v5);
    }
    ThreadUnlock1(v6, v5);
  }
}
