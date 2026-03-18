/*
 * XREFs of xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01B022C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00069CC (TraceChildWindowDpiTelemetry.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01AE04C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, __int64 a2)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rbx
  struct tagBWL *v12; // r14
  __int64 v13; // rdx
  unsigned __int64 *i; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD v18[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-20h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v18[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v18;
  v18[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  TraceChildWindowDpiTelemetry((__int64)a1, *((_QWORD *)a1 + 10), 2);
  v6 = *(_DWORD *)(v4 + 1064);
  v7 = *(_DWORD *)(v4 + 280);
  if ( !v6 )
    *(_DWORD *)(v4 + 1068) = v7;
  *(_DWORD *)(v4 + 1072) = v7;
  *(_DWORD *)(v4 + 1064) = v6 + 1;
  *(_DWORD *)(v4 + 280) = v3;
  if ( (v3 & 0xF) == 1 )
    *(_WORD *)(v4 + 284) = (v3 >> 8) & 0x1FF;
  GreIncrementDisplaySettingsUniqueness();
  xxxForceUpdateWindowTreeDpiAwarenessContext(a1, v3, 1);
  v11 = *(_QWORD **)(v4 + 664);
  if ( v11 )
    v11 = (_QWORD *)v11[2];
  while ( v11 )
  {
    v12 = BuildHwndList(*(_QWORD **)(v11[1] + 24LL), 1, 0LL);
    if ( v12 )
    {
      PushW32ThreadLock((__int64)v11, v19, UserDereferenceObject);
      ObfReferenceObject(v11);
      for ( i = (unsigned __int64 *)((char *)v12 + 32); *i != 1; ++i )
      {
        LOBYTE(v13) = 1;
        v15 = HMValidateHandleNoSecure(*i, v13);
        if ( v15 && *(_QWORD *)(*(_QWORD *)(v15 + 16) + 416LL) == v4 )
          xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)v15, v3, 1);
      }
      FreeHwndList(v12);
      v11 = (_QWORD *)v11[4];
      PopAndFreeW32ThreadLock((__int64)v19, v16);
    }
  }
  return ThreadUnlock1(v9, v8, v10);
}
