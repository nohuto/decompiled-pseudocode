/*
 * XREFs of ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01AA8A0
 * Callers:
 *     zzzAttachToQueue @ 0x1C0058B78 (zzzAttachToQueue.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalEnumWindow @ 0x1C005A814 (xxxInternalEnumWindow.c)
 *     xxxFocusSetInputContext @ 0x1C005EEB8 (xxxFocusSetInputContext.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C005FC1C (zzzInputFocusLostWindowEvent.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00634B4 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     UnlockCaptureWindow @ 0x1C00F69D0 (UnlockCaptureWindow.c)
 */

void __fastcall CancelInputState(struct tagTHREADINFO *a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  unsigned int ThreadId; // [rsp+38h] [rbp-38h]
  unsigned int v18; // [rsp+3Ch] [rbp-34h]
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h]
  _QWORD v21[3]; // [rsp+58h] [rbp-18h] BYREF
  char v22; // [rsp+90h] [rbp+20h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v22);
  if ( !a2 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 120LL);
    v19 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v19;
    v20 = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    QueueNotifyTransformableMessage((struct tagWND *)v10, 0x86u, 0LL, 0LL, 0, 0);
    QueueNotifyTransformableMessage(
      (struct tagWND *)v10,
      6u,
      (HWND)((unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v10 + 40) + 31LL) & 0x20) << 16),
      0LL,
      0,
      0);
    v11 = (_QWORD *)(*((_QWORD *)a1 + 53) + 120LL);
    if ( v10 == *v11 )
      HMAssignmentUnlock(v11);
    v16 = *(_QWORD *)(v10 + 16);
    ThreadId = (unsigned int)PsGetThreadId(**(PETHREAD **)(v10 + 16));
    v18 = v18 & 0xFFFFFFFC | 2;
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 448LL) + 8LL) + 24LL) + 88LL);
    v21[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v21;
    v21[1] = v12;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    xxxInternalEnumWindow(
      *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 448LL) + 8LL) + 24LL) + 88LL),
      xxxActivateApp,
      (__int64)&v16,
      2);
    ThreadUnlock1(v14, v13, v15);
    goto LABEL_23;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 112LL);
    v19 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v19;
    v20 = v9;
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    QueueNotifyTransformableMessage((struct tagWND *)v9, 8u, 0LL, 0LL, 0, 0);
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext((__int64 *)v9, 0LL, 1);
    v8 = (_QWORD *)(*((_QWORD *)a1 + 53) + 112LL);
    if ( v9 == *v8 )
    {
      HMAssignmentUnlock(v8);
      if ( v9 )
      {
        v8 = (_QWORD *)gpqForeground;
        if ( *((_QWORD *)a1 + 53) == gpqForeground )
          zzzInputFocusLostWindowEvent(0LL, 5);
      }
    }
    goto LABEL_23;
  }
  if ( v4 == 1 )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 53) + 388LL) &= ~0x100000u;
    v5 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 104LL);
    v19 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v19;
    v20 = v5;
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    QueueNotifyTransformableMessage((struct tagWND *)v5, 0x1Fu, 0LL, 0LL, 0, 0);
    v8 = (_QWORD *)*((_QWORD *)a1 + 53);
    if ( v5 == v8[13] )
      UnlockCaptureWindow((__int64)v8);
LABEL_23:
    ThreadUnlock1(v8, v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v22);
}
