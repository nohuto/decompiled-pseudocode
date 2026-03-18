/*
 * XREFs of ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02119D4
 * Callers:
 *     xxxDesktopPaintCallback @ 0x1C013CC30 (xxxDesktopPaintCallback.c)
 * Callees:
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreExtTextOutWInternal @ 0x1C007F108 (GreExtTextOutWInternal.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C008CFF8 (GreSetBkMode.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     GreTextInitialized @ 0x1C0165578 (GreTextInitialized.c)
 */

void __fastcall PaintWatermark(HDC a1, const struct tagRECT *a2)
{
  __int64 v3; // rdi
  __int64 DPIServerInfo; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebp
  int v9; // r15d
  __int64 v10; // rcx
  struct _POINTL v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = 0LL;
  if ( GreTextInitialized() && *(_DWORD *)(gpsi + 2164LL) )
  {
    DPIServerInfo = GetDPIServerInfo();
    v6 = *(_QWORD *)(DPIServerInfo + 8);
    if ( v6 )
      v3 = GreSelectFont((__int64)a1, v6);
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    EnterRenderBlock();
    UserSessionSwitchLeaveCrit(v7);
    EnterSharedCrit(0LL, 1LL);
    EnterSharedRenderCrit();
    v8 = GreSetBkMode(a1, 1);
    v9 = GreSetTextColor(a1, 0xFFFFFF);
    if ( (unsigned int)GreGetTextExtentW(a1, gwszSafeModeStr, gSafeModeStrLen, (struct tagSIZE *)&v11, 1) )
    {
      GreExtTextOutWInternal(a1, a2->left, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(a1, a2->right - v11.x, a2->top, 0, 0LL, gwszSafeModeStr, gSafeModeStrLen, 0LL, 0LL, 0);
      GreExtTextOutWInternal(
        a1,
        a2->right - v11.x,
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
    GreSetBkMode(a1, v8);
    GreSetTextColor(a1, v9);
    LeaveRenderBlock();
    LeaveRenderCrit();
    UserSessionSwitchLeaveCrit(v10);
    EnterCrit(0LL, 1LL);
    if ( v3 )
      GreSelectFont((__int64)a1, v3);
  }
}
