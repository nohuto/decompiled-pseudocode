/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01EA5F8
 * Callers:
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     FindNCHit @ 0x1C0123470 (FindNCHit.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxDrawDragRect @ 0x1C01EABFC (xxxDrawDragRect.c)
 *     _ClientToScreen @ 0x1C0241238 (_ClientToScreen.c)
 */

__int64 __fastcall xxxTrackInitSize(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        struct _MOVESIZEDATA *a5)
{
  int NCHit; // r14d
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned int v11; // esi
  unsigned int v12; // esi
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  __int128 v21; // [rsp+28h] [rbp-18h] BYREF

  v20 = 0LL;
  if ( a2 != 256 && (a2 <= 0x1FF || a2 > 0x202) )
    return 1LL;
  LODWORD(v20) = (__int16)a4;
  HIDWORD(v20) = SHIWORD(a4);
  ClientToScreen(a1, &v20);
  NCHit = FindNCHit((__int64)a1, (unsigned __int16)v20 | (WORD2(v20) << 16));
  v9 = a2 - 256;
  if ( !v9 )
  {
    if ( *((_DWORD *)a5 + 44) == 9 )
      xxxSendMessage((ULONG_PTR)a1);
    if ( a3 > 0x28 || (_DWORD)a3 != 13 && (_DWORD)a3 != 27 && (unsigned int)(a3 - 37) > 3 )
      return 1LL;
    goto LABEL_30;
  }
  v10 = 0LL;
  v11 = v9 - 256;
  if ( !v11 )
  {
    if ( a3 != 1 )
    {
      v21 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
      if ( PtInRect(&v21, v20) && (unsigned int)(NCHit - 10) <= 7 )
        xxxSendMessage((ULONG_PTR)a1);
      else
        zzzSetCursor(*(struct tagCURSOR **)(*(_QWORD *)gasyscur + 4976LL));
      return 1LL;
    }
LABEL_14:
    v14 = *((_DWORD *)a5 + 44);
    if ( !v14 )
    {
      if ( (unsigned int)(NCHit - 10) <= 7 )
      {
        xxxSendMessage((ULONG_PTR)a1);
        *((_DWORD *)a5 + 49) &= ~1u;
        v15 = NCHit - 9;
        v16 = dword_1C02D98E8[v15];
        v17 = dword_1C02D9918[v15];
        *((_DWORD *)a5 + 45) = v17;
        v18 = v16 + v17;
        *((_DWORD *)a5 + 46) = v16;
        *((_DWORD *)a5 + 44) = v18;
        v19 = dword_1C02D9948[v18];
        *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + dword_1C02D9978[v18] + 30) - v20;
        *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + v19 + 30) - HIDWORD(v20);
      }
      return 1LL;
    }
    if ( v14 != 9 || NCHit != 2 )
      return 1LL;
    xxxSendMessage((ULONG_PTR)a1);
    *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + 30) - v20;
    *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + 31) - HIDWORD(v20);
LABEL_30:
    *((_DWORD *)a5 + 49) &= ~1u;
    return 1LL;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( !PtInRect((_DWORD *)a5 + 6, v20) )
      goto LABEL_10;
    goto LABEL_14;
  }
  if ( v12 != 1 )
    return 1LL;
LABEL_10:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, v10, 0);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2LL);
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
  }
  *((_DWORD *)a5 + 49) &= ~1u;
  CCursorClip::ClearClip(gpCursorClip);
  xxxReleaseCapture();
  *((_DWORD *)a5 + 49) |= 8u;
  return 0LL;
}
