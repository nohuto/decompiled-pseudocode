/*
 * XREFs of zzzUpdateCursorImage @ 0x1C004CBD0
 * Callers:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023F14 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C004C0A0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C004CA60 (zzzCalcStartCursorHide.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C0059DAC (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C008A19C (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0109C54 (-zzzShowCursor@@YAH_N@Z.c)
 *     HideAutorunCursor @ 0x1C01CC460 (HideAutorunCursor.c)
 * Callees:
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C004CFE8 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     GreSetPointer @ 0x1C004DA58 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C004DE14 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00E4048 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     SetRITTimer @ 0x1C00F8880 (SetRITTimer.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C0138C00 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C0138DF4 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C0138E70 (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

void zzzUpdateCursorImage()
{
  __int64 v0; // rsi
  unsigned int v1; // r14d
  int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagCURSOR *v7; // r13
  CCursorSizes *v8; // rdi
  CPushLock *v9; // rbx
  int v10; // ebp
  struct tagCURSOR *i; // rdi
  struct tagCURSOR *v12; // r15
  int v13; // eax
  int v14; // r9d
  int v15; // ebp
  __int64 v16; // rcx
  bool v17; // bl
  unsigned int v18; // ecx
  int BufferChainingDpc; // ebx
  unsigned int CurrentCursorSize; // eax
  _DWORD *v21; // rax

  v0 = 0LL;
  v1 = 0;
  v2 = 3;
  if ( !gpqForeground
    || ((v3 = *(_QWORD *)(gpqForeground + 112LL)) != 0
      ? (v4 = *(_QWORD *)(v3 + 16))
      : (v4 = *(_QWORD *)(gpqForeground + 96LL)),
        (unsigned __int8)IsSpatialDelegationEnabledForThread(v4)
     || !v4
     || (v5 = *(_QWORD *)(v4 + 416)) == 0
     || (v6 = *(_QWORD *)(v5 + 824)) == 0
     || (*(_DWORD *)(v6 + 100) & 0x100) == 0
     || *(int *)(gpqForeground + 392LL) >= 0) )
  {
    if ( !gpqCursor )
      return;
    v1 = 4;
    if ( *(int *)(gpqCursor + 392LL) >= 0 )
    {
      v1 = 3;
      v0 = *(_QWORD *)(gpqCursor + 384LL);
      if ( (HIDWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) || gtmridAutorunCursor)
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
  v7 = gpcurLogCurrent;
  if ( (struct tagCURSOR *)v0 != gpcurLogCurrent )
  {
    if ( v0 && (*(_DWORD *)(v0 + 80) & 8) != 0 && *(_QWORD *)(v0 + 112) )
    {
      if ( !*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
      {
        *(_DWORD *)(v0 + 120) = 0;
        v21 = *(_DWORD **)(v0 + 112);
        gdwLastAniTick = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = SetRITTimer(
                                                         *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement,
                                                         100 * *v21 / 6u,
                                                         zzzAnimateCursor,
                                                         1LL);
      }
    }
    else if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
    {
      FindTimer(0, WPP_MAIN_CB.AlignmentRequirement, 4, 1, 0LL);
      *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
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
        goto LABEL_20;
    }
    i = 0LL;
LABEL_20:
    if ( i )
      goto LABEL_21;
  }
  i = (struct tagCURSOR *)v0;
  if ( v0 )
  {
LABEL_21:
    if ( (*((_DWORD *)i + 20) & 8) != 0 )
      i = GetAnimatedCursorFrame(i, *((_DWORD *)i + 30));
  }
  v12 = gpcurPhysCurrent;
  if ( gpcurPhysCurrent != i )
  {
    gpcurPhysCurrent = i;
    if ( i )
    {
      v13 = FCursorShadowed((struct _CURSINFO *)(v0 + 80));
      v15 = v14 | 0x10;
      if ( !v13 )
        v15 = v14;
      if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) == 1 )
        v15 |= 0x20u;
      GreSetPointer((struct tagCURSOR *)((char *)i + 80));
      if ( v7 == (struct tagCURSOR *)v0 )
      {
        if ( *((_DWORD *)i + 19) == *((_DWORD *)v12 + 19) )
        {
LABEL_31:
          v17 = gpcurPhysCurrent != 0LL;
          if ( (gpcurPhysCurrent != 0LL) != (v12 != 0LL) )
          {
            LOBYTE(v16) = gpcurPhysCurrent != 0LL;
            SendVisibilityChanged(v16);
          }
          v18 = 32780;
          if ( v17 )
          {
            if ( !v12 )
              v18 = 32770;
          }
          else
          {
            v18 = 32771;
          }
          if ( !gdwDeferWinEvent )
            v2 = 1;
          xxxWindowEvent(v18, v2);
          return;
        }
        v1 = 5;
      }
      BufferChainingDpc = (int)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
      if ( gProtocolType )
        BufferChainingDpc = 0;
      CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(0LL);
      InputTraceLogging::Cursor::SetCursorImage(i, v0, CurrentCursorSize, v1, v15, BufferChainingDpc);
      goto LABEL_31;
    }
    SetPointerInternal(0LL, v1);
    goto LABEL_31;
  }
}
