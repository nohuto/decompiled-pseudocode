/*
 * XREFs of ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C006ECA0
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C006E8C8 (xxxDCompSpeedHitTest.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C006EEC0 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C01166D8 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C006F000 (IsWindowUnderActiveLockScreen.c)
 *     DCELayerHitTest @ 0x1C00A2B0C (DCELayerHitTest.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01D183C (DCEHitTestWindow.c)
 *     GetWindowFrameRect @ 0x1C01EFBAC (GetWindowFrameRect.c)
 */

__int64 __fastcall DCEIsWindowHit(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  __int64 v3; // rax
  struct tagPOINT v5; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int y; // esi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct tagPOINT v14; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v15[16]; // [rsp+28h] [rbp-30h] BYREF

  v3 = *((_QWORD *)a1 + 5);
  v5 = *a2;
  v14 = *a2;
  if ( (*(_BYTE *)(v3 + 31) & 0x10) == 0
    || (unsigned int)GetWindowCloakState((__int64)a1)
    || (unsigned int)IsWindowUnderActiveLockScreen(a1) )
  {
    return 0LL;
  }
  if ( *((_QWORD *)a1 + 25) )
  {
    GetWindowFrameRect(v8, v15);
    if ( (unsigned int)DCEHitTestWindow(v15, *((_QWORD *)a1 + 25), &v14, a3) )
    {
      v5 = v14;
      goto LABEL_7;
    }
    return 0LL;
  }
  v9 = *((_QWORD *)a1 + 19);
  if ( v9 )
  {
    y = v14.y;
    if ( (unsigned int)GrePtInRegion(v9, (unsigned int)v5.x, (unsigned int)v14.y) )
      goto LABEL_8;
    return 0LL;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*((_QWORD *)a1 + 5) + 88LL, v5) )
    return 0LL;
LABEL_7:
  y = v14.y;
LABEL_8:
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
  if ( (v11 || (v11 = *((_QWORD *)a1 + 19)) != 0) && !(unsigned int)GrePtInRegion(v11, (unsigned int)v5.x, y) )
    return 0LL;
  v12 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v12 + 26) & 8) != 0
    && (*(_DWORD *)(v12 + 232) & 0x20) == 0
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))DCELayerHitTest)(a1, v5) )
  {
    return 0LL;
  }
  if ( *((_QWORD *)a1 + 25) )
    *a2 = v5;
  return 1LL;
}
