/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00835BC
 * Callers:
 *     xxxFocusSetInputContext @ 0x1C0014208 (xxxFocusSetInputContext.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0017DDC (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001BA9C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008712C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00B0588 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1708 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     QueueNotifyMessage @ 0x1C020CE70 (QueueNotifyMessage.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

void __fastcall QueueNotifyTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  struct tagWND *v18; // [rsp+58h] [rbp-20h]
  __int64 v19; // [rsp+60h] [rbp-18h]
  char v20; // [rsp+80h] [rbp+8h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
  v17 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v17;
  v18 = a1;
  if ( a1 )
    HMLockObject(a1);
  xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 1LL, 0, a5, a6);
  ThreadUnlock1(v15, v14, v16);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v20);
}
