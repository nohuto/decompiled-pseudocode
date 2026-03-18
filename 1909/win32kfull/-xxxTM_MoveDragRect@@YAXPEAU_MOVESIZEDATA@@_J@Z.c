/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FF9E4
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE0FC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     GreIsWindowResizeInProgress @ 0x1C00F7694 (GreIsWindowResizeInProgress.c)
 *     bSetDevDragRect @ 0x1C0139C20 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01FAEB0 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01FB354 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01FB5EC (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FEEBC (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     WPP_RECORDER_SF_qdddd @ 0x1C0200480 (WPP_RECORDER_SF_qdddd.c)
 *     xxxDrawDragRect @ 0x1C02006B4 (xxxDrawDragRect.c)
 *     xxxDrawDragRectEx @ 0x1C02006D0 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxTM_MoveDragRect(struct _MOVESIZEDATA *a1, int a2)
{
  int v3; // edi
  __int64 v5; // rax
  HWND *v6; // rcx
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
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  unsigned __int64 v25; // r8
  __int64 *v26; // rcx
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // ecx
  int v31; // edx
  int v32; // ecx
  int v33; // [rsp+20h] [rbp-59h]
  int v34; // [rsp+20h] [rbp-59h]
  unsigned int v35; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT *v36; // [rsp+58h] [rbp-21h] BYREF
  char *v37; // [rsp+60h] [rbp-19h]
  char *v38; // [rsp+68h] [rbp-11h]
  struct tagRECT v39; // [rsp+70h] [rbp-9h] BYREF
  __int64 v40; // [rsp+80h] [rbp+7h]
  __int128 v41; // [rsp+88h] [rbp+Fh] BYREF

  v3 = 0;
  *(_QWORD *)&v39.left = 0LL;
  *(_QWORD *)&v39.right = 0LL;
  v5 = *((_QWORD *)a1 + 26);
  v6 = (HWND *)*((_QWORD *)a1 + 2);
  v7 = 0;
  v35 = 0;
  v36 = 0LL;
  v40 = v5;
  if ( GreIsWindowResizeInProgress(*v6, 0LL) )
  {
    *((_DWORD *)a1 + 50) |= 1u;
    return;
  }
  v8 = *((_DWORD *)a1 + 44) == 9;
  v9 = *(_OWORD *)((char *)a1 + 24);
  v10 = (__int128 *)((char *)a1 + 40);
  v38 = (char *)a1 + 24;
  *(_OWORD *)((char *)a1 + 40) = v9;
  *(_OWORD *)((char *)a1 + 72) = *(_OWORD *)((char *)a1 + 56);
  if ( v8 )
  {
    if ( (*((_DWORD *)a1 + 49) & 0x800) != 0 )
    {
      if ( !(unsigned int)xxxSizeOrMoveRect(a1, a2, &v35, &v39, (struct tagCHECKPOINT **)&v36) )
        return;
      v7 = v35;
      if ( (v35 & 1) != 0 )
      {
        SwapRect(v36, &v39);
        xxxMinMaximizeEx(*((struct tagWND **)a1 + 2), 9u, 4, 0LL, 0LL, 0LL);
        SwapRect(&v39, v36);
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
  if ( !(unsigned int)SizeRect(a1, a2, 0LL, &v35) )
    return;
  v7 = v35;
  v11 = 532;
LABEL_12:
  if ( (v7 & 2) == 0 || (v12 = (__int64 *)*((_QWORD *)a1 + 2), (*(_BYTE *)(v12[5] + 30) & 1) == 0) )
  {
    v17 = *((_DWORD *)a1 + 49);
    v37 = (char *)a1 + 40;
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
          v38 = (char *)a1 + 56;
          goto LABEL_30;
        }
        v20 = *((int *)a1 + 44);
        v21 = (__int64 *)*((_QWORD *)a1 + 2);
        v41 = *v19;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v21, v11, v20, (struct _LARGE_STRING *)&v41, 0, 0, 0LL, 1u, 0);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qdddd(
            v23,
            v22,
            v24,
            12,
            v33,
            *((_QWORD *)a1 + 2),
            v41,
            SBYTE4(v41),
            SBYTE8(v41),
            SBYTE12(v41));
        xxxDrawDragRectEx(a1);
      }
    }
    v19 = (__int128 *)v37;
LABEL_30:
    v25 = *((int *)a1 + 44);
    v26 = (__int64 *)*((_QWORD *)a1 + 2);
    v41 = *v19;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v26, v11, v25, (struct _LARGE_STRING *)&v41, 0, 0, 0LL, 1u, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdddd(v28, v27, v29, 13, v34, *((_QWORD *)a1 + 2), v41, SBYTE4(v41), SBYTE8(v41), SBYTE12(v41));
    xxxDrawDragRectEx(a1);
    v10 = (__int128 *)((char *)a1 + 40);
    goto LABEL_33;
  }
  v13 = *((int *)a1 + 44);
  v41 = *v10;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(v12, v11, v13, (struct _LARGE_STRING *)&v41, 0, 0, 0LL, 1u, 0);
  xxxMinMaximizeEx(*((struct tagWND **)a1 + 2), 3u, 22, *((_QWORD *)a1 + 29), 0LL, 0LL);
  v14 = *((_QWORD *)a1 + 2);
  v15 = *(_QWORD *)(v14 + 40);
  if ( (*(_BYTE *)(v15 + 233) & 3) != 0 || (*(_BYTE *)(v15 + 31) & 1) != 0 )
    v3 = 128;
  *((_DWORD *)a1 + 49) = v3 | *((_DWORD *)a1 + 49) & 0xFFFFFF7F;
  v16 = *(_OWORD *)(*(_QWORD *)(v14 + 40) + 88LL);
  v41 = v16;
  *v10 = v16;
  *(_OWORD *)((char *)a1 + 72) = v16;
  *(_OWORD *)((char *)a1 + 24) = v16;
  *(_OWORD *)((char *)a1 + 56) = v16;
LABEL_33:
  if ( *((_DWORD *)a1 + 44) == 9
    && ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF) == 2 || *((_QWORD *)a1 + 26) == v40) )
  {
    v30 = *((_DWORD *)a1 + 42) - (__int16)a2;
    v31 = *((_DWORD *)a1 + 43) - SHIWORD(a2);
    if ( (*((_DWORD *)a1 + 49) & 0x6000020) == 0x6000000 )
    {
      *((_DWORD *)a1 + 42) = *(_DWORD *)v10 + v30;
      v32 = *((_DWORD *)a1 + 11);
    }
    else
    {
      *((_DWORD *)a1 + 42) = v41 + v30;
      v32 = DWORD1(v41);
    }
    *((_DWORD *)a1 + 43) = v31 + v32;
  }
}
