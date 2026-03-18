/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C006EF3C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C002718C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C006DFF0 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     GetLastTopMostWindow @ 0x1C006E748 (GetLastTopMostWindow.c)
 *     SetWindowGroupBand @ 0x1C006EDD0 (SetWindowGroupBand.c)
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C006F3E0 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C006F598 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C006F7A8 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // rdi
  int v2; // r13d
  int v3; // r14d
  HWND *v4; // rcx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  __int128 *v8; // rcx
  int v9; // r12d
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // r8d
  struct tagWND *v21; // r11
  struct tagWND *v22; // r12
  struct tagWND *v23; // r15
  __int64 v24; // rbx
  __int64 v25; // r14
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
  unsigned int v50; // r15d
  __int64 v51; // rbx
  __int64 v52; // r14
  __int64 v53; // r13
  int v54; // r9d
  __int64 v55; // rdx
  int v56; // r14d
  int v57; // r8d
  __int64 *v58; // rax
  __int64 v59; // rax
  int v60; // eax
  _QWORD *LastTopMostWindow; // rax
  HWND v62; // [rsp+30h] [rbp-99h] BYREF
  HWND v63; // [rsp+38h] [rbp-91h] BYREF
  __int128 v64; // [rsp+40h] [rbp-89h]
  __int128 v65; // [rsp+50h] [rbp-79h]
  __int128 v66; // [rsp+60h] [rbp-69h]
  __int128 v67; // [rsp+70h] [rbp-59h]
  __int128 v68; // [rsp+80h] [rbp-49h]
  __int128 v69; // [rsp+90h] [rbp-39h]
  __int128 v70; // [rsp+A0h] [rbp-29h]
  __int128 v71; // [rsp+B0h] [rbp-19h]
  __int128 v72; // [rsp+C0h] [rbp-9h]
  __int128 v73; // [rsp+D0h] [rbp+7h]
  __int64 v74; // [rsp+E0h] [rbp+17h]
  int v75; // [rsp+138h] [rbp+6Fh]
  int v76; // [rsp+140h] [rbp+77h]
  __int64 v77; // [rsp+148h] [rbp+7Fh]

  v1 = a1;
  if ( FindValidWindowPos(a1) )
  {
    v2 = *((_DWORD *)v1 + 7);
    v3 = v2;
    v76 = v2;
    if ( v2 )
    {
      while ( 1 )
      {
        v4 = (HWND *)*((_QWORD *)v1 + 5);
        --v3;
        v5 = *((_DWORD *)v1 + 7);
        v75 = v3;
        v6 = v5 - 1;
        if ( !*v4 )
        {
          if ( v5 != 1 )
          {
            memmove(v4, v4 + 21, 168LL * v6);
            v5 = *((_DWORD *)v1 + 7);
          }
          *((_DWORD *)v1 + 7) = v5 - 1;
          goto LABEL_20;
        }
        v62 = v4[1];
        v7 = CheckTopmost((struct tagWINDOWPOS *)v4);
        v8 = (__int128 *)*((_QWORD *)v1 + 5);
        v9 = v7;
        v10 = *((_QWORD *)v8 + 20);
        v11 = v8[1];
        v64 = *v8;
        v12 = v8[2];
        v65 = v11;
        v13 = v8[3];
        v66 = v12;
        v14 = v8[4];
        v67 = v13;
        v15 = v8[5];
        v68 = v14;
        v16 = v8[6];
        v69 = v15;
        v17 = v8[7];
        v70 = v16;
        v18 = v8[8];
        v71 = v17;
        v19 = v8[9];
        v72 = v18;
        v73 = v19;
        v74 = v10;
        if ( v6 )
        {
          v77 = v6;
          memmove(v8, (char *)v8 + 168, 168LL * v6);
          v39 = (_OWORD *)(168LL * v6 + *((_QWORD *)v1 + 5));
          v40 = v65;
          *v39 = v64;
          v41 = v66;
          v39[1] = v40;
          v42 = v67;
          v39[2] = v41;
          v43 = v68;
          v39[3] = v42;
          v44 = v69;
          v39[4] = v43;
          v45 = v70;
          v39[5] = v44;
          v46 = v71;
          v39[6] = v45;
          v39 += 8;
          v47 = v72;
          *(v39 - 1) = v46;
          v48 = v73;
          v49 = v74;
          *v39 = v47;
          v39[1] = v48;
          *((_QWORD *)v39 + 4) = v49;
        }
        else
        {
          v77 = 0LL;
        }
        v1 = ZOrderByOwner2(v1, v6);
        if ( !v1 )
          return v1;
        if ( v9 )
          break;
LABEL_8:
        v20 = *((_DWORD *)v1 + 7);
        v21 = 0LL;
        v62 = 0LL;
        v63 = 0LL;
        if ( v20 <= 0 )
          v22 = 0LL;
        else
          v22 = *(struct tagWND **)(gpKernelHandleTable
                                  + 24LL * (unsigned __int16)*(_DWORD *)(168LL * (v20 - 1) + *((_QWORD *)v1 + 5)));
        v23 = 0LL;
        if ( v2 <= 1 && (v66 & 0x400000) != 0 )
          v23 = *(struct tagWND **)(gpKernelHandleTable + 24LL * WORD4(v64));
        if ( v6 != v20 )
        {
          v24 = 168 * v77;
          v25 = v64;
          do
          {
            v26 = v24 + *((_QWORD *)v1 + 5);
            if ( *(_QWORD *)v26 == v25 )
            {
              v27 = v65;
              v28 = v66 ^ ((unsigned __int8)v66 ^ (unsigned __int8)*(_DWORD *)(v26 + 32)) & 4;
              *(_OWORD *)v26 = v64;
              v29 = v66;
              *(_OWORD *)(v26 + 16) = v27;
              v30 = v67;
              *(_OWORD *)(v26 + 32) = v29;
              v31 = v68;
              *(_OWORD *)(v26 + 48) = v30;
              v32 = v69;
              *(_OWORD *)(v26 + 64) = v31;
              v33 = v70;
              *(_OWORD *)(v26 + 80) = v32;
              v34 = v71;
              *(_OWORD *)(v26 + 96) = v33;
              v35 = v72;
              *(_OWORD *)(v26 + 112) = v34;
              v36 = v73;
              v37 = v74;
              *(_OWORD *)(v26 + 128) = v35;
              *(_OWORD *)(v26 + 144) = v36;
              *(_QWORD *)(v26 + 160) = v37;
              *(_DWORD *)(v26 + 32) = v28;
              if ( (v28 & 0x20000) != 0 )
                *(_DWORD *)(v26 + 32) = v28 & 0xFFFDFBFF | 0x400;
            }
            ++v6;
            v24 += 168LL;
            v21 = TrackZorder((struct tagWINDOWPOS *)v26, v21, v23, v22, &v63, &v62);
          }
          while ( v6 != *((_DWORD *)v1 + 7) );
          v3 = v75;
        }
LABEL_20:
        if ( !v3 )
          return v1;
      }
      v50 = 0;
      v51 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v64);
      if ( v9 == 2 )
      {
        v52 = *((_QWORD *)v1 + 5) + 168 * v77;
        v53 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)v52);
        if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 24LL) & 8) == 0 || v62 != (HWND)-2LL )
          goto LABEL_25;
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v51);
        if ( LastTopMostWindow )
          LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
        *(_QWORD *)(v52 + 8) = LastTopMostWindow;
        if ( LastTopMostWindow != *(_QWORD **)v52 )
          goto LABEL_25;
        if ( (*(_WORD *)(*(_QWORD *)(v53 + 40) + 42LL) & 0x3FFF) == 0x29D || (v58 = *(__int64 **)(v53 + 72)) == 0LL )
          v59 = 0LL;
        else
          v59 = *v58;
        *(_QWORD *)(v52 + 8) = v59;
      }
      if ( v9 == 1 )
      {
        v54 = 1;
        goto LABEL_26;
      }
LABEL_25:
      v54 = 0;
LABEL_26:
      v55 = *(_QWORD *)(v51 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v70 + 1) + 416LL) + 812LL) & 2) != 0
        && ((v60 = *(_DWORD *)(v55 + 236), v60 == 1) || v60 == 2) )
      {
        v56 = 1;
        v50 = v54 + 1;
      }
      else
      {
        v56 = 0;
        if ( (v66 & 0x200) != 0 )
        {
          v57 = 1;
          goto LABEL_29;
        }
      }
      v57 = 0;
LABEL_29:
      if ( *(_DWORD *)(v55 + 236) == 1 || v50 == 1 )
        SetTopmostEnum((struct tagWND *)v51, v54, v57);
      if ( v56 && *(_DWORD *)(*(_QWORD *)(v51 + 40) + 236LL) != v50 && *(_QWORD *)(v51 + 80) == GetDesktopWindow(v51) )
        SetWindowGroupBand((struct tagWND *)v51, v50, 1);
      v2 = v76;
      v3 = v75;
      goto LABEL_8;
    }
  }
  return v1;
}
