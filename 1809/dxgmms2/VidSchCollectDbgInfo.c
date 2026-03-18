/*
 * XREFs of VidSchCollectDbgInfo @ 0x1C00CAA90
 * Callers:
 *     <none>
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C0002948 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     memmove @ 0x1C001A680 (memmove.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0039458 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCaptureProcessName @ 0x1C003947C (VidSchiCaptureProcessName.c)
 *     ?VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003A3E0 (-VidSchiGetNumFlipQueueEntriesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003A45C (-VidSchiGetNumHistoryLayersUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C003A508 (-VidSchiGetNumOverlayPlanesUsed@@YAIPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchQueryDmaHeader @ 0x1C00CB298 (VidSchQueryDmaHeader.c)
 *     VidSchiGetNumFlipAllocAttribs @ 0x1C00CB5A8 (VidSchiGetNumFlipAllocAttribs.c)
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
  struct _VIDSCH_GLOBAL *v12; // rcx
  unsigned int v13; // r10d
  int NumHistoryLayersUsed; // eax
  unsigned int v15; // edi
  int v16; // r12d
  unsigned int v17; // ebx
  int NumFlipAllocAttribs; // eax
  __int64 v19; // r11
  int v20; // edi
  size_t v21; // r12
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rcx
  unsigned int v25; // ecx
  __int64 v26; // r12
  char *v27; // r11
  char *v28; // rax
  char *v29; // rdi
  char *v30; // rsi
  _DWORD *v31; // rdx
  _DWORD *v32; // r10
  __int64 v33; // rcx
  char *v34; // r15
  unsigned int v35; // r12d
  __int64 v36; // rcx
  unsigned int v37; // r11d
  unsigned int v38; // eax
  int v39; // edx
  unsigned int v40; // eax
  int v41; // ecx
  unsigned int v42; // ecx
  __int64 v43; // rbx
  unsigned int v44; // edx
  unsigned int v45; // r8d
  bool v46; // zf
  unsigned int v47; // edx
  int v48; // eax
  char v49; // cl
  unsigned int v50; // r9d
  char v51; // cl
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
  int v74; // [rsp+30h] [rbp-59h]
  int v75; // [rsp+34h] [rbp-55h]
  int NumFlipQueueEntriesUsed; // [rsp+38h] [rbp-51h]
  __int64 v77; // [rsp+40h] [rbp-49h]
  __int64 v78; // [rsp+48h] [rbp-41h]
  __int64 v79; // [rsp+48h] [rbp-41h]
  int NumOverlayPlanesUsed; // [rsp+58h] [rbp-31h]
  int v81; // [rsp+5Ch] [rbp-2Dh]
  size_t v82; // [rsp+60h] [rbp-29h]
  __int64 v83; // [rsp+68h] [rbp-21h] BYREF
  unsigned int *v84; // [rsp+70h] [rbp-19h]
  unsigned int v85; // [rsp+78h] [rbp-11h]
  unsigned int v86; // [rsp+7Ch] [rbp-Dh]
  int v87; // [rsp+80h] [rbp-9h]
  unsigned int v88; // [rsp+84h] [rbp-5h]
  unsigned int v89; // [rsp+88h] [rbp-1h]
  char *v90; // [rsp+90h] [rbp+7h]
  unsigned int v91; // [rsp+F0h] [rbp+67h]
  unsigned int v92; // [rsp+F0h] [rbp+67h]
  unsigned int v95; // [rsp+108h] [rbp+7Fh]

  v3 = a3;
  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 2528LL);
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
    NumOverlayPlanesUsed = VidSchiGetNumOverlayPlanesUsed(*(struct _VIDSCH_GLOBAL **)(v6 + 528), *(_DWORD *)(a1 + 80));
    NumHistoryLayersUsed = VidSchiGetNumHistoryLayersUsed(v12, v13);
    v15 = *(_DWORD *)(a1 + 80);
    v81 = NumHistoryLayersUsed;
    v16 = NumHistoryLayersUsed;
    NumFlipQueueEntriesUsed = VidSchiGetNumFlipQueueEntriesUsed((struct _VIDSCH_GLOBAL *)v8, v15);
    v17 = ((_DWORD)v4 + 163) & 0xFFFFFFF8;
    LODWORD(v78) = v17 - (_DWORD)v4;
    NumFlipAllocAttribs = VidSchiGetNumFlipAllocAttribs(v8, v15);
    v19 = 4LL;
    v20 = v17 + 280 * NumFlipAllocAttribs + 48 * v16 - (_DWORD)v4;
    HIDWORD(v78) = v17 + 280 * NumFlipAllocAttribs - (_DWORD)v4;
    v21 = (unsigned int)(v20 + 48 * NumFlipQueueEntriesUsed);
    v82 = v21;
    if ( v3 >= v21 )
    {
      memset(v4, 0, (unsigned int)v21);
      *v4 = v20 + 48 * NumFlipQueueEntriesUsed;
      v4[1] = 2;
      v4[3] = VidSchiGetVSyncState(v8);
      v4[2] = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v4 + 16) = v78;
      v4[34] = v20;
      v22 = (unsigned int)v4[2];
      if ( (_DWORD)v22 != -1 && (unsigned int)v22 < *(_DWORD *)(v8 + 40) )
      {
        v23 = *(_QWORD *)(v8 + 8 * v22 + 2576);
        v79 = v23;
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 16);
          if ( v24 )
          {
            VidSchiCaptureProcessName(v24, (_BYTE *)v4 + 16);
            v25 = 0;
            v91 = 0;
            v26 = 0LL;
            v95 = 0;
            v4[8] = *(_DWORD *)(v23 + 4);
            v27 = (char *)v4 + (unsigned int)v4[32];
            v28 = (char *)v4 + (unsigned int)v4[33];
            v29 = (char *)v4 + (unsigned int)v4[34];
            v90 = v27;
            v74 = 0;
            v75 = 0;
            if ( *(_DWORD *)(v8 + 140) )
            {
              v30 = v28;
              do
              {
                v31 = *(_DWORD **)(v23 + 8 * v26 + 24);
                if ( v31 )
                {
                  v32 = v31 + 306;
                  v33 = 280LL * v25;
                  *(_DWORD *)&v27[v33] = v26;
                  v34 = &v27[v33 + 24];
                  v35 = v91;
                  *(_DWORD *)&v27[v33 + 4] = v31[8];
                  *(_DWORD *)&v27[v33 + 8] = v31[9];
                  *(_DWORD *)&v27[v33 + 12] = v31[10];
                  *(_DWORD *)&v27[v33 + 16] = v31[11];
                  *(_DWORD *)&v27[v33 + 20] = v31[13];
                  v36 = 64LL;
                  v37 = v95;
                  v77 = 64LL;
                  do
                  {
                    v38 = *(v32 - 29);
                    if ( v38 <= 0xC && (v39 = 4673, _bittest(&v39, v38)) )
                    {
                      *(_DWORD *)v34 = -1;
                    }
                    else
                    {
                      *(_DWORD *)v34 = v37;
                      v40 = 0;
                      v41 = *(v32 - 25);
                      if ( (v41 & 1) == 0 )
                      {
                        do
                        {
                          if ( v40 >= *(_DWORD *)(v8 + 64) )
                            break;
                          ++v40;
                        }
                        while ( !_bittest(&v41, v40) );
                      }
                      v42 = 0;
                      v83 = v8;
                      if ( v40 != *(_DWORD *)(v8 + 64) )
                        v42 = v40;
                      v92 = v42;
                      v43 = 6LL * v37;
                      *(_DWORD *)&v29[8 * v43] = v35;
                      *(_DWORD *)&v29[8 * v43 + 44] ^= (*(_DWORD *)&v29[48 * v37 + 44] ^ **(_DWORD **)v32) & 0x3FF;
                      v84 = *(unsigned int **)v32;
                      v44 = *v84;
                      v45 = *v84 & 0x3FF;
                      v46 = *(_BYTE *)(v8 + 144) == 0;
                      v85 = v45;
                      if ( v46 )
                        v47 = 0;
                      else
                        v47 = (v44 >> 10) & 0x3FF;
                      v87 = 0;
                      v46 = !_BitScanForward((unsigned int *)&v48, v45);
                      v49 = -1;
                      v86 = v47;
                      if ( !v46 )
                        v49 = v48;
                      v50 = v49;
                      v51 = -1;
                      v46 = !_BitScanForward((unsigned int *)&v52, v47);
                      v88 = v50;
                      if ( !v46 )
                        v51 = v52;
                      v53 = v51;
                      v89 = v51;
                      while ( v45 || v47 )
                      {
                        if ( v50 < v53 )
                        {
                          v54 = 6LL * v35;
                          *(_QWORD *)&v30[8 * v54] = *(_QWORD *)(((unsigned __int64)(v87
                                                                                   + v92
                                                                                   * *(_DWORD *)(*(_QWORD *)v32 + 4LL)) << 6)
                                                               + *(_QWORD *)v32
                                                               + *(_DWORD *)(*(_QWORD *)v32 + 4LL)
                                                               * ((8 * *(_DWORD *)(*(_QWORD *)v32 + 8LL) + 191) & 0xFFFFFFF8)
                                                               + 40);
                          v55 = *(_QWORD *)v32;
                          v56 = v87 * ((8 * *(_DWORD *)(*(_QWORD *)v32 + 8LL) + 191) & 0xFFFFFFF8);
                          ++v35;
                          *(_OWORD *)&v30[8 * v54 + 8] = *(_OWORD *)(v56 + *(_QWORD *)v32 + 160);
                          *(_OWORD *)&v30[8 * v54 + 24] = *(_OWORD *)(v56 + v55 + 176);
                          *(_DWORD *)&v30[8 * v54 + 40] = *(_DWORD *)(v56 + v55 + 192);
                        }
                        VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v83);
                        v53 = v89;
                        v47 = v86;
                        v45 = v85;
                        v50 = v88;
                      }
                      *(_DWORD *)&v29[8 * v43 + 4] = *(v32 - 29);
                      *(_DWORD *)&v29[8 * v43 + 8] = *(v32 - 28);
                      v91 = v35;
                      *(_DWORD *)&v29[8 * v43 + 44] ^= (*(_DWORD *)&v29[8 * v43 + 44] ^ (*(v32 - 27) << 10)) & 0x3C00;
                      v57 = *(_DWORD *)&v29[8 * v43 + 44];
                      *(_DWORD *)&v29[8 * v43 + 12] = *(v32 - 25);
                      *(_QWORD *)&v29[8 * v43 + 16] = *((_QWORD *)v32 - 10);
                      *(_QWORD *)&v29[8 * v43 + 24] = *((_QWORD *)v32 - 9);
                      *(_DWORD *)&v29[8 * v43 + 36] = *(v32 - 14);
                      v58 = v57 ^ (v57 ^ (*((unsigned __int8 *)v32 - 104) << 18)) & 0x40000;
                      *(_DWORD *)&v29[8 * v43 + 44] = v58;
                      v29[8 * v43 + 40] = *((_BYTE *)v32 - 92);
                      v29[8 * v43 + 41] = *((_BYTE *)v32 - 88);
                      v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)((unsigned __int16)*(v32 - 12) << 10)) & 0x4000;
                      *(_DWORD *)&v29[8 * v43 + 44] = v59;
                      v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*(v32 - 12) << 10)) & 0x8000;
                      *(_DWORD *)&v29[8 * v43 + 44] = v60;
                      v61 = v60 ^ (v60 ^ (*(v32 - 12) << 9)) & 0x10000;
                      v36 = v77;
                      *(_DWORD *)&v29[8 * v43 + 44] = v61;
                      *(_DWORD *)&v29[8 * v43 + 44] = v61 ^ (v61 ^ (*(v32 - 12) << 9)) & 0x20000;
                      ++v37;
                    }
                    v34 += 4;
                    v32 += 324;
                    v77 = --v36;
                  }
                  while ( v36 );
                  LODWORD(v26) = v75;
                  v25 = v74 + 1;
                  v23 = v79;
                  v95 = v37;
                  v27 = v90;
                  ++v74;
                }
                v26 = (unsigned int)(v26 + 1);
                v75 = v26;
              }
              while ( (unsigned int)v26 < *(_DWORD *)(v8 + 140) );
              v4 = a2;
              v3 = a3;
            }
            v21 = v82;
          }
        }
      }
      v62 = 0LL;
      v4[14] = *(_DWORD *)(v8 + 1752);
      v4[15] = *(_DWORD *)(v8 + 40);
      v4[10] = *(_DWORD *)(v8 + 140);
      v4[11] = NumOverlayPlanesUsed;
      v4[12] = v81;
      v4[13] = NumFlipQueueEntriesUsed;
      for ( v4[9] = *(_DWORD *)(v8 + 64); (unsigned int)v62 < *(_DWORD *)(v8 + 40); v62 = (unsigned int)(v62 + 1) )
        v4[v62 + 16] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 2520LL) + 112LL)
                                 + 3760LL * (unsigned int)v62
                                 + 1068);
      v3 -= v21;
      v19 = 4LL;
      v4 = (_DWORD *)((char *)v4 + v21);
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
          v69 = ((unsigned __int8)*(_DWORD *)(v67 + 33276) - 1) & 3;
          do
          {
            *(_QWORD *)v4 = *(_QWORD *)(v67 + 8 * v69 + 33280);
            v70 = 10 * v69;
            v69 = ((_BYTE)v69 - 1) & 3;
            *(_OWORD *)(v4 + 2) = *(_OWORD *)(v67 + 8 * v70 + 33312);
            *(_OWORD *)(v4 + 6) = *(_OWORD *)(v67 + 8 * v70 + 33328);
            *(_OWORD *)(v4 + 10) = *(_OWORD *)(v67 + 8 * v70 + 33344);
            *(_OWORD *)(v4 + 14) = *(_OWORD *)(v67 + 8 * v70 + 33360);
            *(_OWORD *)(v4 + 18) = *(_OWORD *)(v67 + 8 * v70 + 33376);
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
        --v19;
      }
      while ( v19 );
    }
  }
  return 0LL;
}
