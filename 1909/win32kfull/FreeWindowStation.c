/*
 * XREFs of FreeWindowStation @ 0x1C00FF260
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0021E34 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxCloseClipboard @ 0x1C0058D90 (xxxCloseClipboard.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00FF410 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C00FF5E0 (xxxEmptyClipboard.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _RTL_ATOM_TABLE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int128 v18; // [rsp+20h] [rbp-48h]
  _OWORD v19[3]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+70h] [rbp+8h] BYREF
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

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
    KeSetEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
    ObfDereferenceObject(gpEventSwitchDesktop);
    gpEventSwitchDesktop = 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v20);
  v6 = *(struct _RTL_ATOM_TABLE **)(v1 + 136);
  if ( v6 )
    RtlDestroyAtomTable(v6);
  *(_QWORD *)(v1 + 48) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
  HMAssignmentUnlock(v1 + 80);
  HMAssignmentUnlock(v1 + 72);
  HMAssignmentUnlock(v1 + 64);
  xxxEmptyClipboard((PVOID)v1);
  if ( (*(_DWORD *)(v1 + 32) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v1, v7, v8, v9);
  CloseClipboardToken((struct tagWINDOWSTATION *)v1);
  while ( *(_QWORD *)(v1 + 120) )
  {
    v21 = *(_QWORD *)(v1 + 120);
    *(_QWORD *)(v1 + 120) = *(_QWORD *)(v21 + 240);
    *(_QWORD *)(v21 + 240) = 0LL;
    *(_DWORD *)(*(_QWORD *)(v21 + 40) + 232LL) &= ~1u;
    HMAssignmentUnlock(&v21);
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
        v16 = *v10;
        v17 = *(_QWORD *)(*v10 + 16LL);
        HMMarkObjectDestroy(*v10);
        *(_DWORD *)(v16 + 32) |= 0x20000000u;
        *(_QWORD *)&v18 = v1 + 40;
        *((_QWORD *)&v18 + 1) = v17;
        v19[0] = v18;
        HMAssignmentLock(v19);
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
  if ( !v20 )
    UserSessionSwitchLeaveCrit(v14);
  return 0LL;
}
