/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00B5B4C
 * Callers:
 *     xxxDisownClipboard @ 0x1C00B5724 (xxxDisownClipboard.c)
 *     xxxEmptyClipboard @ 0x1C00B5A04 (xxxEmptyClipboard.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD v10[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v11[3]; // [rsp+68h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  v3 = a2;
  if ( v2 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v10;
    v10[1] = v2;
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
      v8 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v2 + 16) + 416LL), 0LL, 2LL, 0LL);
      v9 = v8;
      if ( v8 )
        PushW32ThreadLock(v8, v11, (__int64)ReleaseWakeReference);
      xxxSendTransformableMessageTimeout((__int64 *)v2, v3, 0LL, 0LL, 64, 0, (__int64 *)&BugCheckParameter3, 1, 0);
      if ( v9 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v11);
    }
    ThreadUnlock1(v6, v5, v7);
  }
}
