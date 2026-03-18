/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C01FAD90
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C0131690 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkMode @ 0x1C007BDE4 (GreSetBkMode.c)
 *     GreExtTextOutWInternal @ 0x1C009B694 (GreExtTextOutWInternal.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v4; // rdi
  __int64 DPIServerInfo; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebp
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _POINTL v16; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( gbGreTextReady && *(_DWORD *)(gpsi + 2164LL) )
  {
    DPIServerInfo = GetDPIServerInfo((__int64)a1, (__int64)a2);
    if ( *(_QWORD *)(DPIServerInfo + 8) )
      v4 = GreSelectFont(a1);
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
    EnterSharedCrit(0LL, 1LL);
    EnterSharedRenderCrit();
    v10 = GreSetBkMode(a1, 1);
    v11 = GreSetTextColor(a1, 0xFFFFFF);
    if ( (unsigned int)GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, (struct tagSIZE *)&v16, 1) )
    {
      GreExtTextOutWInternal(a1, a2->left, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(a1, a2->right - v16.x, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(
        a1,
        a2->right - v16.x,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0LL,
        0LL,
        0);
      GreExtTextOutWInternal(
        a1,
        a2->left,
        a2->bottom - *(_DWORD *)(DPIServerInfo + 40),
        0,
        0LL,
        gwszSafeModeStr,
        gSafeModeStrLen,
        0LL,
        0LL,
        0);
    }
    GreSetBkMode(a1, v10);
    GreSetTextColor(a1, v11);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
    EnterCrit(0LL, 1LL);
    if ( v4 )
      GreSelectFont(a1);
  }
}
