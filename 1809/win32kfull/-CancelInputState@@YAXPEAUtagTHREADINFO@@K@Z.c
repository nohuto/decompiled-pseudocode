/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01CD1C8
 * Callers:
 *     zzzAttachToQueue @ 0x1C00D6E7C (zzzAttachToQueue.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00CC87C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00CD064 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     xxxFocusSetInputContext @ 0x1C00CE6AC (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00CEF40 (zzzInputFocusLostWindowEvent.c)
 *     UnlockCaptureWindow @ 0x1C0112CC0 (UnlockCaptureWindow.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  PETHREAD *v11; // [rsp+30h] [rbp-30h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-28h]
  unsigned int v13; // [rsp+3Ch] [rbp-24h]
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  char v16; // [rsp+80h] [rbp+20h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  if ( !a2 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 120LL);
    v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    v15 = v9;
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    QueueNotifyTransformableMessage((struct tagWND *)v9, 0x86u, 0LL, 0LL, 0, 0);
    QueueNotifyTransformableMessage(
      (struct tagWND *)v9,
      6u,
      (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v9 + 40) + 31LL) & 0x20) << 16,
      0LL,
      0,
      0);
    v10 = (_QWORD *)(*((_QWORD *)a1 + 54) + 120LL);
    if ( v9 == *v10 )
      HMAssignmentUnlock(v10);
    v11 = *(PETHREAD **)(v9 + 16);
    ThreadId = (unsigned int)PsGetThreadId(*v11);
    v13 = v13 & 0xFFFFFFFC | 2;
    xxxSendActivateAppMessage((const struct tagAAS *)&v11);
    goto LABEL_21;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 112LL);
    v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    v15 = v8;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    QueueNotifyTransformableMessage((struct tagWND *)v8, 8u, 0LL, 0LL, 0, 0);
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext((__int64 *)v8, 0LL, 1);
    v7 = (_QWORD *)(*((_QWORD *)a1 + 54) + 112LL);
    if ( v8 == *v7 )
    {
      HMAssignmentUnlock(v7);
      if ( v8 )
      {
        v7 = (_QWORD *)gpqForeground;
        if ( *((_QWORD *)a1 + 54) == gpqForeground )
          zzzInputFocusLostWindowEvent(0LL, 5);
      }
    }
    goto LABEL_21;
  }
  if ( v4 == 1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 54) + 388LL) &= ~0x100000u;
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 54) + 104LL);
    v14 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v14;
    v15 = v5;
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    QueueNotifyTransformableMessage((struct tagWND *)v5, 0x1Fu, 0LL, 0LL, 0, 0);
    v7 = (_QWORD *)*((_QWORD *)a1 + 54);
    if ( v5 == v7[13] )
      UnlockCaptureWindow((__int64)v7);
LABEL_21:
    ThreadUnlock1(v7, v6);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
}
