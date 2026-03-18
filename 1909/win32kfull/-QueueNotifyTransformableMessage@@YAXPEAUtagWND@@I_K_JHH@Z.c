/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C0011538
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0011AAC (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001C5CC (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00513E8 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxFocusSetInputContext @ 0x1C0132D68 (xxxFocusSetInputContext.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C01357E0 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1588 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     QueueNotifyMessage @ 0x1C020CBC0 (QueueNotifyMessage.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C001FD04 (xxxSendMessageCallback.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

void __fastcall QueueNotifyTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // [rsp+50h] [rbp-28h] BYREF
  struct tagWND *v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]
  char v12; // [rsp+80h] [rbp+8h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v9 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v9;
  v10 = a1;
  if ( a1 )
    HMLockObject(a1);
  xxxSendMessageCallback(a1, a2, 0LL, 1LL, 0, a5, a6);
  ThreadUnlock1();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
}
