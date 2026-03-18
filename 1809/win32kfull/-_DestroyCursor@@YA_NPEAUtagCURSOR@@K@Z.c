/*
 * XREFs of ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C006BF08
 * Callers:
 *     DestroyWindowSmIcon @ 0x1C001D2E8 (DestroyWindowSmIcon.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C006BF08 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     NtUserDestroyCursor @ 0x1C006D410 (NtUserDestroyCursor.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B3CA0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00D8EC8 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00DED40 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     DestroyClassSmIcon @ 0x1C011587C (DestroyClassSmIcon.c)
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0125D58 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     DestroyUnlockedCursor @ 0x1C012B8C0 (DestroyUnlockedCursor.c)
 *     ?zzzSetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C015DC24 (-zzzSetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01B8548 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01D699C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C006B480 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C006BF08 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z @ 0x1C006C13C (-RemoveCursorFromCaptionIconCache@@YAHPEAUtagCURSOR@@@Z.c)
 *     ?DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C006C188 (-DestroyEmptyCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C006C1C8 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall _DestroyCursor(struct tagCURSOR *a1, __int64 a2)
{
  int v2; // ebp
  struct tagCURSOR *v3; // r13
  int v4; // r15d
  unsigned int v5; // edi
  char v7; // r14
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct tagCURSOR *v18; // rax
  __int64 v19; // rcx
  struct tagCURSOR *v20; // rax
  struct tagCURSOR *v21; // rcx
  unsigned int v22; // [rsp+58h] [rbp+10h]

  v22 = a2;
  v2 = 0;
  v3 = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
  v4 = 0;
  v5 = a2;
  v7 = 1;
  if ( gbInDestroyHandleTableObjects )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("Leaked cursor");
    DestroyEmptyCursorObject(a1);
    return 1;
  }
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread((__int64)a1, a2);
  v10 = *((_QWORD *)a1 + 3);
  v11 = *((_QWORD *)CurrentLogicalCursorThread + 53);
  if ( (unsigned int)RemoveCursorFromCaptionIconCache(a1) )
    return 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v12 = *((_DWORD *)a1 + 20);
      if ( !v10 )
      {
        v7 = v12 & 1;
        v2 = 1;
        goto LABEL_23;
      }
      if ( (v12 & 0x84) != 0 )
        goto LABEL_13;
      if ( v10 != v11 )
      {
        UserSetLastError(1435LL);
LABEL_21:
        v2 = 1;
        v7 = 0;
        goto LABEL_23;
      }
    }
    else if ( v5 != 2 )
    {
      goto LABEL_20;
    }
    if ( !v10 )
    {
LABEL_13:
      v2 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    v13 = 3LL * (unsigned __int16)*(_DWORD *)a1;
    if ( *(_QWORD *)(gpKernelHandleTable + 8 * v13 + 8) == PsGetProcessWin32Process(gpepCSRSS)
      && PsGetCurrentProcess(v15, v14, v16, v17) == gpepCSRSS )
    {
      FixupGlobalCursor(a1, v11);
    }
    v5 = v22;
  }
LABEL_20:
  if ( !(unsigned int)HMMarkObjectDestroy(a1) )
    goto LABEL_21;
  *((_DWORD *)a1 + 20) |= 0x2000u;
LABEL_23:
  if ( v3 != a1 && (*(_DWORD *)(*((_QWORD *)a1 + 6) + 80LL) & 0x2000) != 0 )
    v4 = 1;
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
    if ( v3 == a1 || v4 )
    {
      v21 = (struct tagCURSOR *)*((_QWORD *)a1 + 5);
      if ( v21 )
      {
        *((_QWORD *)a1 + 5) = 0LL;
        _DestroyCursor(v21, v5);
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
    DestroyEmptyCursorObject(a1);
  }
  return v7;
}
