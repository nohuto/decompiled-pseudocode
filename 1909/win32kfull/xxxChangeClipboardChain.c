/*
 * XREFs of xxxChangeClipboardChain @ 0x1C01130F0
 * Callers:
 *     NtUserChangeClipboardChain @ 0x1C0112FB0 (NtUserChangeClipboardChain.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     CheckClipboardAccess @ 0x1C00591AC (CheckClipboardAccess.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxChangeClipboardChain(unsigned __int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  void *v5; // rdi
  __int64 **v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 ThreadWin32Thread; // rax
  struct _LARGE_STRING *v15; // r9
  unsigned __int64 v16; // r8
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v21; // [rsp+58h] [rbp-9h]
  __int128 v22; // [rsp+68h] [rbp+7h] BYREF
  __int64 v23; // [rsp+78h] [rbp+17h] BYREF
  __int64 *v24; // [rsp+80h] [rbp+1Fh]
  __int64 v25; // [rsp+88h] [rbp+27h]
  _QWORD v26[3]; // [rsp+90h] [rbp+2Fh] BYREF

  memset(v26, 0, sizeof(v26));
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v4 = CheckClipboardAccess();
  v5 = (void *)v4;
  if ( !v4 )
    return 0LL;
  if ( a1[2] != gptiCurrent )
    return 0LL;
  v6 = (__int64 **)(v4 + 72);
  if ( !*(_QWORD *)(v4 + 72) )
    return 0LL;
  if ( a2 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 416LL) + 664LL) != v4 )
    a2 = 0LL;
  PushW32ThreadLock(v4, v26, UserDereferenceObject);
  ObfReferenceObject(v5);
  v9 = *v6;
  if ( a1 == (unsigned __int64 *)*v6 )
  {
    *(_QWORD *)&v21 = v6;
    *((_QWORD *)&v21 + 1) = a2;
    v22 = v21;
    HMAssignmentLock(&v22);
    v12 = 1;
  }
  else
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
    v23 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
    v24 = v9;
    HMLockObject(v9);
    v15 = 0LL;
    if ( a2 )
      v15 = *(struct _LARGE_STRING **)a2;
    v16 = *a1;
    v17 = *v6;
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout(v17, 0x30Du, v16, v15, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v19, v18, v20);
  }
  PopAndFreeW32ThreadLock((__int64)v26, v10, v11);
  return v12;
}
