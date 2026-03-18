/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020010C
 * Callers:
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     bSetDevDragRect @ 0x1C00816E0 (bSetDevDragRect.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     xxxDrawDragRect @ 0x1C0200964 (xxxDrawDragRect.c)
 *     _ClientToScreen @ 0x1C0259FC8 (_ClientToScreen.c)
 */

__int64 __fastcall xxxTrackInitSize(
        __int64 *BugCheckParameter2,
        unsigned int a2,
        unsigned __int64 a3,
        int a4,
        struct _MOVESIZEDATA *a5)
{
  unsigned int v8; // r14d
  int v9; // r15d
  unsigned int v10; // r14d
  unsigned int v11; // r14d
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // [rsp+50h] [rbp-20h] BYREF
  __int128 v22; // [rsp+58h] [rbp-18h] BYREF

  if ( a2 != 256 && (a2 <= 0x1FF || a2 > 0x202) )
    return 1LL;
  LODWORD(v21) = (__int16)a4;
  HIDWORD(v21) = SHIWORD(a4);
  ClientToScreen(BugCheckParameter2, &v21);
  _InterlockedIncrement(&glSendMessage);
  v8 = a2 - 256;
  v9 = xxxSendTransformableMessageTimeout(
         BugCheckParameter2,
         0x84u,
         0LL,
         (struct _LARGE_STRING *)((unsigned __int16)v21 | (WORD2(v21) << 16)),
         0,
         0,
         0LL,
         1u,
         0);
  if ( !v8 )
  {
    if ( *((_DWORD *)a5 + 44) == 9 )
      xxxSendMessage((ULONG_PTR)BugCheckParameter2);
    if ( a3 > 0x28 || (_DWORD)a3 != 13 && (_DWORD)a3 != 27 && (unsigned int)(a3 - 37) > 3 )
      return 1LL;
    goto LABEL_30;
  }
  v10 = v8 - 256;
  if ( !v10 )
  {
    if ( a3 != 1 )
    {
      v22 = *(_OWORD *)(BugCheckParameter2[5] + 88);
      if ( PtInRect(&v22, v21) && (unsigned int)(v9 - 10) <= 7 )
        xxxSendMessage((ULONG_PTR)BugCheckParameter2);
      else
        zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL), v18, v19, v20);
      return 1LL;
    }
LABEL_14:
    v13 = *((_DWORD *)a5 + 44);
    if ( !v13 )
    {
      if ( (unsigned int)(v9 - 10) <= 7 )
      {
        xxxSendMessage((ULONG_PTR)BugCheckParameter2);
        *((_DWORD *)a5 + 49) &= ~1u;
        v14 = dword_1C02EC004[v9];
        v15 = dword_1C02EBFD4[v9];
        *((_DWORD *)a5 + 45) = v14;
        v16 = v15 + v14;
        *((_DWORD *)a5 + 46) = v15;
        *((_DWORD *)a5 + 44) = v16;
        v17 = dword_1C02EC058[v16];
        *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + dword_1C02EC088[v16] + 30) - v21;
        *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + v17 + 30) - HIDWORD(v21);
      }
      return 1LL;
    }
    if ( v13 != 9 || v9 != 2 )
      return 1LL;
    xxxSendMessage((ULONG_PTR)BugCheckParameter2);
    *((_DWORD *)a5 + 42) = *((_DWORD *)a5 + 30) - v21;
    *((_DWORD *)a5 + 43) = *((_DWORD *)a5 + 31) - HIDWORD(v21);
LABEL_30:
    *((_DWORD *)a5 + 49) &= ~1u;
    return 1LL;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( !PtInRect((_DWORD *)a5 + 6, v21) )
      goto LABEL_10;
    goto LABEL_14;
  }
  if ( v11 != 1 )
    return 1LL;
LABEL_10:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2LL);
    *(_DWORD *)(gptiCurrent + 480LL) &= ~0x10u;
  }
  *((_DWORD *)a5 + 49) &= ~1u;
  CCursorClip::ClearClip(gpCursorClip);
  xxxReleaseCapture();
  *((_DWORD *)a5 + 49) |= 8u;
  return 0LL;
}
