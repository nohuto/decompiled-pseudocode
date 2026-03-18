/*
 * XREFs of FreeWindowStation @ 0x1C00B54D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0011D40 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxEmptyClipboard @ 0x1C00B5A04 (xxxEmptyClipboard.c)
 *     xxxCloseClipboard @ 0x1C00B6410 (xxxCloseClipboard.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B6C94 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  struct _RTL_ATOM_TABLE *v5; // rcx
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int128 v17; // [rsp+20h] [rbp-48h]
  _OWORD v18[3]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

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
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v19);
  v5 = *(struct _RTL_ATOM_TABLE **)(v1 + 136);
  if ( v5 )
    RtlDestroyAtomTable(v5);
  *(_QWORD *)(v1 + 48) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  HMAssignmentUnlock(v1 + 80);
  HMAssignmentUnlock(v1 + 72);
  HMAssignmentUnlock(v1 + 64);
  xxxEmptyClipboard((PVOID)v1);
  if ( (*(_DWORD *)(v1 + 32) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v1);
  CloseClipboardToken((struct tagWINDOWSTATION *)v1);
  while ( *(_QWORD *)(v1 + 120) )
  {
    v20 = *(_QWORD *)(v1 + 120);
    *(_QWORD *)(v1 + 120) = *(_QWORD *)(v20 + 224);
    *(_QWORD *)(v20 + 224) = 0LL;
    *(_DWORD *)(*(_QWORD *)(v20 + 40) + 232LL) &= ~1u;
    HMAssignmentUnlock(&v20);
  }
  if ( (*(_DWORD *)(v1 + 32) & 4) == 0 )
  {
    v6 = (_QWORD *)(v1 + 40);
    v7 = *(_QWORD *)(v1 + 40);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 24);
      while ( v7 != v8 )
      {
        v15 = *v6;
        v16 = *(_QWORD *)(*v6 + 16LL);
        HMMarkObjectDestroy(*v6);
        *(_DWORD *)(v15 + 32) |= 0x20000000u;
        *(_QWORD *)&v17 = v1 + 40;
        *((_QWORD *)&v17 + 1) = v16;
        v18[0] = v17;
        HMAssignmentLock(v18);
        v7 = *v6;
      }
      HMMarkObjectDestroy(v7);
      *(_DWORD *)(v7 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v1 + 40);
      gdwHydraHint |= 0x10000u;
    }
  }
  v9 = *(_QWORD *)(v1 + 160);
  if ( v9 )
  {
    Win32FreePool(v9);
    *(_QWORD *)(v1 + 160) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v19 )
    UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return 0LL;
}
