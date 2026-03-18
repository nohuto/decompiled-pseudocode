/*
 * XREFs of FreeWindowStation @ 0x1C0125370
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001A014 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxCloseClipboard @ 0x1C00B78A0 (xxxCloseClipboard.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0125520 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C01256F0 (xxxEmptyClipboard.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _RTL_ATOM_TABLE *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int128 v19; // [rsp+20h] [rbp-48h]
  _OWORD v20[3]; // [rsp+30h] [rbp-38h] BYREF
  int v21; // [rsp+70h] [rbp+8h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

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
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v21);
  v7 = *(struct _RTL_ATOM_TABLE **)(v1 + 136);
  if ( v7 )
    RtlDestroyAtomTable(v7);
  *(_QWORD *)(v1 + 48) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  HMAssignmentUnlock(v1 + 80);
  HMAssignmentUnlock(v1 + 72);
  HMAssignmentUnlock(v1 + 64);
  xxxEmptyClipboard((PVOID)v1);
  if ( (*(_DWORD *)(v1 + 32) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v1, v8, v9, v10);
  CloseClipboardToken((struct tagWINDOWSTATION *)v1);
  while ( *(_QWORD *)(v1 + 120) )
  {
    v22 = *(_QWORD *)(v1 + 120);
    *(_QWORD *)(v1 + 120) = *(_QWORD *)(v22 + 240);
    *(_QWORD *)(v22 + 240) = 0LL;
    *(_DWORD *)(*(_QWORD *)(v22 + 40) + 232LL) &= ~1u;
    HMAssignmentUnlock(&v22);
  }
  if ( (*(_DWORD *)(v1 + 32) & 4) == 0 )
  {
    v11 = (_QWORD *)(v1 + 40);
    v12 = *(_QWORD *)(v1 + 40);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 24);
      while ( v12 != v13 )
      {
        v17 = *v11;
        v18 = *(_QWORD *)(*v11 + 16LL);
        HMMarkObjectDestroy(*v11);
        *(_DWORD *)(v17 + 32) |= 0x20000000u;
        *(_QWORD *)&v19 = v1 + 40;
        *((_QWORD *)&v19 + 1) = v18;
        v20[0] = v19;
        HMAssignmentLock(v20);
        v12 = *v11;
      }
      HMMarkObjectDestroy(v12);
      *(_DWORD *)(v12 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v1 + 40);
      gdwHydraHint |= 0x10000u;
    }
  }
  v14 = *(_QWORD *)(v1 + 160);
  if ( v14 )
  {
    Win32FreePool(v14);
    *(_QWORD *)(v1 + 160) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v21 )
    UserSessionSwitchLeaveCrit(v15);
  return 0LL;
}
