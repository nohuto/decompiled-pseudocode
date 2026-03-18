/*
 * XREFs of FreeWindowStation @ 0x1C00E03A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxCloseClipboard @ 0x1C00D9B50 (xxxCloseClipboard.c)
 *     xxxEmptyClipboard @ 0x1C00DE988 (xxxEmptyClipboard.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00E0358 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  struct _RTL_ATOM_TABLE *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int128 v21; // [rsp+20h] [rbp-48h]
  _OWORD v22[3]; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  v1 = *a1;
  *(_DWORD *)(v1 + 32) |= 0x10u;
  v2 = *(_QWORD *)(v1 + 176);
  v3 = *(_DWORD *)(v1 + 32);
  if ( v2 )
  {
    Win32FreePool(v2);
    v3 = *(_DWORD *)(v1 + 32);
    *(_QWORD *)(v1 + 176) = 0LL;
    *(_DWORD *)(v1 + 168) = 0;
  }
  if ( (v3 & 4) == 0 && gpEventSwitchDesktop )
  {
    KeSetEvent(gpEventSwitchDesktop, 1, 0);
    ObfDereferenceObject(gpEventSwitchDesktop);
    gpEventSwitchDesktop = 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v23);
  v5 = *(struct _RTL_ATOM_TABLE **)(v1 + 136);
  if ( v5 )
    RtlDestroyAtomTable(v5);
  *(_QWORD *)(v1 + 48) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  HMAssignmentUnlock(v1 + 80);
  HMAssignmentUnlock(v1 + 72);
  HMAssignmentUnlock(v1 + 64);
  xxxEmptyClipboard((struct tagCLIP **)v1, v6);
  if ( (*(_DWORD *)(v1 + 32) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v1, v7, v8, v9);
  CloseClipboardToken((struct tagWINDOWSTATION *)v1);
  while ( *(_QWORD *)(v1 + 120) )
  {
    v24 = *(_QWORD *)(v1 + 120);
    *(_QWORD *)(v1 + 120) = *(_QWORD *)(v24 + 224);
    *(_QWORD *)(v24 + 224) = 0LL;
    *(_DWORD *)(*(_QWORD *)(v24 + 40) + 232LL) &= ~1u;
    HMAssignmentUnlock(&v24);
  }
  if ( (*(_DWORD *)(v1 + 32) & 4) == 0 )
  {
    v10 = (_QWORD *)(v1 + 40);
    v11 = *(_QWORD *)(v1 + 40);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 24);
      while ( v11 != v12 )
      {
        v19 = *v10;
        v20 = *(_QWORD *)(*v10 + 16LL);
        HMMarkObjectDestroy(*v10);
        *(_DWORD *)(v19 + 32) |= 0x20000000u;
        *(_QWORD *)&v21 = v1 + 40;
        *((_QWORD *)&v21 + 1) = v20;
        v22[0] = v21;
        HMAssignmentLock(v22);
        v11 = *v10;
      }
      HMMarkObjectDestroy(v11);
      *(_DWORD *)(v11 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v1 + 40);
      gdwHydraHint |= 0x10000u;
    }
  }
  v13 = *(_QWORD *)(v1 + 160);
  if ( v13 )
  {
    Win32FreePool(v13);
    *(_QWORD *)(v1 + 160) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v23 )
    UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return 0LL;
}
