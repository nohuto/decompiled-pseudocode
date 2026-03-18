/*
 * XREFs of ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002EA8C
 * Callers:
 *     NtUserDestroyCursor @ 0x1C002DD90 (NtUserDestroyCursor.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002EA8C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     DestroyClassSmIcon @ 0x1C0094408 (DestroyClassSmIcon.c)
 *     DestroyWindowSmIcon @ 0x1C00972D0 (DestroyWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B5D3C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00B8520 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0117394 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0130C74 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C01386B0 (DestroyUnlockedCursor.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015B8AC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01CC38C (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     ?_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C01EC18C (-_SetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 * Callees:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C002E988 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C002EA8C (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0031B80 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0124AC8 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

char __fastcall _DestroyCursor(struct tagCURSOR *a1, unsigned int a2)
{
  int v2; // esi
  int v4; // r14d
  char v5; // bp
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // r15
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagCURSOR *v17; // rax
  struct tagCURSOR *v18; // rax
  __int64 v19; // rcx
  struct tagCURSOR *v20; // rax
  struct tagCURSOR *v21; // rcx
  struct tagCURSOR *v23; // [rsp+60h] [rbp+8h]

  v2 = 0;
  v23 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v4 = 0;
  v5 = 1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v7 = *((_QWORD *)a1 + 3);
  v8 = 0;
  v9 = 0LL;
  v10 = *((_QWORD *)CurrentLogicalCursorThread + 52);
  while ( *(struct tagCURSOR **)(v9 + gcachedCaptions[0]) != a1 || HMAssignmentUnlock(&gcachedCaptions[2 * v8]) )
  {
    ++v8;
    v9 += 16LL;
    if ( v8 >= 5 )
    {
      switch ( a2 )
      {
        case 0u:
          v12 = _HMPkheFromObject(a1);
          if ( *(_QWORD *)(v12 + 8) == PsGetProcessWin32Process(gpepCSRSS)
            && PsGetCurrentProcess(v14, v13, v15, v16) == gpepCSRSS )
          {
            FixupGlobalCursor(a1, v10);
          }
          goto LABEL_19;
        case 1u:
          v11 = *((_DWORD *)a1 + 20);
          if ( v7 )
          {
            if ( (v11 & 0x84) == 0 )
            {
              if ( v7 != v10 )
              {
                UserSetLastError(1435LL);
                goto LABEL_20;
              }
LABEL_8:
              if ( v7 )
                goto LABEL_19;
            }
            v2 = 1;
          }
          else
          {
            v2 = 1;
            v5 = v11 & 1;
          }
          break;
        case 2u:
          goto LABEL_8;
        default:
LABEL_19:
          if ( (unsigned int)HMMarkObjectDestroy(a1) )
          {
            *((_DWORD *)a1 + 20) |= 0x2000u;
          }
          else
          {
LABEL_20:
            v2 = 1;
            v5 = 0;
          }
          break;
      }
      v17 = v23;
      if ( v23 != a1 )
      {
        v17 = v23;
        if ( (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
          v4 = 1;
      }
      if ( v2 )
      {
        if ( v4 )
        {
          v18 = a1;
          do
          {
            *((_QWORD *)v18 + 6) = a1;
            v18 = (struct tagCURSOR *)*((_QWORD *)v18 + 5);
          }
          while ( v18 );
        }
      }
      else
      {
        v19 = *((_QWORD *)a1 + 6);
        if ( gpcurLogCurrent == (struct tagCURSOR *)v19 )
        {
          gpcurLogCurrent = 0LL;
          gpcurPhysCurrent = 0LL;
        }
        if ( v17 == a1 || v4 )
        {
          v21 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
          if ( v21 )
          {
            *((_QWORD *)a1 + 5) = 0LL;
            _DestroyCursor(v21, a2);
          }
        }
        else
        {
          if ( v19 )
          {
            do
            {
              v20 = *(struct tagCURSOR **)(v19 + 40);
              if ( v20 == a1 )
                break;
              v19 = *(_QWORD *)(v19 + 40);
            }
            while ( v20 );
            if ( v19 )
              *(_QWORD *)(v19 + 40) = *((_QWORD *)a1 + 5);
          }
          *((_QWORD *)a1 + 5) = 0LL;
          *((_QWORD *)a1 + 6) = a1;
        }
        CleanupCursorObject(a1);
        if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 )
          UnlinkCursor(a1);
        HMFreeObject(a1);
      }
      return v5;
    }
  }
  return v5;
}
