/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01EA210
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     GreIsWindowResizeInProgress @ 0x1C0074940 (GreIsWindowResizeInProgress.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     bSetDevDragRect @ 0x1C0125040 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01E5884 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01E5D24 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01E5FC4 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01E9754 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     xxxDrawDragRect @ 0x1C01EABFC (xxxDrawDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C01EAC18 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxTM_MoveDragRect(struct _MOVESIZEDATA *a1, int a2)
{
  __int64 v2; // rax
  HWND *v4; // rcx
  int v5; // edi
  char v7; // r14
  bool v8; // zf
  __int128 v9; // xmm0
  __int128 *v10; // r13
  unsigned int v11; // r15d
  __int64 *v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // xmm0
  int v17; // eax
  int v18; // eax
  __int128 *v19; // r14
  unsigned __int64 v20; // r8
  __int64 *v21; // rcx
  unsigned __int64 v22; // r8
  __int64 *v23; // rcx
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT *v28; // [rsp+58h] [rbp-21h] BYREF
  char *v29; // [rsp+60h] [rbp-19h]
  char *v30; // [rsp+68h] [rbp-11h]
  __int64 v31; // [rsp+70h] [rbp-9h]
  struct tagRECT v32; // [rsp+78h] [rbp-1h] BYREF
  __int128 v33; // [rsp+88h] [rbp+Fh] BYREF

  v2 = *((_QWORD *)a1 + 26);
  v4 = (HWND *)*((_QWORD *)a1 + 2);
  v5 = 0;
  v27 = 0;
  v28 = 0LL;
  v7 = 0;
  v31 = v2;
  if ( GreIsWindowResizeInProgress(*v4, 0LL) )
  {
    *((_DWORD *)a1 + 50) |= 1u;
    return;
  }
  v8 = *((_DWORD *)a1 + 44) == 9;
  v9 = *(_OWORD *)((char *)a1 + 24);
  v10 = (__int128 *)((char *)a1 + 40);
  v30 = (char *)a1 + 24;
  *(_OWORD *)((char *)a1 + 40) = v9;
  *(_OWORD *)((char *)a1 + 72) = *(_OWORD *)((char *)a1 + 56);
  if ( v8 )
  {
    if ( (*((_DWORD *)a1 + 49) & 0x800) != 0 )
    {
      if ( !(unsigned int)xxxSizeOrMoveRect(a1, a2, &v27, &v32, (struct tagCHECKPOINT **)&v28) )
        return;
      v7 = v27;
      if ( (v27 & 1) != 0 )
      {
        SwapRect(v28, &v32);
        xxxMinMaximizeEx(*((struct tagWND **)a1 + 2), 9u, 4, 0LL, 0LL, 0LL);
        SwapRect(&v32, v28);
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
  if ( !(unsigned int)SizeRect(a1, a2, 0LL, &v27) )
    return;
  v7 = v27;
  v11 = 532;
LABEL_12:
  if ( (v7 & 2) != 0 )
  {
    v12 = (__int64 *)*((_QWORD *)a1 + 2);
    if ( (*(_BYTE *)(v12[5] + 30) & 1) != 0 )
    {
      v13 = *((int *)a1 + 44);
      v33 = *v10;
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v12, v11, v13, (__int64)&v33, 0, 0, 0LL, 1, 0);
      xxxMinMaximizeEx(*((struct tagWND **)a1 + 2), 3u, 22, *((_QWORD *)a1 + 29), 0LL, 0LL);
      v14 = *((_QWORD *)a1 + 2);
      v15 = *(_QWORD *)(v14 + 40);
      if ( (*(_BYTE *)(v15 + 233) & 3) != 0 || (*(_BYTE *)(v15 + 31) & 1) != 0 )
        v5 = 128;
      *((_DWORD *)a1 + 49) = v5 | *((_DWORD *)a1 + 49) & 0xFFFFFF7F;
      v16 = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
      v33 = v16;
      *v10 = v16;
      *(_OWORD *)((char *)a1 + 72) = v16;
      *(_OWORD *)((char *)a1 + 24) = v16;
      *(_OWORD *)((char *)a1 + 56) = v16;
      goto LABEL_29;
    }
  }
  v17 = *((_DWORD *)a1 + 49);
  v29 = (char *)a1 + 40;
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
        v30 = (char *)a1 + 56;
        goto LABEL_28;
      }
      v20 = *((int *)a1 + 44);
      v21 = (__int64 *)*((_QWORD *)a1 + 2);
      v33 = *v19;
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v21, v11, v20, (__int64)&v33, 0, 0, 0LL, 1, 0);
      xxxDrawDragRectEx(a1);
    }
  }
  v19 = (__int128 *)v29;
LABEL_28:
  v22 = *((int *)a1 + 44);
  v23 = (__int64 *)*((_QWORD *)a1 + 2);
  v33 = *v19;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(v23, v11, v22, (__int64)&v33, 0, 0, 0LL, 1, 0);
  xxxDrawDragRectEx(a1);
  v10 = (__int128 *)((char *)a1 + 40);
LABEL_29:
  if ( *((_DWORD *)a1 + 44) == 9
    && ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF) == 2 || *((_QWORD *)a1 + 26) == v31) )
  {
    v24 = *((_DWORD *)a1 + 42) - (__int16)a2;
    v25 = *((_DWORD *)a1 + 43) - SHIWORD(a2);
    if ( (*((_DWORD *)a1 + 49) & 0x6000020) == 0x6000000 )
    {
      *((_DWORD *)a1 + 42) = *(_DWORD *)v10 + v24;
      v26 = *((_DWORD *)a1 + 11);
    }
    else
    {
      *((_DWORD *)a1 + 42) = v33 + v24;
      v26 = DWORD1(v33);
    }
    *((_DWORD *)a1 + 43) = v25 + v26;
  }
}
