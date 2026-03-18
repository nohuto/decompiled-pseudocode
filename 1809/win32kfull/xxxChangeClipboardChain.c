/*
 * XREFs of xxxChangeClipboardChain @ 0x1C0130244
 * Callers:
 *     NtUserChangeClipboardChain @ 0x1C0130140 (NtUserChangeClipboardChain.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 */

__int64 __fastcall xxxChangeClipboardChain(unsigned __int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rax
  void *v5; // rdi
  __int64 **v6; // rsi
  __int64 v7; // rdx
  __int64 *v8; // rbp
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+78h] [rbp-30h] BYREF

  v2 = (__int64 *)a2;
  v4 = CheckClipboardAccess((__int64)a1, a2);
  v5 = (void *)v4;
  if ( !v4 )
    return 0LL;
  if ( a1[2] != gptiCurrent )
    return 0LL;
  v6 = (__int64 **)(v4 + 72);
  if ( !*(_QWORD *)(v4 + 72) )
    return 0LL;
  if ( v2 && *(_QWORD *)(*(_QWORD *)(v2[2] + 424) + 672LL) != v4 )
    v2 = 0LL;
  PushW32ThreadLock(v4, v20, UserDereferenceObject);
  ObfReferenceObject(v5);
  v8 = *v6;
  if ( a1 == (unsigned __int64 *)*v6 )
  {
    v18[0] = v6;
    v18[1] = v2;
    HMAssignmentLock(v18);
    v10 = 1;
  }
  else
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
    v19[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v19;
    v19[1] = v8;
    _InterlockedAdd((volatile signed __int32 *)v8 + 2, 1u);
    v13 = 0LL;
    if ( v2 )
      v13 = *v2;
    v14 = *a1;
    v15 = *v6;
    _InterlockedAdd(&glSendMessage, 1u);
    v10 = xxxSendTransformableMessageTimeout(v15, 0x30Du, v14, v13, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v17, v16);
  }
  PopAndFreeW32ThreadLock((__int64)v20, v9);
  return v10;
}
