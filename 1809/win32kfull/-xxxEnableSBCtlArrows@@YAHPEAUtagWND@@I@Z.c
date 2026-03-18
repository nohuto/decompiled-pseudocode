/*
 * XREFs of ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0228C4C
 * Callers:
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     IsVisible @ 0x1C0079A24 (IsVisible.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01C424C (safe_cast_fnid_to_PSBWND.c)
 *     xxxInvalidateRect @ 0x1C0209CE0 (xxxInvalidateRect.c)
 */

__int64 __fastcall xxxEnableSBCtlArrows(struct tagWND *a1)
{
  __int64 v2; // rax
  int v3; // r9d
  __int64 v4; // rsi
  int v5; // ebp
  unsigned int v6; // ebx
  struct tagWND *v7; // rcx

  v2 = safe_cast_fnid_to_PSBWND((__int64)a1);
  v4 = v2;
  if ( !v2 )
    return 0LL;
  v5 = *(_DWORD *)(v2 + 12);
  v6 = v5 & 0xFFFFFFFC;
  if ( v3 )
    v6 = v5 | v3;
  *(_DWORD *)(v2 + 12) = v6;
  if ( v5 == v6 )
    return 0LL;
  if ( (unsigned int)IsVisible((__int64)a1) )
  {
    xxxInvalidateRect(v7, 0LL, 1);
    v6 = *(_DWORD *)(v4 + 12);
  }
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)v6) & 1) != 0 )
    xxxWindowEvent(0x800Au, (__int64)a1, -4, 1, 1u);
  if ( (((unsigned __int8)v5 ^ (unsigned __int8)v6) & 2) != 0 )
    xxxWindowEvent(0x800Au, (__int64)a1, -4, 5, 1u);
  return 1LL;
}
