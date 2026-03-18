/*
 * XREFs of ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01D32F4
 * Callers:
 *     xxxGetClipboardData @ 0x1C00B5E78 (xxxGetClipboardData.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     FindClipFormat @ 0x1C00B6948 (FindClipFormat.c)
 */

void *__fastcall xxxGetRenderData(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  HWND v3; // r14
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  BOOL v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  unsigned int v16; // eax
  __int64 ClipFormat; // rax
  _QWORD v19[3]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+8h] BYREF

  v3 = (HWND)a2;
  v4 = *((_QWORD *)a1 + 10);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 8) & 0x40;
    *((_DWORD *)a1 + 8) |= 0x80u;
    v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 416LL), 0LL, 2LL, 0LL);
    v8 = v6;
    if ( v6 )
      PushW32ThreadLock(v6, v20, (__int64)ReleaseWakeReference);
    v9 = *((_QWORD *)a1 + 10);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7);
    v19[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v19;
    v19[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v11 = xxxSendTransformableMessageTimeout(
            *((__int64 **)a1 + 10),
            0x305u,
            v3,
            0LL,
            66,
            30000,
            (__int64 *)&BugCheckParameter3,
            1,
            0) != 0;
    ThreadUnlock1(v13, v12, v14);
    if ( v8 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v20);
    v15 = *((_DWORD *)a1 + 8);
    v16 = v5 ? v15 | 0x40 : v15 & 0xFFFFFFBF;
    *((_DWORD *)a1 + 8) = v16 & 0xFFFFFF7F;
    if ( !v11 )
      return 0LL;
  }
  ClipFormat = FindClipFormat((__int64)a1, (unsigned int)v3, 1);
  if ( ClipFormat )
    return *(void **)(ClipFormat + 8);
  else
    return 0LL;
}
