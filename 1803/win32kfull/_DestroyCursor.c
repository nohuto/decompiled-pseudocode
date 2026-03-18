/*
 * XREFs of _DestroyCursor @ 0x1C0015010
 * Callers:
 *     xxxEnsureMonitorCursors @ 0x1C0008198 (xxxEnsureMonitorCursors.c)
 *     NtUserDestroyCursor @ 0x1C0014430 (NtUserDestroyCursor.c)
 *     _DestroyCursor @ 0x1C0015010 (_DestroyCursor.c)
 *     DestroyWindowSmIcon @ 0x1C006AE84 (DestroyWindowSmIcon.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C006B19C (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C006B2C0 (zzzSetSystemImage.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C006C084 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     DestroyClassSmIcon @ 0x1C00F7850 (DestroyClassSmIcon.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C01058DC (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C0108880 (DestroyUnlockedCursor.c)
 *     _DuplicateCursor @ 0x1C0109EE8 (_DuplicateCursor.c)
 *     _SetCursorContents @ 0x1C01B4124 (_SetCursorContents.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0015010 (_DestroyCursor.c)
 *     _GetCurrentLogicalCursorThread @ 0x1C0015808 (_GetCurrentLogicalCursorThread.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00175DC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C00FA898 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroyCursor(struct tagCURSOR *a1, int a2)
{
  int v3; // ebp
  int v4; // edi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct tagCURSOR *v9; // rax
  struct tagCURSOR *v10; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagCURSOR *v15; // rax
  __int64 v16; // rcx
  struct tagCURSOR *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  struct tagCURSOR *v20; // [rsp+30h] [rbp-38h]
  __int64 v22; // [rsp+88h] [rbp+20h]

  v20 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v19 = *(_QWORD *)(GetCurrentLogicalCursorThread(a1) + 416);
  v18 = *((_QWORD *)a1 + 3);
  v6 = 0LL;
  v22 = 0LL;
  do
  {
    if ( *(struct tagCURSOR **)(v6 + gcachedCaptions[0]) == a1 )
    {
      if ( !HMAssignmentUnlock(&gcachedCaptions[2 * v5]) )
        return 1LL;
      v6 = v22;
    }
    v6 += 16LL;
    ++v5;
    v22 = v6;
  }
  while ( v5 < 5 );
  if ( !a2 )
  {
    v12 = 3LL * (unsigned __int16)*(_DWORD *)a1;
    if ( *(_QWORD *)(gpKernelHandleTable + 8 * v12 + 8) == PsGetProcessWin32Process(gpepCSRSS)
      && PsGetCurrentProcess(v14, v13) == gpepCSRSS )
    {
      FixupGlobalCursor(a1, v19);
    }
    v4 = 0;
    goto LABEL_10;
  }
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
    {
      v7 = v18;
      goto LABEL_9;
    }
LABEL_10:
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      v8 = 1;
      *((_DWORD *)a1 + 20) |= 0x2000u;
      goto LABEL_12;
    }
    goto LABEL_35;
  }
  v7 = v18;
  if ( !v18 )
  {
    v3 = 1;
    v8 = *((_DWORD *)a1 + 20) & 1;
    goto LABEL_12;
  }
  if ( (*((_DWORD *)a1 + 20) & 0x84) != 0 )
    goto LABEL_33;
  if ( v18 == v19 )
  {
LABEL_9:
    if ( v7 )
      goto LABEL_10;
LABEL_33:
    v8 = 1;
    v3 = 1;
    goto LABEL_12;
  }
  UserSetLastError(1435LL);
LABEL_35:
  v8 = 0;
  v3 = 1;
LABEL_12:
  v9 = v20;
  if ( v20 != a1 )
  {
    v9 = v20;
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
      v4 = 1;
  }
  if ( v3 )
  {
    if ( v4 )
    {
      v15 = a1;
      do
      {
        *((_QWORD *)v15 + 6) = a1;
        v15 = (struct tagCURSOR *)*((_QWORD *)v15 + 5);
      }
      while ( v15 );
    }
  }
  else
  {
    if ( v9 == a1 || v4 )
    {
      v10 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
      if ( v10 )
      {
        *((_QWORD *)a1 + 5) = 0LL;
        DestroyCursor(v10);
      }
    }
    else
    {
      v16 = *((_QWORD *)a1 + 6);
      if ( v16 )
      {
        do
        {
          v17 = *(struct tagCURSOR **)(v16 + 40);
          if ( v17 == a1 )
            break;
          v16 = *(_QWORD *)(v16 + 40);
        }
        while ( v17 );
        if ( v16 )
          *(_QWORD *)(v16 + 40) = *((_QWORD *)a1 + 5);
      }
      *((_QWORD *)a1 + 5) = 0LL;
      *((_QWORD *)a1 + 6) = a1;
    }
    if ( a1 == (struct tagCURSOR *)gpcurLogCurrent )
      gpcurLogCurrent = 0LL;
    if ( a1 == (struct tagCURSOR *)gpcurPhysCurrent )
      gpcurPhysCurrent = 0LL;
    CleanupCursorObject(a1);
    if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 )
      UnlinkCursor(a1);
    HMFreeObject(a1);
  }
  return v8;
}
