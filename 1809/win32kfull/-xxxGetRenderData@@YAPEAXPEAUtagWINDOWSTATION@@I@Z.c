/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0006E3C
 * Callers:
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     FindClipFormat @ 0x1C00D9E78 (FindClipFormat.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  BOOL v10; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  __int64 ClipFormat; // rax
  _QWORD v16[3]; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v17[24]; // [rsp+68h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 8) & 0x40;
    *((_DWORD *)a1 + 8) |= 0x80u;
    v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 424LL), 0LL, 2LL);
    v7 = v6;
    if ( v6 )
      PushW32ThreadLock(v6, v17, ReleaseWakeReference);
    v8 = *((_QWORD *)a1 + 10);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v16[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v16;
    v16[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v10 = xxxSendTransformableMessageTimeout(*((_QWORD *)a1 + 10), 66, 30000, (ULONG_PTR)&BugCheckParameter3, 1, 0) != 0;
    ThreadUnlock1();
    if ( v7 )
      PopAndFreeAlwaysW32ThreadLock(v17);
    v11 = *((_DWORD *)a1 + 8);
    v12 = v11 | 0x40;
    v13 = v11 & 0xFFFFFFBF;
    if ( !v5 )
      v12 = v13;
    *((_DWORD *)a1 + 8) = v12 & 0xFFFFFF7F;
    if ( !v10 )
      return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 1LL);
  if ( ClipFormat )
    return *(void **)(ClipFormat + 8);
  else
    return 0LL;
}
