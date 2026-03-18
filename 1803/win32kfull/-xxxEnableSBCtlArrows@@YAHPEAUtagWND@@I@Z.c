/*
 * XREFs of ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0200224
 * Callers:
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01A2874 (safe_cast_fnid_to_PSBWND.c)
 *     xxxInvalidateRect @ 0x1C01E3E10 (xxxInvalidateRect.c)
 */

__int64 __fastcall xxxEnableSBCtlArrows(struct tagWND *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // r9d
  __int64 v5; // rsi
  int v7; // edi
  unsigned int v8; // ebx
  struct tagWND *v9; // rcx

  v2 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v5 = v2;
  if ( !v2 )
    return 0LL;
  v7 = *(_DWORD *)(v2 + 12);
  v8 = v4 ? v4 | v7 : v7 & 0xFFFFFFFC;
  *(_DWORD *)(v2 + 12) = v8;
  if ( v7 == v8 )
    return 0LL;
  if ( (unsigned int)IsVisible(v3) )
  {
    xxxInvalidateRect(v9, 0LL, 1);
    v8 = *(_DWORD *)(v5 + 12);
  }
  if ( (((unsigned __int8)v7 ^ (unsigned __int8)v8) & 1) != 0 )
    xxxWindowEvent(0x800Au, (__int64)a1, -4, 1, 1);
  if ( (((unsigned __int8)v7 ^ (unsigned __int8)v8) & 2) != 0 )
    xxxWindowEvent(0x800Au, (__int64)a1, -4, 5, 1);
  return 1LL;
}
