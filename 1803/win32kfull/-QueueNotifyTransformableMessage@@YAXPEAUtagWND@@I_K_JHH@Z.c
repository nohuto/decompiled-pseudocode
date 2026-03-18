/*
 * XREFs of ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00634B4
 * Callers:
 *     xxxActivateApp @ 0x1C005A9D0 (xxxActivateApp.c)
 *     xxxFocusSetInputContext @ 0x1C005EEB8 (xxxFocusSetInputContext.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0061534 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C0064F04 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01AA8A0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     QueueNotifyMessage @ 0x1C01D1650 (QueueNotifyMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x1C0060F68 (xxxSendMessageCallback.c)
 */

void __fastcall QueueNotifyTransformableMessage(
        struct tagWND *a1,
        unsigned int a2,
        HWND a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  __int64 v10; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD v15[4]; // [rsp+50h] [rbp-28h] BYREF
  char v16; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
  v15[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v15;
  v15[1] = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 1uLL, 0, a5, a6);
  ThreadUnlock1(v13, v12, v14);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
}
