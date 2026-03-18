/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0009DA4
 * Callers:
 *     xxxGetClipboardData @ 0x1C01268B4 (xxxGetClipboardData.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     FindClipFormat @ 0x1C00B6DAC (FindClipFormat.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  BOOL v10; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  __int64 ClipFormat; // rax
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-20h]
  _QWORD v19[3]; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+20h] BYREF

  v16 = 0LL;
  v4 = *((_QWORD *)a1 + 10);
  v17 = 0LL;
  v18 = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 8) & 0x40;
    *((_DWORD *)a1 + 8) |= 0x80u;
    v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 416LL), 0LL, 2LL);
    v7 = v6;
    if ( v6 )
      PushW32ThreadLock(v6, v19, ReleaseWakeReference);
    v8 = *((_QWORD *)a1 + 10);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v16 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
    v17 = v8;
    HMLockObject(v8);
    v10 = xxxSendTransformableMessageTimeout(*((_QWORD *)a1 + 10), 66, 30000, (ULONG_PTR)&BugCheckParameter3, 1, 0) != 0;
    ThreadUnlock1();
    if ( v7 )
      PopAndFreeAlwaysW32ThreadLock(v19);
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
