/*
 * XREFs of zzzUpdateCursorImage @ 0x1C0017DF0
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00173F0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C0017CF0 (zzzCalcStartCursorHide.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00A2CB8 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C00D92A4 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C012C4E4 (-zzzShowCursor@@YAH_N@Z.c)
 *     HideAutorunCursor @ 0x1C01B8790 (HideAutorunCursor.c)
 * Callees:
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C0017CAC (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0018228 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     GreSetPointer @ 0x1C0018BB8 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0018F24 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@IIUtagSIZE@@PEAUtagQ@@W4CursorImageReason@12@KK@Z @ 0x1C00D86D8 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@IIUtagSIZE@@PEAUtagQ@@W4CursorImageR.c)
 *     ?GetSizeForCursorOrFrame@@YA?AUtagSIZE@@PEAUtagCURSOR@@@Z @ 0x1C00DEDF8 (-GetSizeForCursorOrFrame@@YA-AUtagSIZE@@PEAUtagCURSOR@@@Z.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0100AFC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     SetRITTimer @ 0x1C01153C0 (SetRITTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

void zzzUpdateCursorImage()
{
  __int64 v0; // rbp
  int v1; // r15d
  unsigned int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rax
  CCursorSizes *v8; // rdi
  CPushLock *v9; // rbx
  int v10; // edi
  struct tagCURSOR *i; // rsi
  struct tagCURSOR *v12; // r13
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r9d
  unsigned int v16; // r14d
  int v17; // edi
  struct tagSIZE SizeForCursorOrFrame; // rbx
  CCursorSizes *v19; // rcx
  unsigned int CurrentCursorSize; // eax
  bool v21; // bl
  unsigned int v22; // ecx
  struct tagCURSOR *v23; // [rsp+70h] [rbp+8h]

  v0 = 0LL;
  v1 = 0;
  v2 = 3;
  if ( !gpqForeground
    || ((v3 = *(_QWORD *)(gpqForeground + 104LL)) == 0
      ? (v4 = *(_QWORD *)(gpqForeground + 88LL))
      : (v4 = *(_QWORD *)(v3 + 16)),
        (unsigned __int8)IsSpatialDelegationEnabledForThread(v4)
     || !v4
     || (v5 = *(_QWORD *)(v4 + 424)) == 0
     || (v6 = *(_QWORD *)(v5 + 832)) == 0
     || (*(_DWORD *)(v6 + 100) & 0x100) == 0
     || *(int *)(gpqForeground + 384LL) >= 0) )
  {
    if ( !gpqCursor )
      return;
    v1 = 4;
    if ( *(int *)(gpqCursor + 384LL) >= 0 )
    {
      v1 = 3;
      v0 = *(_QWORD *)(gpqCursor + 376LL);
      if ( (gtimeStartCursorHide || gtmridAutorunCursor)
        && (v0 == gasyscur[1] || v0 == *(_QWORD *)(gasyscur[0] + 8840LL) || v0 == *(_QWORD *)(gasyscur[0] + 6080LL)) )
      {
        if ( gtmridAutorunCursor )
        {
          v0 = *(_QWORD *)(gasyscur[0] + 8840LL);
          v1 = 1;
        }
        else
        {
          v0 = *(_QWORD *)(gasyscur[0] + 6080LL);
          v1 = 2;
        }
      }
    }
  }
  v23 = gpcurLogCurrent;
  if ( (struct tagCURSOR *)v0 != gpcurLogCurrent )
  {
    if ( v0 && (*(_DWORD *)(v0 + 80) & 8) != 0 && *(_QWORD *)(v0 + 112) )
    {
      if ( !gtmridAniCursor )
      {
        *(_DWORD *)(v0 + 120) = 0;
        v7 = *(_DWORD **)(v0 + 112);
        gdwLastAniTick = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        gtmridAniCursor = SetRITTimer(gtmridAniCursor, 100 * *v7 / 6u, zzzAnimateCursor, 1LL);
      }
    }
    else if ( gtmridAniCursor )
    {
      FindTimer(0, gtmridAniCursor, 4, 1, 0LL);
      gtmridAniCursor = 0LL;
    }
    EtwTraceWaitCursor(v0, gpcurLogCurrent);
    gpcurLogCurrent = (struct tagCURSOR *)v0;
  }
  if ( v0 )
  {
    v8 = gpCursorSizes;
    v9 = (CCursorSizes *)((char *)gpCursorSizes + 64);
    if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v9 + 8, 0LL);
      if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v9)(v9) )
        CPushLock::ReleaseLock(v9);
    }
    v10 = *(_DWORD *)v8;
    CPushLock::ReleaseLock(v9);
    for ( i = *(struct tagCURSOR **)(v0 + 48); i; i = (struct tagCURSOR *)*((_QWORD *)i + 5) )
    {
      if ( *((_DWORD *)i + 19) == v10 )
        goto LABEL_39;
    }
    i = 0LL;
LABEL_39:
    if ( i )
      goto LABEL_41;
  }
  i = (struct tagCURSOR *)v0;
  if ( v0 )
  {
LABEL_41:
    if ( (*((_DWORD *)i + 20) & 8) != 0 )
      i = GetAnimatedCursorFrame(i, *((_DWORD *)i + 30));
  }
  v12 = gpcurPhysCurrent;
  if ( gpcurPhysCurrent != i )
  {
    gpcurPhysCurrent = i;
    if ( !i )
    {
      InputTraceLogging::Cursor::SetCursorImage(0LL, 0LL, 0LL, 0LL, 0LL, v1, 0, 0);
      SetPointer(0LL);
LABEL_56:
      v21 = gpcurPhysCurrent != 0LL;
      if ( (gpcurPhysCurrent != 0LL) != (v12 != 0LL) )
      {
        LOBYTE(v13) = gpcurPhysCurrent != 0LL;
        SendVisibilityChanged(v13);
      }
      v22 = 32780;
      if ( v21 )
      {
        if ( !v12 )
          v22 = 32770;
      }
      else
      {
        v22 = 32771;
      }
      if ( !gdwDeferWinEvent )
        v2 = 1;
      xxxWindowEvent(v22, v2);
      return;
    }
    v14 = FCursorShadowed((struct _CURSINFO *)(v0 + 80));
    v16 = v15 | 0x10;
    if ( !v14 )
      v16 = v15;
    if ( gbForceSoftwareCursor == 1 )
      v16 |= 0x20u;
    GreSetPointer((struct tagCURSOR *)((char *)i + 80), v16);
    if ( v23 == (struct tagCURSOR *)v0 )
    {
      if ( *((_DWORD *)i + 19) == *((_DWORD *)v12 + 19) )
        goto LABEL_56;
      v1 = 5;
    }
    v17 = gMouseTrails;
    if ( gProtocolType )
      v17 = 0;
    SizeForCursorOrFrame = GetSizeForCursorOrFrame(i);
    CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(v19);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD))InputTraceLogging::Cursor::SetCursorImage)(
      v0,
      *((unsigned int *)i + 19),
      CurrentCursorSize,
      SizeForCursorOrFrame,
      gpqCursor,
      v1,
      v16,
      v17);
    goto LABEL_56;
  }
}
