/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01C4E74
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxMinMaximize @ 0x1C0065638 (xxxMinMaximize.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     GreIsWindowResizeInProgress @ 0x1C0076644 (GreIsWindowResizeInProgress.c)
 *     bSetDevDragRect @ 0x1C00BCB00 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01C1160 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01C1598 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01C1830 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01C4330 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     xxxDrawDragRect @ 0x1C01C6018 (xxxDrawDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C01C6034 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxTM_MoveDragRect(struct _MOVESIZEDATA *a1, unsigned int a2)
{
  __int64 v2; // rax
  HWND *v4; // rcx
  int v5; // edi
  char v7; // r15
  bool v8; // zf
  __int128 v9; // xmm0
  __int128 *v10; // r13
  unsigned int v11; // r12d
  __int64 *v12; // r10
  HWND v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // xmm2
  int v17; // eax
  int v18; // eax
  __int128 *v19; // r15
  HWND v20; // r8
  __int64 *v21; // rcx
  HWND v22; // r8
  __int64 *v23; // rcx
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT *v27; // [rsp+58h] [rbp-21h] BYREF
  char *v28; // [rsp+60h] [rbp-19h]
  char *v29; // [rsp+68h] [rbp-11h]
  __int64 v30; // [rsp+70h] [rbp-9h]
  struct tagRECT v31; // [rsp+78h] [rbp-1h] BYREF
  __int128 v32; // [rsp+88h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)a1 + 26);
  v4 = (HWND *)*((_QWORD *)a1 + 2);
  v5 = 0;
  v26 = 0;
  v27 = 0LL;
  v7 = 0;
  v30 = v2;
  if ( (unsigned int)GreIsWindowResizeInProgress(*v4, 0LL) )
  {
    *((_DWORD *)a1 + 50) |= 1u;
    return;
  }
  v8 = *((_DWORD *)a1 + 44) == 9;
  v9 = *(_OWORD *)((char *)a1 + 24);
  v10 = (__int128 *)((char *)a1 + 40);
  v29 = (char *)a1 + 24;
  *(_OWORD *)((char *)a1 + 40) = v9;
  *(_OWORD *)((char *)a1 + 72) = *(_OWORD *)((char *)a1 + 56);
  if ( v8 )
  {
    if ( (*((_DWORD *)a1 + 49) & 0x800) != 0 )
    {
      if ( !(unsigned int)xxxSizeOrMoveRect(a1, a2, &v26, &v31, (struct tagCHECKPOINT **)&v27) )
        return;
      v7 = v26;
      if ( (v26 & 1) != 0 )
      {
        SwapRect(v27, &v31);
        xxxMinMaximize(*((struct tagWND **)a1 + 2), 9LL);
        SwapRect(&v31, v27);
        v11 = 532;
        goto LABEL_12;
      }
    }
    else if ( !(unsigned int)MoveRect((__int64)a1, a2, 0) )
    {
      return;
    }
    v11 = 534;
    goto LABEL_12;
  }
  if ( !(unsigned int)SizeRect(a1, a2, 0LL, &v26) )
    return;
  v7 = v26;
  v11 = 532;
LABEL_12:
  if ( (v7 & 2) != 0 )
  {
    v12 = (__int64 *)*((_QWORD *)a1 + 2);
    if ( (*(_BYTE *)(v12[5] + 30) & 1) != 0 )
    {
      v13 = (HWND)*((int *)a1 + 44);
      v32 = *v10;
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v12, v11, v13, (__int64)&v32, 0, 0, 0LL, 1, 0);
      xxxMinMaximizeEx(*((struct tagWND **)a1 + 2), 3u, 22, *((struct tagMONITOR **)a1 + 29), 0LL, 0LL);
      v14 = *((_QWORD *)a1 + 2);
      v15 = *(_QWORD *)(v14 + 40);
      if ( (*(_BYTE *)(v15 + 233) & 3) != 0 || (*(_BYTE *)(v15 + 31) & 1) != 0 )
        v5 = 128;
      *((_DWORD *)a1 + 49) = v5 | *((_DWORD *)a1 + 49) & 0xFFFFFF7F;
      v16 = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
      v32 = v16;
      *v10 = v16;
      *(_OWORD *)((char *)a1 + 72) = v16;
      *(_OWORD *)((char *)a1 + 24) = v16;
      *(_OWORD *)((char *)a1 + 56) = v16;
      goto LABEL_29;
    }
  }
  v17 = *((_DWORD *)a1 + 49);
  v28 = (char *)a1 + 40;
  if ( (v17 & 0x4000000) != 0 )
  {
    if ( (v17 & 0x20) != 0 )
    {
      if ( (v7 & 8) != 0 )
      {
        xxxDrawDragRect(a1, 0LL, 0x80000000LL);
      }
      else if ( (v7 & 4) != 0 )
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      }
    }
    v18 = *((_DWORD *)a1 + 49);
    if ( (v18 & 0x2000000) != 0 )
    {
      v19 = (__int128 *)((char *)a1 + 72);
      if ( (v18 & 0x20) == 0 )
      {
        v29 = (char *)a1 + 56;
        goto LABEL_28;
      }
      v20 = (HWND)*((int *)a1 + 44);
      v21 = (__int64 *)*((_QWORD *)a1 + 2);
      v32 = *v19;
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v21, v11, v20, (__int64)&v32, 0, 0, 0LL, 1, 0);
      xxxDrawDragRectEx(a1);
    }
  }
  v19 = (__int128 *)v28;
LABEL_28:
  v22 = (HWND)*((int *)a1 + 44);
  v23 = (__int64 *)*((_QWORD *)a1 + 2);
  v32 = *v19;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(v23, v11, v22, (__int64)&v32, 0, 0, 0LL, 1, 0);
  xxxDrawDragRectEx(a1);
  v10 = (__int128 *)((char *)a1 + 40);
LABEL_29:
  if ( *((_DWORD *)a1 + 44) == 9
    && ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF) == 2 || *((_QWORD *)a1 + 26) == v30) )
  {
    v24 = *((_DWORD *)a1 + 42);
    v25 = *((_DWORD *)a1 + 43);
    if ( (*((_DWORD *)a1 + 49) & 0x6000020) == 0x6000000 )
    {
      *((_DWORD *)a1 + 42) = *(_DWORD *)v10 + v24 - (__int16)a2;
      *((_DWORD *)a1 + 43) = v25 + *((_DWORD *)a1 + 11) - SHIWORD(a2);
    }
    else
    {
      *((_DWORD *)a1 + 42) = v32 + v24 - (__int16)a2;
      *((_DWORD *)a1 + 43) = DWORD1(v32) + v25 - SHIWORD(a2);
    }
  }
}
