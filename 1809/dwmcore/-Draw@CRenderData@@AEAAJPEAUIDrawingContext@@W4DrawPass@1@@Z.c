/*
 * XREFs of ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800B63D0
 * Callers:
 *     ?GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004C5CC (-GetContentBounds@CContentBounder@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B58F0 (-Draw@CRenderData@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800B63B0 (-AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180028D28 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x1800292D0 (-GetDrawListCacheForCommandRun@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDr.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x18006019C (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ?DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV?$span@$$CBE$0?0@gsl@@@Z @ 0x180064E3C (-DrawCommandAsLegacy@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@IV-$span@$$CBE$0-0@gsl@.c)
 *     ?SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x18009C638 (-SetCurrentBlock@CDataBlockReader@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BC560 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800D0F30 (-GetNextItemSafe@CDataStreamReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE4CC (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$buffer_impl@PEAVCDrawListEntry@@$03$00Vlibe.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE898 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEA04 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ??1?$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U?$default_delete@$$BY0A@UMeshVertexData@Mesh@@@std@@@std@@QEAA@XZ @ 0x1801819B8 (--1-$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U-$default_delete@$$BY0A@UMeshVertexData@Mesh@@@std.c)
 */

__int64 __fastcall CRenderData::Draw(_QWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  char v3; // r11
  struct CDrawListCache *v4; // rbx
  _QWORD *v5; // r13
  __int64 v6; // rax
  __int64 *v7; // r14
  struct CTreeData *v8; // rcx
  int v9; // esi
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  __int128 v13; // xmm6
  CVisual *v14; // rcx
  __int64 v15; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v17; // r10
  struct _LIST_ENTRY *Flink; // rcx
  int v19; // edi
  _QWORD *v20; // rax
  unsigned int v21; // edi
  __int64 v22; // rax
  unsigned int *v23; // r12
  int v24; // eax
  gsl::details *v25; // rcx
  int v26; // eax
  int DrawListCacheForCommandRun; // eax
  int v28; // eax
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // r8
  int v38; // eax
  unsigned __int64 v39; // rax
  int NextItemSafe; // eax
  unsigned int v41; // eax
  int v42; // eax
  unsigned int v43; // ecx
  CMILRefCountBase *v44; // rcx
  int v45; // eax
  unsigned int v46; // ecx
  _QWORD *v47; // rbx
  _QWORD *v48; // rsi
  __int64 v49; // rcx
  _BYTE *v50; // r8
  _BYTE *v51; // r8
  _BYTE *v52; // r8
  Mesh::MeshGraph *v53; // rcx
  _BYTE *v54; // r8
  __int64 v55; // rcx
  char v57; // [rsp+40h] [rbp-C0h]
  _BYTE v58[15]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v59; // [rsp+50h] [rbp-B0h] BYREF
  int v60; // [rsp+54h] [rbp-ACh]
  unsigned int v61; // [rsp+58h] [rbp-A8h]
  struct CDrawingContext *v62; // [rsp+60h] [rbp-A0h]
  CRenderData *v63; // [rsp+68h] [rbp-98h]
  struct CDrawListCache *v64; // [rsp+70h] [rbp-90h] BYREF
  gsl::details *v65; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v66; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v67; // [rsp+88h] [rbp-78h]
  __int64 v68; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v69; // [rsp+98h] [rbp-68h]
  unsigned int v70; // [rsp+A0h] [rbp-60h]
  __int128 v71; // [rsp+B0h] [rbp-50h]
  __int64 v72[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v73; // [rsp+D0h] [rbp-30h]
  struct CDrawListEntry **v74[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v75; // [rsp+100h] [rbp+0h]
  _BYTE *v76; // [rsp+108h] [rbp+8h] BYREF
  _BYTE *v77; // [rsp+110h] [rbp+10h]
  int *v78; // [rsp+118h] [rbp+18h]
  _BYTE v79[32]; // [rsp+120h] [rbp+20h] BYREF
  int v80; // [rsp+140h] [rbp+40h] BYREF
  __int64 v81; // [rsp+148h] [rbp+48h] BYREF
  __int64 v82; // [rsp+150h] [rbp+50h]
  Mesh::MeshGraph *v83; // [rsp+158h] [rbp+58h]
  __int64 v84; // [rsp+160h] [rbp+60h]
  Mesh::MeshGraph *v85; // [rsp+168h] [rbp+68h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  int v87; // [rsp+180h] [rbp+80h]
  char v88; // [rsp+194h] [rbp+94h]
  __int64 v89; // [rsp+198h] [rbp+98h]
  _BYTE *v90; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE *v91; // [rsp+1A8h] [rbp+A8h]
  _BYTE **v92; // [rsp+1B0h] [rbp+B0h]
  _BYTE v93[960]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE *v94; // [rsp+580h] [rbp+480h] BYREF
  _BYTE *v95; // [rsp+588h] [rbp+488h]
  int *v96; // [rsp+590h] [rbp+490h]
  _BYTE v97[960]; // [rsp+5A0h] [rbp+4A0h] BYREF
  int v98; // [rsp+960h] [rbp+860h] BYREF
  _BYTE *v99; // [rsp+968h] [rbp+868h] BYREF
  _BYTE *v100; // [rsp+970h] [rbp+870h]
  char *v101; // [rsp+978h] [rbp+878h]
  _BYTE v102[60]; // [rsp+980h] [rbp+880h] BYREF
  char v103; // [rsp+9BCh] [rbp+8BCh] BYREF
  __int64 v104; // [rsp+9C0h] [rbp+8C0h]
  CMILRefCountBase *v105; // [rsp+9C8h] [rbp+8C8h]
  __int16 v106; // [rsp+9D0h] [rbp+8D0h]

  v63 = (CRenderData *)a1;
  v61 = a3;
  v75 = 0LL;
  memset(v74, 0, sizeof(v74));
  v3 = 0;
  v4 = 0LL;
  v5 = a1 + 7;
  v6 = a1[9];
  v7 = (__int64 *)a2;
  v76 = v79;
  v77 = v79;
  v78 = &v80;
  v90 = v93;
  v91 = v93;
  v92 = &v94;
  v94 = v97;
  v95 = v97;
  v96 = &v98;
  v99 = v102;
  v100 = v102;
  v101 = &v103;
  v8 = 0LL;
  *(_QWORD *)&v58[7] = 0LL;
  v9 = 0;
  v80 = 0;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v85 = 0LL;
  v84 = 0LL;
  v86 = 0LL;
  v87 = 0;
  v88 = 5;
  v89 = 0LL;
  v98 = 0;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0;
  v62 = 0LL;
  v64 = 0LL;
  v57 = 0;
  if ( v6 )
  {
    v10 = (_QWORD *)v5[1];
    v11 = (_QWORD *)(v6 + 8);
    if ( (_QWORD *)*v10 != v5 )
      __fastfail(3u);
    v11[1] = v10;
    *v11 = v5;
    *v10 = v11;
    v8 = 0LL;
    v5[1] = v11;
    v5[2] = 0LL;
  }
  v12 = 0LL;
  v13 = 0LL;
  v71 = 0LL;
  v66 = v5;
  v67 = 0LL;
  v60 = 0;
  if ( !a3 )
  {
    v14 = 0LL;
    v62 = (struct CDrawingContext *)a2;
    if ( *(_BYTE *)(a2 + 6048) )
    {
      if ( *(_BYTE *)(a2 + 6049) )
        v14 = *(CVisual **)(a2 + 3336);
      else
        v14 = *(CVisual **)(*(_QWORD *)(a2 + 6056) + 24LL);
    }
    v15 = *(_QWORD *)(a2 + 6056);
    *(_QWORD *)&v58[7] = 0LL;
    if ( *(_BYTE *)(v15 + 32) )
    {
      v8 = (CVisual *)((char *)v14 + 328);
      *(_QWORD *)&v58[7] = v8;
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v14);
      if ( !TreeDataListHead || (Flink = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
      {
LABEL_16:
        v8 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          a2 = (unsigned __int64)&Flink[-14];
          if ( Flink[2].Flink == v17 )
            break;
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_16;
        }
        v8 = (struct CTreeData *)&Flink[-14];
        *(_QWORD *)&v58[7] = a2;
      }
    }
    if ( !v8 )
    {
      v19 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2003292412, 0xC7u);
      goto LABEL_104;
    }
  }
  v20 = (_QWORD *)*v5;
  if ( v5 == (_QWORD *)*v5 )
  {
    v23 = v69;
    v19 = 1;
    goto LABEL_28;
  }
  if ( v20 )
  {
    v12 = v20 - 1;
    v67 = v20 - 1;
  }
  else
  {
    v67 = 0LL;
  }
  v21 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
  v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
  v70 = v21;
  v23 = (unsigned int *)v22;
  v68 = v22;
  v69 = (unsigned int *)v22;
  v24 = -2147467259;
  if ( v21 )
  {
    if ( v21 < 8uLL || (v29 = *v23, (unsigned int)v29 < 8) || (v29 & 3) != 0 || v29 > v21 )
    {
      a2 = v61;
      v25 = v65;
    }
    else
    {
      v30 = v23[1];
      v25 = (gsl::details *)(v23 + 1);
      v23 = (unsigned int *)((char *)v23 + (unsigned int)v29);
      *(_DWORD *)&v58[3] = v30;
      a2 = (unsigned int)(v29 - 4);
      v69 = v23;
      v24 = 0;
    }
    v19 = v24;
LABEL_46:
    if ( !v24 )
    {
      *(_QWORD *)&v71 = (int)a2;
      if ( (a2 & 0x80000000) != 0LL || (*((_QWORD *)&v71 + 1) = v25) == 0LL && (_DWORD)a2 )
      {
        gsl::details::terminate(v25);
        __debugbreak();
      }
      v13 = v71;
    }
    goto LABEL_27;
  }
  a2 = 0LL;
  v25 = 0LL;
  v24 = 1;
  v19 = 1;
  if ( (_QWORD *)v12[1] == v5 )
    goto LABEL_46;
  v19 = -2147467259;
LABEL_27:
  v8 = *(struct CTreeData **)&v58[7];
  v3 = 0;
LABEL_28:
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v19, 0xCCu);
    goto LABEL_104;
  }
  if ( v19 )
    goto LABEL_101;
  v26 = 0;
  while ( 1 )
  {
    if ( !v4 && !v61 )
    {
      DrawListCacheForCommandRun = CRenderData::GetDrawListCacheForCommandRun(
                                     v63,
                                     (struct IRenderTarget **)v62,
                                     v8,
                                     v26,
                                     &v64);
      v19 = DrawListCacheForCommandRun;
      if ( DrawListCacheForCommandRun < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, DrawListCacheForCommandRun, 0xDBu);
        v4 = v64;
        goto LABEL_104;
      }
      v4 = v64;
      v3 = 0;
      v57 = 0;
    }
    v58[0] = 0;
    if ( !v61 )
    {
      *(_OWORD *)v72 = v13;
      v28 = CRenderData::TryDrawCommandAsDrawList(
              (int)v63,
              (int)v62,
              v9 != 0,
              *(int *)&v58[3],
              (__int64)v72,
              (__int64)v58);
      v19 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v28, 0xE8u);
        goto LABEL_104;
      }
      if ( v58[0] )
      {
        v57 = 1;
        goto LABEL_68;
      }
      v3 = v57;
    }
    if ( v3 )
    {
      v31 = CRenderData::FlushDrawListCache(v8, v62, v4, v74);
      v19 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xF8u);
        goto LABEL_104;
      }
      v8 = v4;
      if ( v4 )
      {
        v4 = 0LL;
        v64 = 0LL;
        CMILRefCountBase::Release(v8);
      }
      v57 = 0;
    }
    if ( *(_DWORD *)&v58[3] == 469 )
    {
      v33 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v7 + 104))(
              v7,
              *(_QWORD *)(*((_QWORD *)v63 + 13) + 8LL * *(unsigned int *)(*((_QWORD *)&v71 + 1) + 4LL)));
      v19 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v33, 0x105u);
        goto LABEL_104;
      }
      ++v9;
    }
    else if ( *(_DWORD *)&v58[3] == 468 )
    {
      if ( !v9 )
      {
        v19 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2003292412, 0x115u);
        goto LABEL_104;
      }
      v34 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v7 + 96))(v7, a2);
      v19 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v34, 0x10Fu);
        goto LABEL_104;
      }
      --v9;
    }
    else
    {
      v35 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(*v7 + 112))(v7, a2);
      v19 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x11Du);
        goto LABEL_104;
      }
      *(_OWORD *)v72 = v13;
      v38 = CRenderData::DrawCommandAsLegacy((__int64)v63, v7, v37, *(int *)&v58[3], (__int64)v72);
      v19 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v38, 0x11Fu);
        goto LABEL_104;
      }
    }
    if ( v19 == 1 )
      break;
LABEL_68:
    v19 = -2147467259;
    v39 = v68 + v70 - (_QWORD)v23;
    if ( v39 )
    {
      if ( v39 >= 8 )
      {
        a2 = *v23;
        if ( (unsigned int)a2 >= 8 && (a2 & 3) == 0 && a2 <= v39 )
        {
          v41 = v23[1];
          v8 = (struct CTreeData *)(v23 + 1);
          v23 = (unsigned int *)((char *)v23 + a2);
          *(_DWORD *)&v58[3] = v41;
          v65 = v8;
          v59 = a2 - 4;
          v19 = 0;
          v69 = v23;
        }
      }
    }
    else
    {
      a2 = v12[1];
      v19 = 1;
      v65 = 0LL;
      v59 = 0;
      if ( (_QWORD *)a2 != v5 )
      {
        CDataBlockReader::SetCurrentBlock((CDataBlockReader *)&v66, a2);
        NextItemSafe = CDataStreamReader::GetNextItemSafe(
                         (CDataStreamReader *)&v68,
                         (unsigned int *)&v58[3],
                         (void **)&v65,
                         &v59);
        v5 = v66;
        v19 = NextItemSafe;
        v23 = v69;
        if ( NextItemSafe == 1 )
        {
          v12 = v67;
          if ( (_QWORD *)v67[1] != v66 )
            v19 = -2147467259;
          goto LABEL_84;
        }
      }
    }
    if ( !v19 )
    {
      *(_QWORD *)&v73 = (int)v59;
      if ( (v59 & 0x80000000) != 0 )
      {
        gsl::details::terminate(v8);
        JUMPOUT(0x1800B6E23LL);
      }
      *((_QWORD *)&v73 + 1) = v65;
      if ( !v65 && v59 )
      {
        gsl::details::terminate(v8);
        __debugbreak();
      }
      v13 = v73;
      v71 = v73;
    }
    v12 = v67;
LABEL_84:
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v19, 0x12Eu);
      goto LABEL_104;
    }
    v26 = ++v60;
    if ( v19 )
      break;
    v3 = v57;
    v8 = *(struct CTreeData **)&v58[7];
  }
  if ( !v57 )
    goto LABEL_101;
  v42 = CRenderData::FlushDrawListCache(v8, v62, v4, v74);
  v19 = v42;
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x137u);
    goto LABEL_104;
  }
  v44 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    CMILRefCountBase::Release(v44);
  }
LABEL_101:
  if ( v19 == 1 )
    v19 = 0;
LABEL_104:
  while ( v9 )
  {
    v45 = (*(__int64 (__fastcall **)(__int64 *))(*v7 + 96))(v7);
    v19 = v45;
    if ( v45 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x146u);
    else
      --v9;
  }
  if ( v4 )
    CMILRefCountBase::Release(v4);
  v47 = v76;
  v48 = v77;
  while ( v47 != v48 )
  {
    if ( *v47 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 8LL))(*v47);
      *v47 = 0LL;
    }
    ++v47;
  }
  if ( (v77 - v76) >> 3 )
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v76);
  v49 = v75;
  v80 = 0;
  if ( v75 )
  {
    v75 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
  }
  if ( v105 )
    CMILRefCountBase::Release(v105);
  v50 = v99;
  if ( (v100 - v99) >> 1 )
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
      &v99,
      0LL);
    v50 = v99;
  }
  v99 = 0LL;
  if ( v50 == v102 )
    v50 = 0LL;
  if ( v50 )
    HeapFree(WPF::g_processHeap, 0, v50);
  v51 = v94;
  if ( (v95 - v94) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      &v94,
      0LL);
    v51 = v94;
  }
  v94 = 0LL;
  if ( v51 == v97 )
    v51 = 0LL;
  if ( v51 )
    HeapFree(WPF::g_processHeap, 0, v51);
  v52 = v90;
  if ( (v91 - v90) >> 4 )
  {
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      &v90,
      0LL);
    v52 = v90;
  }
  v90 = 0LL;
  if ( v52 == v93 )
    v52 = 0LL;
  if ( v52 )
    HeapFree(WPF::g_processHeap, 0, v52);
  if ( v89 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v89 + 16LL))(v89);
  v53 = v83;
  v84 = 0LL;
  HIDWORD(v82) = 0;
  v86 = 0LL;
  v87 = 0;
  if ( v83 )
  {
    *((_QWORD *)v83 + 8) = 0LL;
    *((_DWORD *)v53 + 8) = 0;
    *((_DWORD *)v53 + 14) = 0;
    *((_QWORD *)v53 + 11) = 0LL;
    *((_QWORD *)v53 + 12) = 0LL;
    *((_DWORD *)v53 + 26) = 0;
    *((_DWORD *)v53 + 32) = 0;
    v53 = v83;
  }
  v88 = v88 & 4 | 1;
  if ( v85 )
  {
    Mesh::MeshGraph::`scalar deleting destructor'(v85);
    v53 = v83;
  }
  if ( v53 )
    Mesh::MeshGraph::`scalar deleting destructor'(v53);
  std::unique_ptr<Mesh::MeshVertexData [0]>::~unique_ptr<Mesh::MeshVertexData [0]>(&v81);
  v54 = v76;
  if ( (v77 - v76) >> 3 )
  {
    detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::clear_region(&v76);
    v54 = v76;
  }
  v76 = 0LL;
  if ( v54 == v79 )
    v54 = 0LL;
  if ( v54 )
    HeapFree(WPF::g_processHeap, 0, v54);
  v55 = v75;
  if ( v75 )
  {
    v75 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
  }
  return (unsigned int)v19;
}
