/*
 * XREFs of xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01D3000
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C0006400 (TraceChildWindowDpiTelemetry.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01D1110 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 ThreadWin32Thread; // rax
  int v9; // ecx
  int v10; // eax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  struct tagBWL *v15; // r15
  __int64 v16; // rdx
  unsigned __int64 *i; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD v20[3]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-38h] BYREF

  result = IsWindowBeingDestroyed((__int64)a1);
  if ( !(_DWORD)result )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
    v20[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v20;
    v20[1] = a1;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    TraceChildWindowDpiTelemetry((__int64)a1, *((_QWORD *)a1 + 10), 2);
    v9 = *(_DWORD *)(v7 + 1072);
    v10 = *(_DWORD *)(v7 + 280);
    if ( !v9 )
      *(_DWORD *)(v7 + 1076) = v10;
    *(_DWORD *)(v7 + 1080) = v10;
    *(_DWORD *)(v7 + 1072) = v9 + 1;
    *(_DWORD *)(v7 + 280) = a2;
    if ( (a2 & 0xF) == 1 )
      *(_WORD *)(v7 + 284) = (a2 >> 8) & 0x1FF;
    GreIncrementDisplaySettingsUniqueness();
    v11 = *(_QWORD **)(v7 + 672);
    if ( v11 )
    {
      PushW32ThreadLock(*(_QWORD *)(v7 + 672), v22, UserDereferenceObject);
      ObfReferenceObject(v11);
    }
    xxxForceUpdateWindowTreeDpiAwarenessContext(a1, a2, 1);
    if ( v11 )
      v14 = (_QWORD *)v11[2];
    else
      v14 = 0LL;
    while ( v14 )
    {
      v15 = BuildHwndList(*(struct tagWND **)(v14[1] + 24LL), 1, 0LL);
      if ( v15 )
      {
        PushW32ThreadLock((__int64)v14, v21, UserDereferenceObject);
        ObfReferenceObject(v14);
        for ( i = (unsigned __int64 *)((char *)v15 + 32); *i != 1; ++i )
        {
          LOBYTE(v16) = 1;
          v18 = HMValidateHandleNoSecure(*i, v16);
          if ( v18 && *(_QWORD *)(*(_QWORD *)(v18 + 16) + 424LL) == v7 )
            xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)v18, a2, 1);
        }
        FreeHwndList(v15);
        v14 = (_QWORD *)v14[4];
        PopAndFreeW32ThreadLock((__int64)v21, v19);
      }
    }
    if ( v11 )
      PopAndFreeW32ThreadLock((__int64)v22, v12);
    return ThreadUnlock1(v13, v12);
  }
  return result;
}
