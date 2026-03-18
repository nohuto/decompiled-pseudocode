/*
 * XREFs of xxxChangeClipboardChain @ 0x1C01390F0
 * Callers:
 *     NtUserChangeClipboardChain @ 0x1C0138FB0 (NtUserChangeClipboardChain.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxChangeClipboardChain(HWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  void *v8; // rdi
  __int64 **v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 ThreadWin32Thread; // rax
  struct _LARGE_STRING *v20; // r9
  HWND v21; // r8
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v26; // [rsp+58h] [rbp-9h]
  __int128 v27; // [rsp+68h] [rbp+7h] BYREF
  __int64 v28; // [rsp+78h] [rbp+17h] BYREF
  __int64 *v29; // [rsp+80h] [rbp+1Fh]
  __int64 v30; // [rsp+88h] [rbp+27h]
  _QWORD v31[3]; // [rsp+90h] [rbp+2Fh] BYREF

  v4 = a2;
  memset(v31, 0, sizeof(v31));
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v6 = CheckClipboardAccess((__int64)a1, a2, a3, a4);
  v8 = (void *)v6;
  if ( !v6 )
    return 0LL;
  if ( a1[2] != (HWND)gptiCurrent )
    return 0LL;
  v9 = (__int64 **)(v6 + 72);
  if ( !*(_QWORD *)(v6 + 72) )
    return 0LL;
  if ( v4 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 416LL) + 664LL) != v6 )
    v4 = 0LL;
  PushW32ThreadLock(v6, v31, UserDereferenceObject, v7);
  ObfReferenceObject(v8);
  v13 = *v9;
  if ( a1 == (HWND *)*v9 )
  {
    *(_QWORD *)&v26 = v9;
    *((_QWORD *)&v26 + 1) = v4;
    v27 = v26;
    HMAssignmentLock(&v27);
    v17 = 1;
  }
  else
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
    v28 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v28;
    v29 = v13;
    HMLockObject(v13);
    v20 = 0LL;
    if ( v4 )
      v20 = *(struct _LARGE_STRING **)v4;
    v21 = *a1;
    v22 = *v9;
    _InterlockedAdd(&glSendMessage, 1u);
    v17 = xxxSendTransformableMessageTimeout(v22, 0x30Du, v21, v20, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v24, v23, v25);
  }
  PopAndFreeW32ThreadLock((__int64)v31, v14, v15, v16);
  return v17;
}
