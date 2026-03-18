/*
 * XREFs of ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800A7240
 * Callers:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800A5348 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1800A6014 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801995FC (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18022B998 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18022D8EC (-BuildCommandList@CFramebuffer@CComputeScribbleRenderer@@AEAAJPEAVCComputeScribbleStopwatch@@AEA.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800A6674 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800A7760 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800A8078 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800A8440 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180161868 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CRegion::AppendRects<tagRECT>(
        struct FastRegion::Internal::CRgnData **this,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v3; // r12d
  struct FastRegion::Internal::CRgnData **v4; // r13
  unsigned int v5; // r15d
  unsigned int v6; // edi
  int *v7; // rax
  int v8; // r8d
  int v9; // r9d
  int v10; // r10d
  int v11; // r11d
  struct FastRegion::Internal::CRgnData *v12; // rbx
  int *v13; // r14
  int v14; // edx
  const struct FastRegion::Internal::CRgnData *v15; // rbx
  int v16; // r8d
  int v17; // eax
  int v18; // r9d
  int v19; // r10d
  int v20; // eax
  SIZE_T v21; // r8
  FastRegion::Internal::CRgnData *v22; // rcx
  char *v23; // rdi
  int v24; // esi
  _DWORD *v25; // rbx
  int v26; // r12d
  int v27; // esi
  int v28; // eax
  int v29; // ecx
  int v30; // esi
  __int64 v31; // r9
  _DWORD *v32; // rax
  signed __int64 v33; // rcx
  int v34; // r13d
  _DWORD *v35; // r11
  __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r9
  struct FastRegion::Internal::CRgnData *v40; // rbx
  FastRegion::Internal::CRgnData *v41; // rdi
  int *v42; // r14
  int v43; // esi
  int v44; // eax
  int v46; // eax
  SIZE_T v47; // r8
  FastRegion::Internal::CRgnData *v48; // rcx
  SIZE_T v49; // r8
  SIZE_T v50; // r8
  struct FastRegion::Internal::CRgnData *v51; // rdi
  FastRegion::Internal::CRgnData *v52; // rax
  FastRegion::Internal::CRgnData *v53; // rax
  int v54; // ebx
  unsigned int v55; // [rsp+28h] [rbp-E0h]
  __int64 v57; // [rsp+30h] [rbp-D8h]
  struct FastRegion::Internal::CRgnData *v59; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v60[18]; // [rsp+50h] [rbp-B8h] BYREF
  void *v61; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v62[3]; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v63[2]; // [rsp+ACh] [rbp-5Ch] BYREF
  _DWORD v64[13]; // [rsp+B4h] [rbp-54h] BYREF
  int v65; // [rsp+E8h] [rbp-20h] BYREF
  void *v66; // [rsp+F0h] [rbp-18h]
  _BYTE v67[16]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v68[240]; // [rsp+108h] [rbp+0h] BYREF

  v3 = a3;
  v4 = this;
  v5 = 0;
  v57 = a2;
  v59 = (struct FastRegion::Internal::CRgnData *)v60;
  v60[0] = 0;
  if ( !a3 )
  {
LABEL_45:
    v24 = 0;
    goto LABEL_46;
  }
  while ( 1 )
  {
    v6 = v5 + 5;
    if ( v3 < v5 + 5 )
      v6 = v3;
    v7 = (int *)(a2 + 16LL * v5);
    v55 = v6;
    v8 = *v7;
    v9 = v7[2];
    v10 = v7[1];
    v11 = v7[3];
    if ( *v7 >= v9 || v10 >= v11 )
    {
      *(_DWORD *)v59 = 0;
    }
    else
    {
      v12 = v59;
      *(_DWORD *)v59 = 2;
      *((_DWORD *)v12 + 1) = v8;
      *((_DWORD *)v12 + 2) = v9;
      *((_DWORD *)v12 + 3) = v10;
      *((_DWORD *)v12 + 4) = 16;
      *((_DWORD *)v12 + 7) = v8;
      *((_DWORD *)v12 + 8) = v9;
      *((_DWORD *)v12 + 5) = v11;
      *((_DWORD *)v12 + 6) = 16;
      a2 = v57;
    }
    if ( ++v5 < v6 )
    {
      v13 = (int *)(16LL * v5 + a2 + 8);
      while ( 1 )
      {
        v14 = *(v13 - 2);
        v15 = (const struct FastRegion::Internal::CRgnData *)v62;
        v16 = *v13;
        v17 = *(v13 - 1);
        v18 = v13[1];
        v61 = v62;
        if ( v14 >= v16 || v17 >= v18 )
        {
          v19 = 0;
        }
        else
        {
          v63[0] = v17;
          v62[1] = v14;
          v62[2] = v16;
          v64[2] = v14;
          v63[1] = (unsigned int)v68 - 76 - (unsigned int)v63;
          v19 = 2;
          v64[3] = v16;
          v64[0] = v18;
          v64[1] = (unsigned int)v68 - 76 - (unsigned int)v64 + 8;
        }
        v62[0] = v19;
        if ( v19 )
          break;
        v24 = 0;
LABEL_32:
        if ( v24 < 0 )
          goto LABEL_46;
        ++v5;
        v13 += 4;
        if ( v5 >= v6 )
        {
          v3 = a3;
          v4 = this;
          goto LABEL_35;
        }
      }
      if ( *(_DWORD *)v59 )
      {
        v20 = FastRegion::Internal::CRgnData::EstimateSizeUnion(v59, (const struct FastRegion::Internal::CRgnData *)v62);
        v21 = v20;
        v22 = (FastRegion::Internal::CRgnData *)v67;
        v66 = v67;
        v65 = v20;
        if ( (unsigned __int64)v20 <= 0x100 )
          goto LABEL_15;
        if ( !v20 )
          v21 = 1LL;
        v53 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v21);
        v22 = v53;
        if ( v53 )
        {
          v15 = (const struct FastRegion::Internal::CRgnData *)v61;
          v66 = v53;
LABEL_15:
          FastRegion::Internal::CRgnData::Union(v22, v59, v15);
          v23 = (char *)v66;
          v24 = 0;
          if ( *(_DWORD *)v66 )
          {
            if ( v67 == v66 )
            {
              v25 = v59;
              v26 = (_DWORD)v66 + 12;
              v27 = *((_DWORD *)v66 + 2 * *(_DWORD *)v66 + 2)
                  + 8 * *(_DWORD *)v66
                  - *((_DWORD *)v66 + 4)
                  - 12
                  + 8 * (*(_DWORD *)v66 - 1)
                  + 24;
              v28 = v60[0];
              if ( v60 == (_DWORD *)v59 )
                v28 = 60;
              if ( v28 >= v27 )
                goto LABEL_20;
              v49 = v27;
              if ( !v27 )
                v49 = 1LL;
              v25 = HeapAlloc(WPF::g_processHeap, 0, v49);
              if ( v25 )
              {
                FastRegion::CRegion::FreeMemory((void **)&v59);
                v59 = (struct FastRegion::Internal::CRgnData *)v25;
                v60[0] = v27;
LABEL_20:
                v29 = *(_DWORD *)v23;
                v30 = 0;
                *v25 = *(_DWORD *)v23;
                v25[1] = *((_DWORD *)v23 + 1);
                v25[2] = *((_DWORD *)v23 + 2);
                v31 = (__int64)&v23[*((int *)v23 + 4) + 12];
                v32 = &v25[2 * v29 + 3];
                v33 = ((char *)&v25[2 * v29] - &v23[*((int *)v23 + 4)]) >> 2;
                if ( (int)*v25 > 0 )
                {
                  v34 = 4 * v33;
                  v35 = v25 + 3;
                  do
                  {
                    *v35 = *(_DWORD *)((char *)v35 + v23 - (char *)v25);
                    v35 += 2;
                    v36 = v30++;
                    v25[2 * v36 + 4] = v34
                                     + (_DWORD)v23
                                     + 8 * v36
                                     + *(_DWORD *)&v23[8 * v36 + 16]
                                     - ((_DWORD)v25
                                      + 8 * v36);
                  }
                  while ( v30 < *v25 );
                }
                v37 = (unsigned __int64)((int)v23
                                       + 4
                                       + 8 * *(_DWORD *)v23
                                       + *(_DWORD *)&v23[8 * *(int *)v23 + 8]
                                       - *((_DWORD *)v23 + 4)
                                       - v26) >> 2;
                v38 = (int)v37;
                if ( (int)v37 > 0 )
                {
                  v39 = v31 - (_QWORD)v32;
                  do
                  {
                    *v32 = *(_DWORD *)((char *)v32 + v39);
                    ++v32;
                    --v38;
                  }
                  while ( v38 );
                }
                v24 = 0;
                goto LABEL_27;
              }
              v24 = -2147024882;
            }
            else
            {
              v54 = v65;
              v66 = v67;
              v65 = 0;
              FastRegion::CRegion::FreeMemory((void **)&v59);
              v59 = (struct FastRegion::Internal::CRgnData *)v23;
              v60[0] = v54;
            }
          }
          else
          {
            *(_DWORD *)v59 = 0;
          }
LABEL_27:
          if ( v67 != v66 )
            WPF::ProcessHeapImpl::Free(v66);
          v6 = v55;
          goto LABEL_30;
        }
        FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v65);
        v24 = -2147024882;
      }
      else
      {
        v24 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v59, (const struct CRegion *)&v61);
      }
LABEL_30:
      if ( v62 != v61 )
        WPF::ProcessHeapImpl::Free(v61);
      goto LABEL_32;
    }
LABEL_35:
    v40 = v59;
    if ( *(_DWORD *)v59 )
      break;
LABEL_44:
    if ( v5 >= v3 )
      goto LABEL_45;
    a2 = v57;
  }
  v41 = *v4;
  if ( !*(_DWORD *)*v4 )
  {
    if ( v4 == &v59 )
    {
LABEL_42:
      v24 = 0;
      goto LABEL_43;
    }
    v42 = (int *)(v4 + 1);
    v43 = *((_DWORD *)v59 + 2 * *(_DWORD *)v59 + 2)
        - *((_DWORD *)v59 + 4)
        + 8 * *(_DWORD *)v59
        - 12
        + 8 * (*(_DWORD *)v59 - 1)
        + 24;
    if ( v4 + 1 == (struct FastRegion::Internal::CRgnData **)v41 )
      v44 = 60;
    else
      v44 = *v42;
    if ( v44 >= v43 )
    {
LABEL_41:
      FastRegion::Internal::CRgnData::Copy(v41, v40);
      goto LABEL_42;
    }
    v50 = v43;
    if ( !v43 )
      v50 = 1LL;
    v51 = (struct FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v50);
    if ( v51 )
    {
      FastRegion::CRegion::FreeMemory((void **)v4);
      *v4 = v51;
      *v42 = v43;
      v41 = *v4;
      goto LABEL_41;
    }
    v24 = -2147024882;
LABEL_43:
    if ( v24 < 0 )
      goto LABEL_46;
    goto LABEL_44;
  }
  v46 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v4, v59);
  v47 = v46;
  v48 = (FastRegion::Internal::CRgnData *)v67;
  v66 = v67;
  v65 = v46;
  if ( (unsigned __int64)v46 <= 0x100 )
  {
LABEL_50:
    FastRegion::Internal::CRgnData::Union(v48, v41, v59);
    v24 = FastRegion::CRegion::SaveResult((void **)v4, (struct FastRegion::Internal::CWorkBuffer *)&v65);
    if ( v67 != v66 )
      WPF::ProcessHeapImpl::Free(v66);
    goto LABEL_43;
  }
  if ( !v46 )
    v47 = 1LL;
  v52 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v47);
  v48 = v52;
  if ( v52 )
  {
    v41 = *v4;
    v66 = v52;
    goto LABEL_50;
  }
  FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v65);
  v24 = -2147024882;
LABEL_46:
  if ( v60 != (_DWORD *)v59 )
    WPF::ProcessHeapImpl::Free(v59);
  return (unsigned int)v24;
}
