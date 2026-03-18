/*
 * XREFs of CreateSprite @ 0x1C0048AE8
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 * Callees:
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C002AF98 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     GreCreateSprite @ 0x1C0048C28 (GreCreateSprite.c)
 *     IsWindowContentProtected @ 0x1C0049068 (IsWindowContentProtected.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall CreateSprite(HDEV a1, __int64 a2, struct tagRECT *a3, __int64 *a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ebp
  int v12; // r8d
  BOOL v13; // r15d
  __int64 v14; // rcx
  BOOL v15; // edi
  int v16; // ebx
  int v17; // eax
  __int64 Sprite; // rdx
  __int64 result; // rax
  _BYTE v20[144]; // [rsp+60h] [rbp-E8h] BYREF

  memset(v20, 0, 0x88uLL);
  InitializeMiniWinInfo((struct tagWND *const)a2, (struct tagMINIWINDOWINFO *)v20, v8, v9);
  v10 = *(_QWORD *)(a2 + 40);
  v11 = *(_BYTE *)(v10 + 31) & 0x10;
  v12 = *(_WORD *)(v10 + 42) & 0x3FFF;
  v13 = v12 == 669;
  v14 = *(_QWORD *)(v10 + 88) - *(_QWORD *)(v10 + 104);
  if ( !v14 )
    v14 = *(_QWORD *)(v10 + 96) - *(_QWORD *)(v10 + 112);
  v15 = !v14 || v12 == 669;
  v16 = IsWindowContentProtected(a2);
  v17 = IsWindowDesktopComposed(a2);
  Sprite = GreCreateSprite(
             a1,
             *(HWND *)a2,
             a3,
             (struct tagMINIWINDOWINFO *)v20,
             *(_DWORD *)(a2 + 256),
             v17,
             v11,
             v13,
             v15,
             v16,
             0LL);
  result = Sprite == 0 ? 0x803F0002 : 0;
  if ( a4 )
    *a4 = Sprite;
  return result;
}
