/*
 * XREFs of VidSchCollectDbgInfo @ 0x1C00CD870
 * Callers:
 *     <none>
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C00174CC (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x1C0029F14 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0039EA8 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCaptureProcessName @ 0x1C0039ECC (VidSchiCaptureProcessName.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003AE0C (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003AE94 (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003AF48 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchQueryDmaHeader @ 0x1C00CE098 (VidSchQueryDmaHeader.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x1C00CE3A8 (VidSchiGetNumFlipAllocAttribs.c)
 */

__int64 __fastcall VidSchCollectDbgInfo(__int64 a1, _DWORD *a2, size_t a3)
{
  size_t v3; // r15
  _DWORD *v4; // rsi
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  int v12; // ebx
  int NumHistoryLayersUsed; // eax
  unsigned int v14; // ebx
  int v15; // r12d
  int NumFlipAllocAttribs; // eax
  __int64 v17; // r11
  unsigned int v18; // edx
  unsigned int v19; // edi
  size_t v20; // r12
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned int v24; // r15d
  char *v25; // r12
  int v26; // edi
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  unsigned int v28; // r10d
  __int64 v29; // r11
  __int64 v30; // rdx
  char *v31; // r10
  unsigned int *v32; // r13
  unsigned int v33; // edi
  __int64 v34; // rcx
  char *v35; // r11
  unsigned int v36; // eax
  int v37; // edx
  unsigned int v38; // eax
  int v39; // ecx
  unsigned int v40; // ecx
  __int64 v41; // rbx
  unsigned int v42; // edx
  unsigned int v43; // r8d
  bool v44; // zf
  unsigned int v45; // edx
  int v46; // r15d
  int v47; // eax
  char v48; // cl
  unsigned int v49; // r9d
  char v50; // cl
  unsigned int v51; // edi
  int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rax
  int v57; // ecx
  int v58; // edx
  int v59; // eax
  int v60; // ecx
  int v61; // edx
  __int64 v62; // r8
  _DWORD *v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 i; // r9
  __int64 v67; // r8
  __int64 v68; // r10
  __int64 v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  int v74; // [rsp+30h] [rbp-69h]
  int NumFlipQueueEntriesUsed; // [rsp+34h] [rbp-65h]
  unsigned int v76; // [rsp+38h] [rbp-61h]
  int NumOverlayPlanesUsed; // [rsp+3Ch] [rbp-5Dh]
  int v78; // [rsp+40h] [rbp-59h]
  __int64 v79; // [rsp+48h] [rbp-51h]
  __int64 v80; // [rsp+58h] [rbp-41h]
  __int64 v81; // [rsp+60h] [rbp-39h] BYREF
  int v82; // [rsp+68h] [rbp-31h]
  int v83; // [rsp+6Ch] [rbp-2Dh]
  __int64 v84; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v85; // [rsp+78h] [rbp-21h]
  unsigned int v86; // [rsp+80h] [rbp-19h]
  unsigned int v87; // [rsp+84h] [rbp-15h]
  int v88; // [rsp+88h] [rbp-11h]
  unsigned int v89; // [rsp+8Ch] [rbp-Dh]
  unsigned int v90; // [rsp+90h] [rbp-9h]
  char *v91; // [rsp+98h] [rbp-1h]
  size_t v92; // [rsp+A0h] [rbp+7h]
  unsigned int v93; // [rsp+100h] [rbp+67h]
  unsigned int v96; // [rsp+118h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2560LL);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_QWORD *)(v6 + 528);
  if ( v7 == 2 )
  {
    v9 = *(_QWORD *)(v8 + 2416);
    v10 = 16LL;
    v11 = (_QWORD *)(v9 + 552);
    do
    {
      VidSchQueryDmaHeader(v8, *(_QWORD *)(v8 + 2416), *v11, *((_DWORD *)v11 - 4) == 3, (__int64)(v11 - 4));
      v11 += 7;
      --v10;
    }
    while ( v10 );
    if ( v3 >= 0x390 )
      v3 = 912LL;
    memmove(v4, (const void *)(v9 + 488), v3);
  }
  else if ( v7 == 3 )
  {
    v12 = *(_DWORD *)(a1 + 80);
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 528), v12);
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed((struct _VIDSCH_GLOBAL *)v8, v12);
    v14 = *(_DWORD *)(a1 + 80);
    v78 = NumHistoryLayersUsed;
    v15 = NumHistoryLayersUsed;
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, v14);
    LODWORD(v79) = (((_DWORD)v4 + 163) & 0xFFFFFFF8) - (_DWORD)v4;
    NumFlipAllocAttribs = VidSchiGetNumFlipAllocAttribs(v8, v14);
    v17 = 4LL;
    v18 = (((_DWORD)v4 + 163) & 0xFFFFFFF8) + 280 * NumFlipAllocAttribs;
    v19 = v18 + 48 * v15 - (_DWORD)v4;
    HIDWORD(v79) = v18 - (_DWORD)v4;
    v20 = v19 + 48 * NumFlipQueueEntriesUsed;
    v92 = v20;
    if ( v3 >= v20 )
    {
      memset(v4, 0, (unsigned int)v20);
      *v4 = v19 + 48 * NumFlipQueueEntriesUsed;
      v4[1] = 2;
      v4[3] = VidSchiGetVSyncState(v8);
      v4[2] = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v4 + 16) = v79;
      v4[34] = v19;
      v21 = (unsigned int)v4[2];
      if ( (_DWORD)v21 != -1 && (unsigned int)v21 < *(_DWORD *)(v8 + 40) )
      {
        v22 = *(_QWORD *)(v8 + 8 * v21 + 2576);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 16);
          if ( v23 )
          {
            VidSchiCaptureProcessName(v23, (_BYTE *)v4 + 16);
            v93 = 0;
            v24 = 0;
            v4[8] = *(_DWORD *)(v22 + 4);
            v25 = (char *)v4 + (unsigned int)v4[34];
            v91 = (char *)v4 + (unsigned int)v4[33];
            v26 = -1;
            v82 = v4[2];
            v74 = 0;
            v96 = 0;
            v81 = v8;
            while ( 1 )
            {
              v83 = v26;
              if ( v26 == *(_DWORD *)(v8 + 140) )
                break;
              FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v81);
              if ( FlipQueue )
              {
                v30 = 280LL * v28;
                v31 = (char *)FlipQueue + 1264;
                v32 = (unsigned int *)(v30 + v29 + 24);
                *(_DWORD *)(v30 + v29) = v26;
                v33 = v93;
                *(_DWORD *)(v30 + v29 + 4) = *((_DWORD *)FlipQueue + 8);
                *(_DWORD *)(v30 + v29 + 8) = *((_DWORD *)FlipQueue + 9);
                *(_DWORD *)(v30 + v29 + 12) = *((_DWORD *)FlipQueue + 10);
                *(_DWORD *)(v30 + v29 + 16) = *((_DWORD *)FlipQueue + 11);
                v34 = 64LL;
                *(_DWORD *)(v30 + v29 + 20) = *((_DWORD *)FlipQueue + 13);
                v35 = v91;
                v80 = 64LL;
                do
                {
                  v36 = *((_DWORD *)v31 - 33);
                  if ( v36 <= 0xC && (v37 = 4673, _bittest(&v37, v36)) )
                  {
                    *v32 = -1;
                  }
                  else
                  {
                    *v32 = v33;
                    v38 = 0;
                    v39 = *((_DWORD *)v31 - 26);
                    if ( (v39 & 1) == 0 )
                    {
                      do
                      {
                        if ( v38 >= *(_DWORD *)(v8 + 64) )
                          break;
                        ++v38;
                      }
                      while ( !_bittest(&v39, v38) );
                    }
                    v40 = 0;
                    v84 = v8;
                    if ( v38 != *(_DWORD *)(v8 + 64) )
                      v40 = v38;
                    v76 = v40;
                    v41 = 6LL * v33;
                    *(_DWORD *)&v25[8 * v41] = v24;
                    *(_DWORD *)&v25[8 * v41 + 44] ^= (*(_DWORD *)&v25[48 * v33 + 44] ^ **(_DWORD **)v31) & 0x3FF;
                    v85 = *(unsigned int **)v31;
                    v42 = *v85;
                    v43 = *v85 & 0x3FF;
                    v44 = *(_BYTE *)(v8 + 144) == 0;
                    v86 = v43;
                    if ( v44 )
                      v45 = 0;
                    else
                      v45 = (v42 >> 10) & 0x3FF;
                    v46 = 0;
                    v87 = v45;
                    v44 = !_BitScanForward((unsigned int *)&v47, v43);
                    v48 = -1;
                    v88 = 0;
                    if ( !v44 )
                      v48 = v47;
                    v49 = v48;
                    v50 = -1;
                    v51 = v96;
                    v44 = !_BitScanForward((unsigned int *)&v52, v45);
                    v89 = v49;
                    if ( !v44 )
                      v50 = v52;
                    v53 = v50;
                    v90 = v50;
                    while ( v43 || v45 )
                    {
                      if ( v49 < v53 )
                      {
                        v54 = 6LL * v51;
                        *(_QWORD *)&v35[8 * v54] = *(_QWORD *)(((unsigned __int64)(v46
                                                                                 + v76
                                                                                 * *(_DWORD *)(*(_QWORD *)v31 + 4LL)) << 6)
                                                             + *(_QWORD *)v31
                                                             + *(_DWORD *)(*(_QWORD *)v31 + 4LL)
                                                             * ((8 * *(_DWORD *)(*(_QWORD *)v31 + 8LL) + 191) & 0xFFFFFFF8)
                                                             + 40);
                        v55 = *(_QWORD *)v31;
                        v56 = v46 * ((8 * *(_DWORD *)(*(_QWORD *)v31 + 8LL) + 191) & 0xFFFFFFF8);
                        ++v51;
                        *(_OWORD *)&v35[8 * v54 + 8] = *(_OWORD *)(v56 + *(_QWORD *)v31 + 160);
                        *(_OWORD *)&v35[8 * v54 + 24] = *(_OWORD *)(v56 + v55 + 176);
                        *(_DWORD *)&v35[8 * v54 + 40] = *(_DWORD *)(v56 + v55 + 192);
                      }
                      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v84);
                      v53 = v90;
                      v45 = v87;
                      v43 = v86;
                      v49 = v89;
                      v46 = v88;
                    }
                    *(_DWORD *)&v25[8 * v41 + 4] = *((_DWORD *)v31 - 33);
                    *(_DWORD *)&v25[8 * v41 + 8] = *((_DWORD *)v31 - 32);
                    v96 = v51;
                    *(_DWORD *)&v25[8 * v41 + 44] ^= (*(_DWORD *)&v25[8 * v41 + 44] ^ (*((_DWORD *)v31 - 28) << 10)) & 0x3C00;
                    v57 = *(_DWORD *)&v25[8 * v41 + 44];
                    v24 = v51;
                    *(_DWORD *)&v25[8 * v41 + 12] = *((_DWORD *)v31 - 26);
                    *(_QWORD *)&v25[8 * v41 + 16] = *((_QWORD *)v31 - 10);
                    *(_QWORD *)&v25[8 * v41 + 24] = *((_QWORD *)v31 - 9);
                    *(_DWORD *)&v25[8 * v41 + 36] = *((_DWORD *)v31 - 14);
                    v58 = v57 ^ (v57 ^ ((unsigned __int8)*(v31 - 108) << 18)) & 0x40000;
                    *(_DWORD *)&v25[8 * v41 + 44] = v58;
                    v25[8 * v41 + 40] = *(v31 - 96);
                    v25[8 * v41 + 41] = *(v31 - 92);
                    v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v31 - 12) << 10)) & 0x4000;
                    *(_DWORD *)&v25[8 * v41 + 44] = v59;
                    v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v31 - 12) << 10)) & 0x8000;
                    *(_DWORD *)&v25[8 * v41 + 44] = v60;
                    v61 = v60 ^ (v60 ^ (*((_DWORD *)v31 - 12) << 9)) & 0x10000;
                    v34 = v80;
                    *(_DWORD *)&v25[8 * v41 + 44] = v61;
                    v33 = v93 + 1;
                    *(_DWORD *)&v25[8 * v41 + 44] = v61 ^ (v61 ^ (*((_DWORD *)v31 - 12) << 9)) & 0x20000;
                    ++v93;
                  }
                  ++v32;
                  v31 += 1312;
                  v80 = --v34;
                }
                while ( v34 );
                v26 = v83;
                ++v74;
              }
              ++v26;
            }
            v4 = a2;
            v3 = a3;
            v20 = v92;
          }
        }
      }
      v62 = 0LL;
      v4[14] = *(_DWORD *)(v8 + 1752);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 140);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = v78;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 64); (unsigned int)v62 < *(_DWORD *)(v8 + 40); v62 = (unsigned int)(v62 + 1) )
        v4[v62 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 2552LL) + 112LL)
                                 + 3968LL * (unsigned int)v62
                                 + 1068);
      v3 -= v20;
      v17 = 4LL;
      v4 = (_DWORD *)((char *)v4 + v20);
    }
    if ( v3 >= 0x40 )
    {
      v63 = v4;
      v64 = 4LL;
      v65 = ((unsigned __int8)*(_DWORD *)(v8 + 5728) - 1) & 3;
      do
      {
        *(_QWORD *)v63 = *(_QWORD *)(v8 + 8 * v65 + 5736);
        v63[2] = *(_DWORD *)(v8 + 4 * v65 + 5768);
        v65 = ((_BYTE)v65 - 1) & 3;
        v63 += 4;
        --v64;
      }
      while ( v64 );
      v3 -= 64LL;
      v4 += 16;
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v8 + 40); i = (unsigned int)(i + 1) )
    {
      if ( v3 >= 0x160 )
      {
        v67 = *(_QWORD *)(v8 + 8 * i + 2576);
        if ( v67 )
        {
          v68 = 4LL;
          v69 = ((unsigned __int8)*(_DWORD *)(v67 + 33284) - 1) & 3;
          do
          {
            *(_QWORD *)v4 = *(_QWORD *)(v67 + 8 * v69 + 33288);
            v70 = 10 * v69;
            v69 = ((_BYTE)v69 - 1) & 3;
            *(_OWORD *)(v4 + 2) = *(_OWORD *)(v67 + 8 * v70 + 33320);
            *(_OWORD *)(v4 + 6) = *(_OWORD *)(v67 + 8 * v70 + 33336);
            *(_OWORD *)(v4 + 10) = *(_OWORD *)(v67 + 8 * v70 + 33352);
            *(_OWORD *)(v4 + 14) = *(_OWORD *)(v67 + 8 * v70 + 33368);
            *(_OWORD *)(v4 + 18) = *(_OWORD *)(v67 + 8 * v70 + 33384);
            v4 += 22;
            --v68;
          }
          while ( v68 );
          v3 -= 352LL;
        }
      }
    }
    if ( v3 >= 0x160 )
    {
      v71 = ((unsigned __int8)*(_DWORD *)(v8 + 5368) - 1) & 3;
      do
      {
        *(_QWORD *)v4 = *(_QWORD *)(v8 + 8 * v71 + 5376);
        v72 = 10 * v71;
        v4 += 22;
        v71 = ((_BYTE)v71 - 1) & 3;
        *((_OWORD *)v4 - 5) = *(_OWORD *)(v8 + 8 * v72 + 5408);
        *((_OWORD *)v4 - 4) = *(_OWORD *)(v8 + 8 * v72 + 5424);
        *((_OWORD *)v4 - 3) = *(_OWORD *)(v8 + 8 * v72 + 5440);
        *((_OWORD *)v4 - 2) = *(_OWORD *)(v8 + 8 * v72 + 5456);
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v8 + 8 * v72 + 5472);
        --v17;
      }
      while ( v17 );
    }
  }
  return 0LL;
}
