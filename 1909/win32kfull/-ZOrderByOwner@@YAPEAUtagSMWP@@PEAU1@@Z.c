/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00192CC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C001974C (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     SetWindowGroupBand @ 0x1C0019924 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0019A3C (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0019C98 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     GetLastTopMostWindow @ 0x1C001AECC (GetLastTopMostWindow.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C001B078 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006F4DC (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // rdi
  int v2; // r13d
  HWND *v3; // rcx
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  __int128 *v7; // rcx
  int v8; // r12d
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rsi
  __int64 v20; // rax
  struct tagWND *v21; // r15
  struct tagWND *v22; // r14
  struct tagWND *v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // r10
  __int128 v27; // xmm1
  int v28; // r8d
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rax
  _OWORD *v39; // rcx
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int64 v49; // rax
  int v50; // r14d
  __int64 v51; // rbx
  int v52; // edx
  int v53; // esi
  unsigned int v54; // r8d
  _QWORD *v55; // rsi
  __int64 v56; // r15
  _QWORD *LastTopMostWindow; // rax
  __int64 *v58; // rax
  __int64 v59; // rax
  HWND v60; // [rsp+30h] [rbp-F8h] BYREF
  HWND v61; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v62; // [rsp+40h] [rbp-E8h]
  __int128 v63; // [rsp+50h] [rbp-D8h]
  __int128 v64; // [rsp+60h] [rbp-C8h]
  __int128 v65; // [rsp+70h] [rbp-B8h]
  __int128 v66; // [rsp+80h] [rbp-A8h]
  __int128 v67; // [rsp+90h] [rbp-98h]
  __int128 v68; // [rsp+A0h] [rbp-88h]
  __int128 v69; // [rsp+B0h] [rbp-78h]
  __int128 v70; // [rsp+C0h] [rbp-68h]
  __int128 v71; // [rsp+D0h] [rbp-58h]
  __int64 v72; // [rsp+E0h] [rbp-48h]
  int v73; // [rsp+138h] [rbp+10h]
  int v74; // [rsp+140h] [rbp+18h]
  __int64 v75; // [rsp+148h] [rbp+20h]

  v1 = a1;
  if ( FindValidWindowPos(a1) )
  {
    v2 = *((_DWORD *)v1 + 7);
    v73 = v2;
    if ( v2 )
    {
      while ( 1 )
      {
        v3 = (HWND *)*((_QWORD *)v1 + 5);
        --v2;
        v4 = *((_DWORD *)v1 + 7);
        v74 = v2;
        v5 = v4 - 1;
        if ( !*v3 )
        {
          if ( v4 != 1 )
          {
            memmove(v3, v3 + 21, 168LL * v5);
            v4 = *((_DWORD *)v1 + 7);
          }
          *((_DWORD *)v1 + 7) = v4 - 1;
          goto LABEL_20;
        }
        v60 = v3[1];
        v6 = CheckTopmost((struct tagWINDOWPOS *)v3);
        v7 = (__int128 *)*((_QWORD *)v1 + 5);
        v8 = v6;
        v9 = *((_QWORD *)v7 + 20);
        v10 = v7[1];
        v62 = *v7;
        v11 = v7[2];
        v63 = v10;
        v12 = v7[3];
        v64 = v11;
        v13 = v7[4];
        v65 = v12;
        v14 = v7[5];
        v66 = v13;
        v15 = v7[6];
        v67 = v14;
        v16 = v7[7];
        v68 = v15;
        v17 = v7[8];
        v69 = v16;
        v18 = v7[9];
        v70 = v17;
        v71 = v18;
        v72 = v9;
        if ( v5 )
        {
          v19 = v5;
          v75 = v5;
          memmove(v7, (char *)v7 + 168, 168LL * v5);
          v39 = (_OWORD *)(168LL * v5 + *((_QWORD *)v1 + 5));
          v40 = v63;
          *v39 = v62;
          v41 = v64;
          v39[1] = v40;
          v42 = v65;
          v39[2] = v41;
          v43 = v66;
          v39[3] = v42;
          v44 = v67;
          v39[4] = v43;
          v45 = v68;
          v39[5] = v44;
          v46 = v69;
          v39[6] = v45;
          v39 += 8;
          v47 = v70;
          *(v39 - 1) = v46;
          v48 = v71;
          v49 = v72;
          *v39 = v47;
          v39[1] = v48;
          *((_QWORD *)v39 + 4) = v49;
        }
        else
        {
          v19 = 0LL;
          v75 = 0LL;
        }
        v1 = ZOrderByOwner2(v1, v5);
        if ( !v1 )
          return v1;
        if ( v8 )
          break;
LABEL_8:
        v20 = *((int *)v1 + 7);
        v21 = 0LL;
        v60 = 0LL;
        v61 = 0LL;
        if ( (int)v20 <= 0 )
          v22 = 0LL;
        else
          v22 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(168 * v20 + *((_QWORD *)v1 + 5) - 168));
        v23 = 0LL;
        if ( v73 <= 1 && (v64 & 0x400000) != 0 )
          v23 = (struct tagWND *)_HMObjectFromHandle(*((_QWORD *)&v62 + 1));
        if ( v5 != *((_DWORD *)v1 + 7) )
        {
          v24 = 168 * v75;
          v25 = v62;
          do
          {
            v26 = v24 + *((_QWORD *)v1 + 5);
            if ( *(_QWORD *)v26 == v25 )
            {
              v27 = v63;
              v28 = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)*(_DWORD *)(v26 + 32)) & 4;
              *(_OWORD *)v26 = v62;
              v29 = v64;
              *(_OWORD *)(v26 + 16) = v27;
              v30 = v65;
              *(_OWORD *)(v26 + 32) = v29;
              v31 = v66;
              *(_OWORD *)(v26 + 48) = v30;
              v32 = v67;
              *(_OWORD *)(v26 + 64) = v31;
              v33 = v68;
              *(_OWORD *)(v26 + 80) = v32;
              v34 = v69;
              *(_OWORD *)(v26 + 96) = v33;
              v35 = v70;
              *(_OWORD *)(v26 + 112) = v34;
              v36 = v71;
              v37 = v72;
              *(_OWORD *)(v26 + 128) = v35;
              *(_OWORD *)(v26 + 144) = v36;
              *(_QWORD *)(v26 + 160) = v37;
              *(_DWORD *)(v26 + 32) = v28;
              if ( (v28 & 0x20000) != 0 )
                *(_DWORD *)(v26 + 32) = v28 & 0xFFFDFBFF | 0x400;
            }
            ++v5;
            v24 += 168LL;
            v21 = TrackZorder((struct tagWINDOWPOS *)v26, v21, v23, v22, &v61, &v60);
          }
          while ( v5 != *((_DWORD *)v1 + 7) );
          v2 = v74;
        }
LABEL_20:
        if ( !v2 )
          return v1;
      }
      v50 = 0;
      v51 = _HMObjectFromHandle(v62);
      if ( v8 == 2 )
      {
        v55 = (_QWORD *)(*((_QWORD *)v1 + 5) + 168 * v19);
        v56 = _HMObjectFromHandle(*v55);
        if ( (*(_BYTE *)(*(_QWORD *)(v56 + 40) + 24LL) & 8) == 0 || v60 != (HWND)-2LL )
          goto LABEL_36;
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v51);
        if ( LastTopMostWindow )
          LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
        v55[1] = LastTopMostWindow;
        if ( LastTopMostWindow != (_QWORD *)*v55 )
          goto LABEL_36;
        if ( (*(_WORD *)(*(_QWORD *)(v56 + 40) + 42LL) & 0x3FFF) == 0x29D || (v58 = *(__int64 **)(v56 + 96)) == 0LL )
          v59 = 0LL;
        else
          v59 = *v58;
        v55[1] = v59;
      }
      if ( v8 == 1 )
      {
        v52 = 1;
        goto LABEL_26;
      }
LABEL_36:
      v52 = 0;
LABEL_26:
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v68 + 1) + 416LL) + 812LL) & 2) != 0
        && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v51 + 40) + 236LL) - 1) <= 1 )
      {
        v53 = 1;
        v50 = v52 + 1;
        v54 = 0;
      }
      else
      {
        v53 = 0;
        v54 = ((unsigned int)v64 >> 9) & 1;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v51 + 40) + 236LL) == 1 || v50 == 1 )
        SetTopmostEnum((struct tagWND *)v51, v52, v54);
      if ( v53 && *(_DWORD *)(*(_QWORD *)(v51 + 40) + 236LL) != v50 && *(_QWORD *)(v51 + 104) == GetDesktopWindow(v51) )
        SetWindowGroupBand((struct tagWND *)v51);
      goto LABEL_8;
    }
  }
  return v1;
}
