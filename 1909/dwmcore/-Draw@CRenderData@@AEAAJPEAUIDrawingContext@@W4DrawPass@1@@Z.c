/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800997B0
 * Callers:
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058794 (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180099630 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180099660 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18003523C (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180035D18 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x18009735C (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV-$span@$$CBE$0-0@gsl@.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800A1DB4 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x1800C8E40 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800CC96C (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801860D4 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE18C (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE2FC (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

__int64 __fastcall CRenderData::Draw(_QWORD *a1, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 *v5; // r15
  CRenderData *v6; // r10
  int v7; // r14d
  struct CTreeData *v8; // r11
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r13
  __int128 v12; // xmm6
  _QWORD *v13; // rax
  unsigned int *v14; // rdi
  int v15; // esi
  CDirtyRegion *v16; // rcx
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  _BYTE *v20; // rbx
  _BYTE *v21; // rbx
  _BYTE *v22; // rbx
  Mesh::MeshGraph *v23; // rcx
  void *v24; // rbx
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v28; // r10
  char v29; // al
  signed int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  signed int v33; // eax
  unsigned __int64 v34; // rax
  bool v35; // sf
  unsigned __int64 v36; // r8
  int v37; // eax
  __int64 v38; // r9
  void *v39; // r8
  _QWORD *v40; // rax
  signed int v41; // eax
  __int64 v42; // rcx
  CDirtyRegion *v43; // rcx
  signed int v44; // eax
  signed int v45; // eax
  signed int v46; // eax
  signed int DrawListCacheForCommandRun; // eax
  signed int v48; // eax
  __int64 v49; // rcx
  __int64 *TreeDataListHead; // rax
  __int64 v51; // r10
  HANDLE v52; // rax
  _QWORD *v53; // rcx
  unsigned int *v54; // rcx
  unsigned int v55; // eax
  int NextItemSafe; // eax
  unsigned int v57; // r9d
  int v58; // eax
  HANDLE ProcessHeap; // rax
  HANDLE v60; // rax
  HANDLE v61; // rax
  unsigned int v62; // [rsp+20h] [rbp-E0h]
  char v63; // [rsp+40h] [rbp-C0h]
  bool v64[15]; // [rsp+41h] [rbp-BFh] BYREF
  int v65; // [rsp+50h] [rbp-B0h]
  unsigned int v66; // [rsp+54h] [rbp-ACh] BYREF
  int v67[2]; // [rsp+58h] [rbp-A8h]
  struct CDrawingContext *v68; // [rsp+60h] [rbp-A0h]
  struct CTreeData *v69; // [rsp+68h] [rbp-98h]
  void *v70; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v71; // [rsp+78h] [rbp-88h]
  _QWORD *v72; // [rsp+80h] [rbp-80h]
  _QWORD *v73; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v74; // [rsp+90h] [rbp-70h]
  unsigned int v75; // [rsp+98h] [rbp-68h]
  __int128 v76; // [rsp+A0h] [rbp-60h]
  __int64 v77[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v78; // [rsp+C0h] [rbp-40h]
  _QWORD v79[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v80; // [rsp+F0h] [rbp-10h]
  _BYTE *v81; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE *v82; // [rsp+100h] [rbp+0h]
  int *v83; // [rsp+108h] [rbp+8h]
  _BYTE v84[32]; // [rsp+110h] [rbp+10h] BYREF
  int v85; // [rsp+130h] [rbp+30h] BYREF
  void *v86; // [rsp+138h] [rbp+38h]
  __int64 v87; // [rsp+140h] [rbp+40h]
  Mesh::MeshGraph *v88; // [rsp+148h] [rbp+48h]
  __int64 v89; // [rsp+150h] [rbp+50h]
  Mesh::MeshGraph *v90; // [rsp+158h] [rbp+58h]
  __int64 v91; // [rsp+168h] [rbp+68h]
  int v92; // [rsp+170h] [rbp+70h]
  char v93; // [rsp+184h] [rbp+84h]
  __int64 v94; // [rsp+188h] [rbp+88h]
  LPVOID v95; // [rsp+190h] [rbp+90h] BYREF
  _BYTE *v96; // [rsp+198h] [rbp+98h]
  LPVOID *v97; // [rsp+1A0h] [rbp+A0h]
  _BYTE v98[960]; // [rsp+1B0h] [rbp+B0h] BYREF
  LPVOID v99; // [rsp+570h] [rbp+470h] BYREF
  _BYTE *v100; // [rsp+578h] [rbp+478h]
  int *v101; // [rsp+580h] [rbp+480h]
  _BYTE v102[960]; // [rsp+590h] [rbp+490h] BYREF
  int v103; // [rsp+950h] [rbp+850h] BYREF
  LPVOID lpMem; // [rsp+958h] [rbp+858h] BYREF
  _BYTE *v105; // [rsp+960h] [rbp+860h]
  char *v106; // [rsp+968h] [rbp+868h]
  _BYTE v107[60]; // [rsp+970h] [rbp+870h] BYREF
  char v108; // [rsp+9ACh] [rbp+8ACh] BYREF
  __int64 v109; // [rsp+9B0h] [rbp+8B0h]
  CDirtyRegion *v110; // [rsp+9C0h] [rbp+8C0h]
  __int16 v111; // [rsp+9C8h] [rbp+8C8h]
  char v112; // [rsp+9CAh] [rbp+8CAh]

  *(_QWORD *)v67 = a1;
  v80 = 0LL;
  memset(v79, 0, sizeof(v79));
  v3 = a1 + 7;
  v5 = (__int64 *)a2;
  v6 = (CRenderData *)a1;
  v85 = 0;
  v81 = v84;
  v7 = 0;
  v86 = 0LL;
  v82 = v84;
  v8 = 0LL;
  v87 = 0LL;
  v83 = &v85;
  v95 = v98;
  v96 = v98;
  v97 = &v99;
  v99 = v102;
  v100 = v102;
  v101 = &v103;
  lpMem = v107;
  v105 = v107;
  v106 = &v108;
  v9 = (_QWORD *)a1[11];
  v88 = 0LL;
  v90 = 0LL;
  v89 = 0LL;
  v91 = 0LL;
  v92 = 0;
  v93 = 5;
  v94 = 0LL;
  v103 = 0;
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0;
  v112 = 0;
  v68 = 0LL;
  v69 = 0LL;
  *(_QWORD *)&v64[7] = 0LL;
  v63 = 0;
  if ( v9 )
  {
    v53 = (_QWORD *)a1[8];
    if ( (_QWORD *)*v53 != v3 )
      __fastfail(3u);
    *v9 = v3;
    v9[1] = v53;
    *v53 = v9;
    v3[1] = v9;
    v3[4] = 0LL;
  }
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v76 = 0LL;
  v71 = v3;
  v65 = 0;
  if ( a3 )
    goto LABEL_3;
  v68 = (struct CDrawingContext *)a2;
  if ( *(_BYTE *)(a2 + 6048) )
  {
    if ( *(_BYTE *)(a2 + 6049) )
      v10 = *(_QWORD *)(a2 + 3336);
    else
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 6056) + 24LL);
  }
  v28 = *(_QWORD *)(a2 + 6056);
  v69 = 0LL;
  if ( *(_BYTE *)(v28 + 32) )
  {
    v8 = (struct CTreeData *)(v10 + 328);
  }
  else
  {
    TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)v10);
    if ( !TreeDataListHead )
      goto LABEL_54;
    v10 = *TreeDataListHead;
    if ( (__int64 *)*TreeDataListHead == TreeDataListHead )
      goto LABEL_54;
    while ( *(_QWORD *)(v10 + 32) != v51 )
    {
      v10 = *(_QWORD *)v10;
      if ( (__int64 *)v10 == TreeDataListHead )
        goto LABEL_54;
    }
    v8 = (struct CTreeData *)(v10 - 224);
  }
  v69 = v8;
LABEL_54:
  if ( !v8 )
  {
    v15 = -2003292412;
    v62 = 205;
LABEL_144:
    v57 = v15;
    goto LABEL_146;
  }
  v6 = *(CRenderData **)v67;
  v10 = 0LL;
LABEL_3:
  v13 = (_QWORD *)*v3;
  if ( v3 == (_QWORD *)*v3 )
  {
    v14 = v74;
    v15 = 1;
    goto LABEL_5;
  }
  v36 = *((unsigned int *)v13 + 5);
  v14 = (unsigned int *)(v13 + 3);
  v73 = v13 + 3;
  v11 = v13;
  v75 = v36;
  v37 = -2147467259;
  if ( v36 )
  {
    if ( v36 < 8 || (a2 = *v14, (unsigned int)a2 < 8) || (a2 & 3) != 0 || (v38 = (unsigned int)a2, a2 > v36) )
    {
      LODWORD(a2) = v65;
      v39 = v70;
    }
    else
    {
      v39 = v14 + 1;
      LODWORD(a2) = a2 - 4;
      *(_DWORD *)&v64[3] = v14[1];
      v14 = (unsigned int *)((char *)v14 + v38);
      v37 = 0;
    }
    v15 = v37;
  }
  else
  {
    LODWORD(a2) = 0;
    v39 = 0LL;
    v37 = 1;
    v15 = 1;
    if ( (_QWORD *)*v11 != v3 )
    {
      v15 = -2147467259;
      goto LABEL_5;
    }
  }
  if ( !v37 )
  {
    *(_QWORD *)&v76 = (int)a2;
    if ( (a2 & 0x80000000) != 0LL || (*((_QWORD *)&v76 + 1) = v39) == 0LL && (_DWORD)a2 )
    {
LABEL_127:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v12 = v76;
  }
LABEL_5:
  if ( v15 < 0 )
  {
    v62 = 210;
    goto LABEL_144;
  }
  if ( v15 )
  {
LABEL_7:
    if ( v15 == 1 )
      v15 = 0;
    goto LABEL_9;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)&v64[7] || a3 )
    {
      v29 = v63;
    }
    else
    {
      DrawListCacheForCommandRun = CRenderData::GetDrawListCacheForCommandRun(
                                     v6,
                                     v68,
                                     v8,
                                     (unsigned int)v10,
                                     (struct CDrawListCache **)&v64[7]);
      v15 = DrawListCacheForCommandRun;
      if ( DrawListCacheForCommandRun < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DrawListCacheForCommandRun, 0xE1u, 0LL);
        goto LABEL_9;
      }
      v29 = 0;
      v63 = 0;
    }
    v64[0] = 0;
    if ( !a3 )
    {
      *(_OWORD *)v77 = v12;
      v44 = CRenderData::TryDrawCommandAsDrawList(
              *(CRenderData **)v67,
              v68,
              *(__int64 *)&v64[7],
              (struct CDrawListEntryBuilder *)v79,
              v7 != 0,
              *(int *)&v64[3],
              (__int64)v77,
              v64);
      v15 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v44, 0xEEu, 0LL);
        goto LABEL_9;
      }
      if ( v64[0] )
      {
        v63 = 1;
        goto LABEL_66;
      }
      v29 = v63;
    }
    if ( v29 )
    {
      v48 = CRenderData::FlushDrawListCache(
              (CRenderData *)v10,
              v68,
              *(struct CDrawListCache **)&v64[7],
              (struct CDrawListEntryBuilder *)v79);
      v15 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0xFEu, 0LL);
        goto LABEL_9;
      }
      v10 = *(_QWORD *)&v64[7];
      if ( *(_QWORD *)&v64[7] )
      {
        *(_QWORD *)&v64[7] = 0LL;
        CDirtyRegion::Release((CDirtyRegion *)v10);
      }
      v63 = 0;
    }
    if ( *(_DWORD *)&v64[3] == 544 )
    {
      v45 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v5 + 104))(
              v5,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v67 + 120LL) + 8LL * *(unsigned int *)(*((_QWORD *)&v76 + 1) + 4LL)));
      v15 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v45, 0x10Bu, 0LL);
        goto LABEL_9;
      }
      ++v7;
    }
    else
    {
      if ( *(_DWORD *)&v64[3] != 543 )
      {
        v30 = (*(__int64 (__fastcall **)(__int64 *))(*v5 + 112))(v5);
        v15 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x123u, 0LL);
          goto LABEL_9;
        }
        *(_OWORD *)v77 = v12;
        v33 = CRenderData::DrawCommandAsLegacy(*(__int64 *)v67, v5, v32, *(int *)&v64[3], (__int64)v77);
        v15 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v33, 0x125u, 0LL);
          goto LABEL_9;
        }
        goto LABEL_65;
      }
      if ( !v7 )
      {
        v15 = -2003292412;
        v62 = 283;
        goto LABEL_144;
      }
      v46 = (*(__int64 (__fastcall **)(__int64 *))(*v5 + 96))(v5);
      v15 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v46, 0x115u, 0LL);
        goto LABEL_9;
      }
      --v7;
    }
LABEL_65:
    if ( v15 == 1 )
      break;
LABEL_66:
    v15 = -2147467259;
    v34 = (unsigned __int64)v73 + v75 - (_QWORD)v14;
    if ( v34 )
    {
      if ( v34 >= 8 )
      {
        a2 = *v14;
        if ( (unsigned int)a2 >= 8 && (a2 & 3) == 0 && a2 <= v34 )
        {
          v10 = (__int64)(v14 + 1);
          *(_DWORD *)&v64[3] = v14[1];
          v14 = (unsigned int *)((char *)v14 + a2);
          v70 = (void *)v10;
          v66 = a2 - 4;
          v15 = 0;
        }
      }
    }
    else
    {
      v40 = (_QWORD *)*v11;
      v15 = 1;
      v70 = 0LL;
      v66 = 0;
      if ( v40 != v3 )
      {
        v54 = (unsigned int *)(v40 + 3);
        v72 = v40;
        v55 = *((_DWORD *)v40 + 5);
        v73 = v54;
        v74 = v54;
        v75 = v55;
        NextItemSafe = CDataStreamReader::GetNextItemSafe(
                         (CDataStreamReader *)&v73,
                         (unsigned int *)&v64[3],
                         &v70,
                         &v66);
        v3 = v71;
        v15 = NextItemSafe;
        v11 = v72;
        v14 = v74;
        if ( NextItemSafe == 1 )
        {
          if ( (_QWORD *)*v72 != v71 )
            v15 = -2147467259;
          goto LABEL_76;
        }
      }
    }
    v35 = v15 < 0;
    if ( v15 )
      goto LABEL_77;
    v10 = (int)v66;
    *(_QWORD *)&v78 = (int)v66;
    if ( (v66 & 0x80000000) != 0 )
      goto LABEL_127;
    *((_QWORD *)&v78 + 1) = v70;
    if ( !v70 )
    {
      if ( v66 )
        goto LABEL_127;
    }
    v12 = v78;
    v76 = v78;
LABEL_76:
    v35 = v15 < 0;
LABEL_77:
    if ( v35 )
    {
      v62 = 308;
      goto LABEL_144;
    }
    v10 = (unsigned int)++v65;
    if ( v15 )
      break;
    v8 = v69;
    v6 = *(CRenderData **)v67;
  }
  if ( !v63 )
    goto LABEL_7;
  v41 = CRenderData::FlushDrawListCache(
          (CRenderData *)v10,
          v68,
          *(struct CDrawListCache **)&v64[7],
          (struct CDrawListEntryBuilder *)v79);
  v15 = v41;
  if ( v41 >= 0 )
  {
    v43 = *(CDirtyRegion **)&v64[7];
    if ( *(_QWORD *)&v64[7] )
    {
      *(_QWORD *)&v64[7] = 0LL;
      CDirtyRegion::Release(v43);
    }
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x13Du, 0LL);
LABEL_9:
  while ( v7 )
  {
    v58 = (*(__int64 (__fastcall **)(__int64 *))(*v5 + 96))(v5);
    v15 = v58;
    if ( v58 < 0 )
    {
      v57 = v58;
      v62 = 332;
LABEL_146:
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v57, v62, 0LL);
    }
    else
    {
      --v7;
    }
  }
  v16 = *(CDirtyRegion **)&v64[7];
  if ( *(_QWORD *)&v64[7] )
  {
    *(_QWORD *)&v64[7] = 0LL;
    CDirtyRegion::Release(v16);
  }
  v17 = v81;
  v18 = v82;
  while ( v17 != v18 )
  {
    if ( *v17 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
      *v17 = 0LL;
    }
    ++v17;
  }
  if ( (v82 - v81) >> 3 )
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v81);
  v19 = v80;
  v85 = 0;
  if ( v80 )
  {
    v80 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  }
  if ( v110 )
    CDirtyRegion::Release(v110);
  v20 = lpMem;
  if ( (v105 - (_BYTE *)lpMem) >> 1 )
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL);
    v20 = lpMem;
  }
  lpMem = 0LL;
  if ( v20 != v107 && v20 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v20);
  }
  v21 = v99;
  if ( (v100 - (_BYTE *)v99) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      &v99,
      0LL);
    v21 = v99;
  }
  v99 = 0LL;
  if ( v21 != v102 && v21 )
  {
    v60 = GetProcessHeap();
    HeapFree(v60, 0, v21);
  }
  v22 = v95;
  if ( (v96 - (_BYTE *)v95) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      &v95,
      0LL);
    v22 = v95;
  }
  v95 = 0LL;
  if ( v22 != v98 && v22 )
  {
    v61 = GetProcessHeap();
    HeapFree(v61, 0, v22);
  }
  if ( v94 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v94 + 16LL))(v94);
  v23 = v88;
  v89 = 0LL;
  HIDWORD(v87) = 0;
  v91 = 0LL;
  v92 = 0;
  if ( v88 )
  {
    *((_QWORD *)v88 + 8) = 0LL;
    *((_DWORD *)v23 + 8) = 0;
    *((_DWORD *)v23 + 14) = 0;
    *((_QWORD *)v23 + 11) = 0LL;
    *((_QWORD *)v23 + 12) = 0LL;
    *((_DWORD *)v23 + 26) = 0;
    *((_DWORD *)v23 + 32) = 0;
    v23 = v88;
  }
  v93 = v93 & 4 | 1;
  if ( v90 )
  {
    Mesh::MeshGraph::`scalar deleting destructor'(v90, a2);
    v23 = v88;
  }
  if ( v23 )
    Mesh::MeshGraph::`scalar deleting destructor'(v23, a2);
  if ( v86 )
    operator delete(v86);
  if ( (v82 - v81) >> 3 )
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v81);
  v24 = v81;
  v25 = v81 == v84;
  v81 = 0LL;
  if ( v25 )
    v24 = 0LL;
  if ( v24 )
  {
    v52 = GetProcessHeap();
    HeapFree(v52, 0, v24);
  }
  v26 = v80;
  if ( v80 )
  {
    v80 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
  }
  return (unsigned int)v15;
}
