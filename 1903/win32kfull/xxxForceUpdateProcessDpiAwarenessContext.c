/*
 * XREFs of xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7C40
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C000995C (TraceChildWindowDpiTelemetry.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5C94 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 ThreadWin32Thread; // rax
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rbx
  __int64 v18; // r9
  struct tagBWL *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 *i; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // [rsp+20h] [rbp-30h] BYREF
  struct tagWND *v29; // [rsp+28h] [rbp-28h]
  __int64 v30; // [rsp+30h] [rbp-20h]
  _QWORD v31[3]; // [rsp+38h] [rbp-18h] BYREF

  result = IsWindowBeingDestroyed((__int64)a1);
  if ( !(_DWORD)result )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 416LL);
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7, v8);
    v28 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v28;
    v29 = a1;
    HMLockObject(a1);
    TraceChildWindowDpiTelemetry((__int64)a1, *((_QWORD *)a1 + 13), 2);
    v11 = *(_DWORD *)(v9 + 1064);
    v12 = *(_DWORD *)(v9 + 280);
    if ( !v11 )
      *(_DWORD *)(v9 + 1068) = v12;
    *(_DWORD *)(v9 + 1072) = v12;
    *(_DWORD *)(v9 + 1064) = v11 + 1;
    *(_DWORD *)(v9 + 280) = a2;
    if ( (a2 & 0xF) == 1 )
      *(_WORD *)(v9 + 284) = (a2 >> 8) & 0x1FF;
    GreIncrementDisplaySettingsUniqueness();
    v13 = *(_QWORD *)(v9 + 664);
    xxxForceUpdateWindowTreeDpiAwarenessContext(a1, a2, 1);
    if ( v13 )
      v17 = *(_QWORD **)(v13 + 16);
    else
      v17 = 0LL;
    while ( v17 )
    {
      v19 = (struct tagBWL *)BuildHwndList(*(struct tagWND **)(v17[1] + 24LL));
      if ( v19 )
      {
        memset(v31, 0, sizeof(v31));
        PushW32ThreadLock((__int64)v17, v31, UserDereferenceObject, v18);
        ObfReferenceObject(v17);
        for ( i = (unsigned __int64 *)((char *)v19 + 32); *i != 1; ++i )
        {
          LOBYTE(v20) = 1;
          v24 = HMValidateHandleNoSecure(*i, v20, v21, v22);
          if ( v24 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v24 + 16) + 416LL) == v9 )
              xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)v24, a2, 1);
          }
        }
        FreeHwndList(v19);
        v17 = (_QWORD *)v17[4];
        PopAndFreeW32ThreadLock((__int64)v31, v25, v26, v27);
      }
    }
    return ThreadUnlock1(v15, v14, v16);
  }
  return result;
}
