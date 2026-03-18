/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1708
 * Callers:
 *     zzzAttachToQueue @ 0x1C0012DFC (zzzAttachToQueue.c)
 * Callees:
 *     xxxFocusSetInputContext @ 0x1C0014208 (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00147C0 (zzzInputFocusLostWindowEvent.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0017DDC (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00835BC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UnlockCaptureWindow @ 0x1C0112530 (UnlockCaptureWindow.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  int v4; // edi
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct tagWND **v8; // rcx
  struct tagWND *v9; // rdi
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  PETHREAD *v12; // [rsp+30h] [rbp-30h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+3Ch] [rbp-24h]
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  struct tagWND *v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  char v18; // [rsp+90h] [rbp+30h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v18);
  if ( !a2 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 128LL);
    v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    v16 = (struct tagWND *)v10;
    if ( v10 )
      HMLockObject(v10);
    QueueNotifyTransformableMessage((struct tagWND *)v10, 0x86u, 0LL, 0LL, 0, 0);
    QueueNotifyTransformableMessage(
      (struct tagWND *)v10,
      6u,
      (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 0x20) << 16,
      0LL,
      0,
      0);
    v11 = (_QWORD *)(*((_QWORD *)a1 + 53) + 128LL);
    if ( v10 == *v11 )
      HMAssignmentUnlock(v11);
    v12 = *(PETHREAD **)(v10 + 16);
    ThreadId = (unsigned int)PsGetThreadId(*v12);
    v14 = 2;
    xxxSendActivateAppMessage((const struct tagAAS *)&v12);
    goto LABEL_21;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = *(struct tagWND **)(*((_QWORD *)a1 + 53) + 120LL);
    v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    v16 = v9;
    if ( v9 )
      HMLockObject(v9);
    QueueNotifyTransformableMessage(v9, 8u, 0LL, 0LL, 0, 0);
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext((__int64 *)v9, 0, 1);
    v8 = (struct tagWND **)(*((_QWORD *)a1 + 53) + 120LL);
    if ( v9 == *v8 )
    {
      HMAssignmentUnlock(v8);
      if ( v9 )
      {
        v8 = (struct tagWND **)gpqForeground;
        if ( *((_QWORD *)a1 + 53) == gpqForeground )
          zzzInputFocusLostWindowEvent(0LL);
      }
    }
    goto LABEL_21;
  }
  if ( v4 == 1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 53) + 396LL) &= ~0x100000u;
    v5 = *(struct tagWND **)(*((_QWORD *)a1 + 53) + 112LL);
    v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    v16 = v5;
    if ( v5 )
      HMLockObject(v5);
    QueueNotifyTransformableMessage(v5, 0x1Fu, 0LL, 0LL, 0, 0);
    v8 = (struct tagWND **)*((_QWORD *)a1 + 53);
    if ( v5 == v8[14] )
      UnlockCaptureWindow((__int64)v8);
LABEL_21:
    ThreadUnlock1(v8, v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v18);
}
