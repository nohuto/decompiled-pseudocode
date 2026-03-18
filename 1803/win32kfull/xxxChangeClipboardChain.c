/*
 * XREFs of xxxChangeClipboardChain @ 0x1C0135630
 * Callers:
 *     NtUserChangeClipboardChain @ 0x1C0135550 (NtUserChangeClipboardChain.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00B69B0 (CheckClipboardAccess.c)
 */

__int64 __fastcall xxxChangeClipboardChain(HWND *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 **v4; // rdi
  __int64 **v5; // rsi
  __int64 v6; // rdx
  __int64 *v7; // rbp
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // r9
  HWND v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v18; // [rsp+50h] [rbp-68h]
  __int128 v19; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v20[3]; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v21[3]; // [rsp+88h] [rbp-30h] BYREF

  v2 = (__int64 *)a2;
  v4 = (__int64 **)CheckClipboardAccess((__int64)a1, a2);
  if ( !v4 )
    return 0LL;
  if ( a1[2] != (HWND)gptiCurrent )
    return 0LL;
  v5 = v4 + 9;
  if ( !v4[9] )
    return 0LL;
  if ( v2 && *(__int64 ***)(*(_QWORD *)(v2[2] + 416) + 664LL) != v4 )
    v2 = 0LL;
  PushW32ThreadLock((__int64)v4, v21, UserDereferenceObject);
  ObfReferenceObject(v4);
  v7 = *v5;
  if ( a1 == (HWND *)*v5 )
  {
    *(_QWORD *)&v18 = v4 + 9;
    *((_QWORD *)&v18 + 1) = v2;
    v19 = v18;
    HMAssignmentLock(&v19);
    v9 = 1;
  }
  else
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
    v20[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v20;
    v20[1] = v7;
    _InterlockedAdd((volatile signed __int32 *)v7 + 2, 1u);
    v12 = 0LL;
    if ( v2 )
      v12 = *v2;
    v13 = *a1;
    v14 = *v5;
    _InterlockedAdd(&glSendMessage, 1u);
    v9 = xxxSendTransformableMessageTimeout(v14, 0x30Du, v13, v12, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v16, v15, v17);
  }
  PopAndFreeW32ThreadLock((__int64)v21, v8);
  return v9;
}
