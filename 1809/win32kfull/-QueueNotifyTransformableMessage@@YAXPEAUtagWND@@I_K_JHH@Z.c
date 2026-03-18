/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00CC87C
 * Callers:
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C006E310 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00B0288 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00CD064 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxFocusSetInputContext @ 0x1C00CE6AC (xxxFocusSetInputContext.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CFCF4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01CD1C8 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     QueueNotifyMessage @ 0x1C01F5EE0 (QueueNotifyMessage.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSendMessageCallback @ 0x1C00D1744 (xxxSendMessageCallback.c)
 */

void __fastcall QueueNotifyTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6)
{
  __int64 v8; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[4]; // [rsp+50h] [rbp-28h] BYREF
  char v13; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v12;
  v12[1] = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  xxxSendMessageCallback(a1, a2, 0LL, 1LL, 0, a5, a6);
  ThreadUnlock1(v11, v10);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
}
