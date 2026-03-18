/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00FF830
 * Callers:
 *     xxxDisownClipboard @ 0x1C00FF454 (xxxDisownClipboard.c)
 *     xxxEmptyClipboard @ 0x1C00FF5E0 (xxxEmptyClipboard.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp-20h]
  _QWORD v14[3]; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a1 + 10);
  v11 = 0LL;
  v4 = a2;
  v12 = 0LL;
  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  if ( v3 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = v3;
    HMLockObject(v3);
    if ( v4 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(
              (__int64 *)v3,
              0x307u,
              0LL,
              0LL,
              2u,
              0x1388u,
              (__int64 *)&BugCheckParameter3,
              1u,
              0) )
        xxxSendNotifyMessage((struct tagWND *)v3, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v9 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v3 + 16) + 416LL), 0LL, 2LL);
      v10 = v9;
      if ( v9 )
        PushW32ThreadLock(v9, v14, (__int64)ReleaseWakeReference);
      xxxSendTransformableMessageTimeout((__int64 *)v3, v4, 0LL, 0LL, 0x40u, 0, (__int64 *)&BugCheckParameter3, 1u, 0);
      if ( v10 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v14, v6, v8);
    }
    ThreadUnlock1(v7, v6, v8);
  }
}
