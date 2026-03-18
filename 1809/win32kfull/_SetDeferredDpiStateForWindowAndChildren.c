/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x1C00732C0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C006F8AC (xxxNotifyMonitorChanged.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C00B8040 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     NtUserDeferWindowDpiChanges @ 0x1C012F250 (NtUserDeferWindowDpiChanges.c)
 *     ?xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z @ 0x1C01BFE44 (-xxxCloneWindowPosAndArrangement@@YAXPEAUtagWND@@AEBUWINDOWPOSANDCHECKPOINT@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetDeferredDpiStateForWindowAndChildren(struct tagWND *a1, int a2, int a3)
{
  int v3; // ebx
  __int64 v5; // rcx
  __int16 v8; // r12
  struct tagBWL *v9; // rax
  __int64 v10; // rdx
  struct tagBWL *v11; // r13
  unsigned __int64 *i; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  _DWORD *v19; // rcx

  v3 = 0;
  v5 = *((_QWORD *)a1 + 5);
  if ( a2 == (*(_WORD *)(v5 + 286) != 0) || (*((_DWORD *)a1 + 72) & 1) != 0 && !a3 )
    return 0LL;
  v8 = a2 ? *(_WORD *)(v5 + 284) : 0;
  v9 = BuildHwndList(a1, 1, 0LL);
  v11 = v9;
  if ( !v9 )
    return 0LL;
  for ( i = (unsigned __int64 *)((char *)v9 + 32); *i != 1; ++i )
  {
    LOBYTE(v10) = 1;
    v13 = HMValidateHandleNoSecure(*i, v10);
    v15 = v13;
    if ( v13 && ((*(_DWORD *)(v13 + 288) & 1) == 0 || a3 && !a2) )
    {
      *(_WORD *)(*(_QWORD *)(v13 + 40) + 286LL) = v8;
      v16 = *(_DWORD **)(v13 + 280);
      if ( a2 )
      {
        if ( v16 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
        v17 = (_DWORD *)*((_QWORD *)a1 + 34);
        *(_QWORD *)(v15 + 280) = v17;
        ++*v17;
      }
      else if ( v16 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v14), (v16 = *(_DWORD **)(v15 + 280)) != 0LL) )
      {
        --*v16;
        v19 = *(_DWORD **)(v15 + 280);
        if ( !*v19 )
          Win32FreePool(v19);
        *(_QWORD *)(v15 + 280) = 0LL;
      }
    }
  }
  if ( a3 && a2 )
    v3 = 1;
  *((_DWORD *)a1 + 72) = v3 | *((_DWORD *)a1 + 72) & 0xFFFFFFFE;
  FreeHwndList(v11);
  return 1LL;
}
