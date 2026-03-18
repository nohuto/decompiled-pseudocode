/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800961D0
 * Callers:
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048514 (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180096050 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180096080 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007B02C (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x18007B26C (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x18007E654 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x180092810 (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV-$span@$$CBE$0-0@gsl@.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BED68 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800CCA88 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801877B4 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFA4C (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFBBC (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

__int64 __fastcall CRenderData::Draw(_QWORD *a1, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 *v5; // r15
  CRenderData *v6; // r10
  int v7; // r14d
  struct CTreeData *p_Blink; // r11
  _QWORD *v9; // rax
  struct _LIST_ENTRY *Flink; // rcx
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
  __int64 v22; // r8
  _BYTE *v23; // rbx
  __int64 v24; // r8
  Mesh::MeshGraph *v25; // rcx
  void *v26; // rbx
  bool v27; // zf
  __int64 v28; // rcx
  __int64 v30; // r10
  char v31; // al
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // r8
  int v35; // eax
  unsigned __int64 v36; // rax
  bool v37; // sf
  unsigned __int64 v38; // r8
  int v39; // eax
  __int64 v40; // r9
  void *v41; // r8
  _QWORD *v42; // rax
  int v43; // eax
  unsigned int v44; // ecx
  CDirtyRegion *v45; // rcx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int DrawListCacheForCommandRun; // eax
  int v50; // eax
  unsigned int v51; // ecx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v53; // r10
  HANDLE v54; // rax
  _QWORD *v55; // rcx
  unsigned int *v56; // rcx
  unsigned int v57; // eax
  int NextItemSafe; // eax
  int v59; // r9d
  int v60; // eax
  HANDLE ProcessHeap; // rax
  HANDLE v62; // rax
  HANDLE v63; // rax
  unsigned int v64; // [rsp+20h] [rbp-E0h]
  char v65; // [rsp+40h] [rbp-C0h]
  _BYTE v66[15]; // [rsp+41h] [rbp-BFh] BYREF
  int v67; // [rsp+50h] [rbp-B0h]
  unsigned int v68; // [rsp+54h] [rbp-ACh] BYREF
  int v69[2]; // [rsp+58h] [rbp-A8h]
  struct CDrawingContext *v70; // [rsp+60h] [rbp-A0h]
  struct CTreeData *v71; // [rsp+68h] [rbp-98h]
  void *v72; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v73; // [rsp+78h] [rbp-88h]
  _QWORD *v74; // [rsp+80h] [rbp-80h]
  _QWORD *v75; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v76; // [rsp+90h] [rbp-70h]
  unsigned int v77; // [rsp+98h] [rbp-68h]
  __int128 v78; // [rsp+A0h] [rbp-60h]
  __int64 v79[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v80; // [rsp+C0h] [rbp-40h]
  struct CDrawListEntry **v81[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v82; // [rsp+F0h] [rbp-10h]
  _BYTE *v83; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE *v84; // [rsp+100h] [rbp+0h]
  int *v85; // [rsp+108h] [rbp+8h]
  _BYTE v86[32]; // [rsp+110h] [rbp+10h] BYREF
  int v87; // [rsp+130h] [rbp+30h] BYREF
  void *v88; // [rsp+138h] [rbp+38h]
  __int64 v89; // [rsp+140h] [rbp+40h]
  Mesh::MeshGraph *v90; // [rsp+148h] [rbp+48h]
  __int64 v91; // [rsp+150h] [rbp+50h]
  Mesh::MeshGraph *v92; // [rsp+158h] [rbp+58h]
  __int64 v93; // [rsp+168h] [rbp+68h]
  int v94; // [rsp+170h] [rbp+70h]
  char v95; // [rsp+184h] [rbp+84h]
  __int64 v96; // [rsp+188h] [rbp+88h]
  LPVOID v97; // [rsp+190h] [rbp+90h] BYREF
  _BYTE *v98; // [rsp+198h] [rbp+98h]
  LPVOID *v99; // [rsp+1A0h] [rbp+A0h]
  _BYTE v100[960]; // [rsp+1B0h] [rbp+B0h] BYREF
  LPVOID v101; // [rsp+570h] [rbp+470h] BYREF
  _BYTE *v102; // [rsp+578h] [rbp+478h]
  int *v103; // [rsp+580h] [rbp+480h]
  _BYTE v104[960]; // [rsp+590h] [rbp+490h] BYREF
  int v105; // [rsp+950h] [rbp+850h] BYREF
  LPVOID lpMem; // [rsp+958h] [rbp+858h] BYREF
  _BYTE *v107; // [rsp+960h] [rbp+860h]
  char *v108; // [rsp+968h] [rbp+868h]
  _BYTE v109[60]; // [rsp+970h] [rbp+870h] BYREF
  char v110; // [rsp+9ACh] [rbp+8ACh] BYREF
  __int64 v111; // [rsp+9B0h] [rbp+8B0h]
  CDirtyRegion *v112; // [rsp+9C0h] [rbp+8C0h]
  __int16 v113; // [rsp+9C8h] [rbp+8C8h]
  char v114; // [rsp+9CAh] [rbp+8CAh]

  *(_QWORD *)v69 = a1;
  v82 = 0LL;
  memset(v81, 0, sizeof(v81));
  v3 = a1 + 7;
  v5 = (__int64 *)a2;
  v6 = (CRenderData *)a1;
  v87 = 0;
  v83 = v86;
  v7 = 0;
  v88 = 0LL;
  v84 = v86;
  p_Blink = 0LL;
  v89 = 0LL;
  v85 = &v87;
  v97 = v100;
  v98 = v100;
  v99 = &v101;
  v101 = v104;
  v102 = v104;
  v103 = &v105;
  lpMem = v109;
  v107 = v109;
  v108 = &v110;
  v9 = (_QWORD *)a1[11];
  v90 = 0LL;
  v92 = 0LL;
  v91 = 0LL;
  v93 = 0LL;
  v94 = 0;
  v95 = 5;
  v96 = 0LL;
  v105 = 0;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0;
  v114 = 0;
  v70 = 0LL;
  v71 = 0LL;
  *(_QWORD *)&v66[7] = 0LL;
  v65 = 0;
  if ( v9 )
  {
    v55 = (_QWORD *)a1[8];
    if ( (_QWORD *)*v55 != v3 )
      __fastfail(3u);
    *v9 = v3;
    v9[1] = v55;
    *v55 = v9;
    v3[1] = v9;
    v3[4] = 0LL;
  }
  Flink = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v78 = 0LL;
  v73 = v3;
  v67 = 0;
  if ( a3 )
    goto LABEL_3;
  v70 = (struct CDrawingContext *)a2;
  if ( *(_BYTE *)(a2 + 6048) )
  {
    if ( *(_BYTE *)(a2 + 6049) )
      Flink = *(struct _LIST_ENTRY **)(a2 + 3336);
    else
      Flink = *(struct _LIST_ENTRY **)(*(_QWORD *)(a2 + 6056) + 24LL);
  }
  v30 = *(_QWORD *)(a2 + 6056);
  v71 = 0LL;
  if ( *(_BYTE *)(v30 + 32) )
  {
    p_Blink = (struct CTreeData *)&Flink[20].Blink;
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)Flink);
    if ( !TreeDataListHead )
      goto LABEL_54;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      goto LABEL_54;
    while ( Flink[2].Flink != v53 )
    {
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        goto LABEL_54;
    }
    p_Blink = (struct CTreeData *)&Flink[-14];
  }
  v71 = p_Blink;
LABEL_54:
  if ( !p_Blink )
  {
    v15 = -2003292412;
    v64 = 205;
LABEL_144:
    v59 = v15;
    goto LABEL_146;
  }
  v6 = *(CRenderData **)v69;
  Flink = 0LL;
LABEL_3:
  v13 = (_QWORD *)*v3;
  if ( v3 == (_QWORD *)*v3 )
  {
    v14 = v76;
    v15 = 1;
    goto LABEL_5;
  }
  v38 = *((unsigned int *)v13 + 5);
  v14 = (unsigned int *)(v13 + 3);
  v75 = v13 + 3;
  v11 = v13;
  v77 = v38;
  v39 = -2147467259;
  if ( v38 )
  {
    if ( v38 < 8 || (a2 = *v14, (unsigned int)a2 < 8) || (a2 & 3) != 0 || (v40 = (unsigned int)a2, a2 > v38) )
    {
      LODWORD(a2) = v67;
      v41 = v72;
    }
    else
    {
      v41 = v14 + 1;
      LODWORD(a2) = a2 - 4;
      *(_DWORD *)&v66[3] = v14[1];
      v14 = (unsigned int *)((char *)v14 + v40);
      v39 = 0;
    }
    v15 = v39;
  }
  else
  {
    LODWORD(a2) = 0;
    v41 = 0LL;
    v39 = 1;
    v15 = 1;
    if ( (_QWORD *)*v11 != v3 )
    {
      v15 = -2147467259;
      goto LABEL_5;
    }
  }
  if ( !v39 )
  {
    *(_QWORD *)&v78 = (int)a2;
    if ( (a2 & 0x80000000) != 0LL || (*((_QWORD *)&v78 + 1) = v41) == 0LL && (_DWORD)a2 )
    {
LABEL_127:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v12 = v78;
  }
LABEL_5:
  if ( v15 < 0 )
  {
    v64 = 210;
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
    if ( *(_QWORD *)&v66[7] || a3 )
    {
      v31 = v65;
    }
    else
    {
      DrawListCacheForCommandRun = CRenderData::GetDrawListCacheForCommandRun(
                                     v6,
                                     v70,
                                     p_Blink,
                                     (unsigned int)Flink,
                                     (struct CDrawListCache **)&v66[7]);
      v15 = DrawListCacheForCommandRun;
      if ( DrawListCacheForCommandRun < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, DrawListCacheForCommandRun, 0xE1u, 0LL);
        goto LABEL_9;
      }
      v31 = 0;
      v65 = 0;
    }
    v66[0] = 0;
    if ( !a3 )
    {
      *(_OWORD *)v79 = v12;
      v46 = CRenderData::TryDrawCommandAsDrawList(
              v69[0],
              (int)v70,
              v7 != 0,
              *(int *)&v66[3],
              (__int64)v79,
              (__int64)v66);
      v15 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v46, 0xEEu, 0LL);
        goto LABEL_9;
      }
      if ( v66[0] )
      {
        v65 = 1;
        goto LABEL_66;
      }
      v31 = v65;
    }
    if ( v31 )
    {
      v50 = CRenderData::FlushDrawListCache((CRenderData *)Flink, v70, *(struct CDrawListCache **)&v66[7], v81);
      v15 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0xFEu, 0LL);
        goto LABEL_9;
      }
      Flink = *(struct _LIST_ENTRY **)&v66[7];
      if ( *(_QWORD *)&v66[7] )
      {
        *(_QWORD *)&v66[7] = 0LL;
        CDirtyRegion::Release((CDirtyRegion *)Flink);
      }
      v65 = 0;
    }
    if ( *(_DWORD *)&v66[3] == 544 )
    {
      v47 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v5 + 104))(
              v5,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v69 + 120LL) + 8LL * *(unsigned int *)(*((_QWORD *)&v78 + 1) + 4LL)));
      v15 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v47, 0x10Bu, 0LL);
        goto LABEL_9;
      }
      ++v7;
    }
    else
    {
      if ( *(_DWORD *)&v66[3] != 543 )
      {
        v32 = (*(__int64 (__fastcall **)(__int64 *))(*v5 + 112))(v5);
        v15 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x123u, 0LL);
          goto LABEL_9;
        }
        *(_OWORD *)v79 = v12;
        v35 = CRenderData::DrawCommandAsLegacy(*(__int64 *)v69, v5, v34, *(int *)&v66[3], (__int64)v79);
        v15 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v35, 0x125u, 0LL);
          goto LABEL_9;
        }
        goto LABEL_65;
      }
      if ( !v7 )
      {
        v15 = -2003292412;
        v64 = 283;
        goto LABEL_144;
      }
      v48 = (*(__int64 (__fastcall **)(__int64 *))(*v5 + 96))(v5);
      v15 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v48, 0x115u, 0LL);
        goto LABEL_9;
      }
      --v7;
    }
LABEL_65:
    if ( v15 == 1 )
      break;
LABEL_66:
    v15 = -2147467259;
    v36 = (unsigned __int64)v75 + v77 - (_QWORD)v14;
    if ( v36 )
    {
      if ( v36 >= 8 )
      {
        a2 = *v14;
        if ( (unsigned int)a2 >= 8 && (a2 & 3) == 0 && a2 <= v36 )
        {
          Flink = (struct _LIST_ENTRY *)(v14 + 1);
          *(_DWORD *)&v66[3] = v14[1];
          v14 = (unsigned int *)((char *)v14 + a2);
          v72 = Flink;
          v68 = a2 - 4;
          v15 = 0;
        }
      }
    }
    else
    {
      v42 = (_QWORD *)*v11;
      v15 = 1;
      v72 = 0LL;
      v68 = 0;
      if ( v42 != v3 )
      {
        v56 = (unsigned int *)(v42 + 3);
        v74 = v42;
        v57 = *((_DWORD *)v42 + 5);
        v75 = v56;
        v76 = v56;
        v77 = v57;
        NextItemSafe = CDataStreamReader::GetNextItemSafe(
                         (CDataStreamReader *)&v75,
                         (unsigned int *)&v66[3],
                         &v72,
                         &v68);
        v3 = v73;
        v15 = NextItemSafe;
        v11 = v74;
        v14 = v76;
        if ( NextItemSafe == 1 )
        {
          if ( (_QWORD *)*v74 != v73 )
            v15 = -2147467259;
          goto LABEL_76;
        }
      }
    }
    v37 = v15 < 0;
    if ( v15 )
      goto LABEL_77;
    LODWORD(Flink) = v68;
    *(_QWORD *)&v80 = (int)v68;
    if ( (v68 & 0x80000000) != 0 )
      goto LABEL_127;
    *((_QWORD *)&v80 + 1) = v72;
    if ( !v72 )
    {
      if ( v68 )
        goto LABEL_127;
    }
    v12 = v80;
    v78 = v80;
LABEL_76:
    v37 = v15 < 0;
LABEL_77:
    if ( v37 )
    {
      v64 = 308;
      goto LABEL_144;
    }
    Flink = (struct _LIST_ENTRY *)(unsigned int)++v67;
    if ( v15 )
      break;
    p_Blink = v71;
    v6 = *(CRenderData **)v69;
  }
  if ( !v65 )
    goto LABEL_7;
  v43 = CRenderData::FlushDrawListCache((CRenderData *)Flink, v70, *(struct CDrawListCache **)&v66[7], v81);
  v15 = v43;
  if ( v43 >= 0 )
  {
    v45 = *(CDirtyRegion **)&v66[7];
    if ( *(_QWORD *)&v66[7] )
    {
      *(_QWORD *)&v66[7] = 0LL;
      CDirtyRegion::Release(v45);
    }
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x13Du, 0LL);
LABEL_9:
  while ( v7 )
  {
    v60 = (*(__int64 (__fastcall **)(__int64 *))(*v5 + 96))(v5);
    v15 = v60;
    if ( v60 < 0 )
    {
      v59 = v60;
      v64 = 332;
LABEL_146:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, v59, v64, 0LL);
    }
    else
    {
      --v7;
    }
  }
  v16 = *(CDirtyRegion **)&v66[7];
  if ( *(_QWORD *)&v66[7] )
  {
    *(_QWORD *)&v66[7] = 0LL;
    CDirtyRegion::Release(v16);
  }
  v17 = v83;
  v18 = v84;
  while ( v17 != v18 )
  {
    if ( *v17 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
      *v17 = 0LL;
    }
    ++v17;
  }
  if ( (v84 - v83) >> 3 )
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v83);
  v19 = v82;
  v87 = 0;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  }
  if ( v112 )
    CDirtyRegion::Release(v112);
  v20 = lpMem;
  if ( (v107 - (_BYTE *)lpMem) >> 1 )
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL);
    v20 = lpMem;
  }
  lpMem = 0LL;
  if ( v20 != v109 && v20 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v20);
  }
  v21 = v101;
  v22 = (v102 - (_BYTE *)v101) >> 4;
  if ( v22 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      &v101,
      0LL,
      v22);
    v21 = v101;
  }
  v101 = 0LL;
  if ( v21 != v104 && v21 )
  {
    v62 = GetProcessHeap();
    HeapFree(v62, 0, v21);
  }
  v23 = v97;
  v24 = (v98 - (_BYTE *)v97) >> 4;
  if ( v24 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      &v97,
      0LL,
      v24);
    v23 = v97;
  }
  v97 = 0LL;
  if ( v23 != v100 && v23 )
  {
    v63 = GetProcessHeap();
    HeapFree(v63, 0, v23);
  }
  if ( v96 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
  v25 = v90;
  v91 = 0LL;
  HIDWORD(v89) = 0;
  v93 = 0LL;
  v94 = 0;
  if ( v90 )
  {
    *((_QWORD *)v90 + 8) = 0LL;
    *((_DWORD *)v25 + 8) = 0;
    *((_DWORD *)v25 + 14) = 0;
    *((_QWORD *)v25 + 11) = 0LL;
    *((_QWORD *)v25 + 12) = 0LL;
    *((_DWORD *)v25 + 26) = 0;
    *((_DWORD *)v25 + 32) = 0;
    v25 = v90;
  }
  v95 = v95 & 4 | 1;
  if ( v92 )
  {
    Mesh::MeshGraph::`scalar deleting destructor'(v92, a2);
    v25 = v90;
  }
  if ( v25 )
    Mesh::MeshGraph::`scalar deleting destructor'(v25, a2);
  if ( v88 )
    operator delete(v88);
  if ( (v84 - v83) >> 3 )
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v83);
  v26 = v83;
  v27 = v83 == v86;
  v83 = 0LL;
  if ( v27 )
    v26 = 0LL;
  if ( v26 )
  {
    v54 = GetProcessHeap();
    HeapFree(v54, 0, v26);
  }
  v28 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  }
  return (unsigned int)v15;
}
