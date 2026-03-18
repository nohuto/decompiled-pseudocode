/*
 * XREFs of xxxDesktopPaintCallback @ 0x1C0131690
 * Callers:
 *     NtUserPaintMonitor @ 0x1C021AA10 (NtUserPaintMonitor.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     FillRect @ 0x1C007B5C0 (FillRect.c)
 *     GetMonitorWorkRect @ 0x1C00B7058 (GetMonitorWorkRect.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FAD90 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 */

_BOOL8 __fastcall xxxDesktopPaintCallback(__int64 a1, HDC a2, const RECT *a3, __int64 a4)
{
  int v5; // edi
  __int64 StyleWindow; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  BOOL v10; // ebx
  BOOL v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rcx
  struct tagRECT v35; // [rsp+30h] [rbp-28h] BYREF
  __m128i v36; // [rsp+40h] [rbp-18h] BYREF

  v5 = 0;
  StyleWindow = 0LL;
  if ( *(_QWORD *)(a4 + 8) )
    a2 = *(HDC *)(a4 + 8);
  v35 = (struct tagRECT)*GetMonitorWorkRect(&v36, a1);
  if ( a2 )
  {
    GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
    v8 = LookupDC(a2, 0LL);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      if ( v9 && (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) == 0x29D && *(PVOID *)(v9 + 24) == grpdeskLogon )
        v5 = 1;
      if ( (*(_DWORD *)(v8 + 64) & 0x4000) != 0 )
        StyleWindow = GetStyleWindow(v9, 2848);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( StyleWindow )
    {
      v21 = *(_QWORD *)(StyleWindow + 40);
      v22 = *(_DWORD *)(v21 + 88);
      v23 = -*(_DWORD *)(v21 + 92);
      v35.bottom -= *(_DWORD *)(v21 + 92);
      v24 = -v22;
      v35.left += v24;
      v35.right += v24;
      v35.top += v23;
    }
  }
  if ( !*(_DWORD *)(gpsi + 2164LL) && !v5 )
  {
    if ( gbDesktopLocked )
    {
      v10 = 0;
    }
    else
    {
      if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      EnterRenderBlock();
      UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
      EnterSharedCrit(0LL, 1LL);
      EnterSharedRenderCrit();
      v10 = FillRect(a2, a3, *(HBRUSH *)(gpsi + 4704LL)) != 0;
      LeaveRenderBlock();
      LeaveRenderCrit();
      UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
      EnterCrit(0LL, 1LL);
    }
LABEL_17:
    if ( *(_DWORD *)(gpsi + 2164LL) )
    {
      v33 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( v33 )
        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 8) + 168LL);
      else
        v34 = 0LL;
      v11 = v34 == 0;
    }
    else
    {
      v11 = 0;
    }
    if ( v11 )
      PaintWatermark(a2, &v35);
    return v10;
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v10 = FillRect(a2, a3, ghbrBlack) != 0;
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  EnterCrit(0LL, 1LL);
  if ( !v5 )
    goto LABEL_17;
  return v10;
}
