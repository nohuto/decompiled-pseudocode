/*
 * XREFs of xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7AC0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C000995C (TraceChildWindowDpiTelemetry.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E5B14 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rbx
  struct tagBWL *v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 *i; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // [rsp+20h] [rbp-30h] BYREF
  struct tagWND *v25; // [rsp+28h] [rbp-28h]
  __int64 v26; // [rsp+30h] [rbp-20h]
  _QWORD v27[3]; // [rsp+38h] [rbp-18h] BYREF

  result = IsWindowBeingDestroyed((__int64)a1);
  if ( !(_DWORD)result )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 416LL);
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7);
    v24 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
    v25 = a1;
    HMLockObject(a1);
    TraceChildWindowDpiTelemetry((__int64)a1, *((_QWORD *)a1 + 13), 2);
    v10 = *(_DWORD *)(v8 + 1064);
    v11 = *(_DWORD *)(v8 + 280);
    if ( !v10 )
      *(_DWORD *)(v8 + 1068) = v11;
    *(_DWORD *)(v8 + 1072) = v11;
    *(_DWORD *)(v8 + 1064) = v10 + 1;
    *(_DWORD *)(v8 + 280) = a2;
    if ( (a2 & 0xF) == 1 )
      *(_WORD *)(v8 + 284) = (a2 >> 8) & 0x1FF;
    GreIncrementDisplaySettingsUniqueness();
    v12 = *(_QWORD *)(v8 + 664);
    xxxForceUpdateWindowTreeDpiAwarenessContext(a1, a2, 1);
    if ( v12 )
      v16 = *(_QWORD **)(v12 + 16);
    else
      v16 = 0LL;
    while ( v16 )
    {
      v17 = (struct tagBWL *)BuildHwndList(*(struct tagWND **)(v16[1] + 24LL));
      if ( v17 )
      {
        memset(v27, 0, sizeof(v27));
        PushW32ThreadLock((__int64)v16, v27, UserDereferenceObject);
        ObfReferenceObject(v16);
        for ( i = (unsigned __int64 *)((char *)v17 + 32); *i != 1; ++i )
        {
          LOBYTE(v18) = 1;
          v21 = HMValidateHandleNoSecure(*i, v18, v19);
          if ( v21 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v21 + 16) + 416LL) == v8 )
              xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)v21, a2, 1);
          }
        }
        FreeHwndList(v17);
        v16 = (_QWORD *)v16[4];
        PopAndFreeW32ThreadLock((__int64)v27, v22, v23);
      }
    }
    return ThreadUnlock1(v14, v13, v15);
  }
  return result;
}
