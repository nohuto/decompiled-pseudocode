/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C000F030
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     SetWindowGroupBand @ 0x1C000EF18 (SetWindowGroupBand.c)
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C000F4BC (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C000F6D0 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C000F8E0 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C000FA90 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     GetLastTopMostWindow @ 0x1C000FEA0 (GetLastTopMostWindow.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C000FEFC (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     memmove @ 0x1C0163300 (memmove.c)
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
  __int64 v20; // r8
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
  int v54; // edx
  int v55; // r14d
  unsigned int v56; // r8d
  __int64 *v57; // rax
  __int64 v58; // rax
  _QWORD *LastTopMostWindow; // rax
  HWND v60; // [rsp+30h] [rbp-99h] BYREF
  HWND v61; // [rsp+38h] [rbp-91h] BYREF
  __int128 v62; // [rsp+40h] [rbp-89h]
  __int128 v63; // [rsp+50h] [rbp-79h]
  __int128 v64; // [rsp+60h] [rbp-69h]
  __int128 v65; // [rsp+70h] [rbp-59h]
  __int128 v66; // [rsp+80h] [rbp-49h]
  __int128 v67; // [rsp+90h] [rbp-39h]
  __int128 v68; // [rsp+A0h] [rbp-29h]
  __int128 v69; // [rsp+B0h] [rbp-19h]
  __int128 v70; // [rsp+C0h] [rbp-9h]
  __int128 v71; // [rsp+D0h] [rbp+7h]
  __int64 v72; // [rsp+E0h] [rbp+17h]
  int v73; // [rsp+138h] [rbp+6Fh]
  int v74; // [rsp+140h] [rbp+77h]
  __int64 v75; // [rsp+148h] [rbp+7Fh]

  v1 = a1;
  if ( FindValidWindowPos(a1) )
  {
    v2 = *((_DWORD *)v1 + 7);
    v3 = v2;
    v74 = v2;
    if ( v2 )
    {
      while ( 1 )
      {
        v4 = (HWND *)*((_QWORD *)v1 + 5);
        --v3;
        v5 = *((_DWORD *)v1 + 7);
        v73 = v3;
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
        v60 = v4[1];
        v7 = CheckTopmost((struct tagWINDOWPOS *)v4);
        v8 = (__int128 *)*((_QWORD *)v1 + 5);
        v9 = v7;
        v10 = *((_QWORD *)v8 + 20);
        v11 = v8[1];
        v62 = *v8;
        v12 = v8[2];
        v63 = v11;
        v13 = v8[3];
        v64 = v12;
        v14 = v8[4];
        v65 = v13;
        v15 = v8[5];
        v66 = v14;
        v16 = v8[6];
        v67 = v15;
        v17 = v8[7];
        v68 = v16;
        v18 = v8[8];
        v69 = v17;
        v19 = v8[9];
        v70 = v18;
        v71 = v19;
        v72 = v10;
        if ( v6 )
        {
          v75 = v6;
          memmove(v8, (char *)v8 + 168, 168LL * v6);
          v39 = (_OWORD *)(168LL * v6 + *((_QWORD *)v1 + 5));
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
          v75 = 0LL;
        }
        v1 = ZOrderByOwner2(v1, v6);
        if ( !v1 )
          return v1;
        if ( v9 )
          break;
LABEL_8:
        v20 = *((int *)v1 + 7);
        v21 = 0LL;
        v60 = 0LL;
        v61 = 0LL;
        if ( (int)v20 <= 0 )
          v22 = 0LL;
        else
          v22 = *(struct tagWND **)(gpKernelHandleTable
                                  + 24LL * (unsigned __int16)*(_DWORD *)(168 * v20 + *((_QWORD *)v1 + 5) - 168));
        v23 = 0LL;
        if ( v2 <= 1 && (v64 & 0x400000) != 0 )
          v23 = *(struct tagWND **)(gpKernelHandleTable + 24LL * WORD4(v62));
        if ( v6 != (_DWORD)v20 )
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
            ++v6;
            v24 += 168LL;
            v21 = TrackZorder((struct tagWINDOWPOS *)v26, v21, v23, v22, &v61, &v60);
          }
          while ( v6 != *((_DWORD *)v1 + 7) );
          v3 = v73;
        }
LABEL_20:
        if ( !v3 )
          return v1;
      }
      v50 = 0;
      v51 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v62);
      if ( v9 == 2 )
      {
        v52 = *((_QWORD *)v1 + 5) + 168 * v75;
        v53 = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)v52);
        if ( (*(_BYTE *)(*(_QWORD *)(v53 + 40) + 24LL) & 8) == 0 || v60 != (HWND)-2LL )
          goto LABEL_26;
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v51);
        if ( LastTopMostWindow )
          LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
        *(_QWORD *)(v52 + 8) = LastTopMostWindow;
        if ( LastTopMostWindow != *(_QWORD **)v52 )
          goto LABEL_26;
        if ( (*(_WORD *)(*(_QWORD *)(v53 + 40) + 42LL) & 0x2FFF) == 0x29D || (v57 = *(__int64 **)(v53 + 72)) == 0LL )
          v58 = 0LL;
        else
          v58 = *v57;
        *(_QWORD *)(v52 + 8) = v58;
      }
      if ( v9 == 1 )
      {
        v54 = 1;
LABEL_27:
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v68 + 1) + 424LL) + 820LL) & 2) != 0
          && (unsigned int)(*(_DWORD *)(*(_QWORD *)(v51 + 40) + 236LL) - 1) <= 1 )
        {
          v55 = 1;
          v50 = v54 + 1;
          v56 = 0;
        }
        else
        {
          v55 = 0;
          v56 = ((unsigned int)v64 >> 9) & 1;
        }
        if ( *(_DWORD *)(*(_QWORD *)(v51 + 40) + 236LL) == 1 || v50 == 1 )
          SetTopmostEnum((struct tagWND *)v51, v54, v56);
        if ( v55 && *(_DWORD *)(*(_QWORD *)(v51 + 40) + 236LL) != v50 && *(_QWORD *)(v51 + 80) == GetDesktopWindow(v51) )
          SetWindowGroupBand((struct tagWND *)v51, v50, 1);
        v2 = v74;
        v3 = v73;
        goto LABEL_8;
      }
LABEL_26:
      v54 = 0;
      goto LABEL_27;
    }
  }
  return v1;
}
