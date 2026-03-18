/*
 * XREFs of ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008230
 * Callers:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008160 (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180007190 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180007724 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180007AE8 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x180007BDC (-CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180007C10 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180007F30 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180008208 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x1800085A4 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x180008618 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCProjectedShadowCaster@@@Z @ 0x1800086CC (-erase@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x180008960 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180023B70 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18006E4B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??2CProjectedShadow@@SAPEAX_K@Z @ 0x18019E7EC (--2CProjectedShadow@@SAPEAX_K@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x1801EFA64 (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x1801F1E00 (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z @ 0x1801F2128 (-SetBlurRadius@CProjectedShadow@@QEAAXM@Z.c)
 *     ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z @ 0x1801F2178 (-SetShadowOpacity@CProjectedShadow@@QEAAXM@Z.c)
 *     ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z @ 0x1801F21C8 (-SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCProjectedShadowCaster@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCProjectedShadowCaster@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801F3558 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCProjectedShadowCaster@@@2@V-$tup.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x180259834 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 */

__int64 __fastcall CProjectedShadowScene::PrepareShadows(
        struct CComposition **this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  const struct CVisualTree *v3; // r15
  struct CVisual *v7; // rax
  struct CComposition *v8; // rcx
  __int64 **ReceiverEntry; // r13
  CProjectedShadowScene *v10; // rcx
  int updated; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  struct CComposition *v14; // rdx
  int v15; // ecx
  struct CComposition *v16; // rbx
  struct CCompositionLight *v17; // r14
  __int64 v18; // rdx
  unsigned int v19; // ecx
  float z; // xmm6_4
  float v21; // xmm7_4
  const struct CVisualTree *v22; // rdx
  CProjectedShadowScene *v23; // rcx
  float v24; // xmm0_4
  int v25; // r9d
  CVisual *v27; // rax
  struct CTreeData *TreeData; // rax
  __int64 **v29; // r15
  __int64 *v30; // rax
  __int64 *v31; // rdx
  unsigned __int64 v32; // rcx
  CProjectedShadow *v33; // r14
  CProjectedShadow *v34; // rax
  int v35; // eax
  unsigned int v36; // ecx
  int v37; // r9d
  __int64 *v38; // rax
  struct CProjectedShadowCaster *v39; // r8
  __int64 *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  struct CCompositionLight *v45; // r12
  const struct CVisualTree *v46; // rdx
  const struct CVisualTree *v47; // rdx
  struct CMILMatrix *v48; // [rsp+28h] [rbp-E0h]
  struct CMILMatrix *v49; // [rsp+28h] [rbp-E0h]
  unsigned int v50; // [rsp+28h] [rbp-E0h]
  struct CCompositionLight *v51; // [rsp+38h] [rbp-D0h]
  struct CProjectedShadowCaster **v52; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v53[3]; // [rsp+48h] [rbp-C0h] BYREF
  struct CCompositionLight *v54; // [rsp+60h] [rbp-A8h]
  struct CComposition *v55; // [rsp+68h] [rbp-A0h]
  __int128 v56; // [rsp+70h] [rbp-98h] BYREF
  __int128 v57; // [rsp+80h] [rbp-88h]
  __int128 v58; // [rsp+90h] [rbp-78h]
  __int128 v59; // [rsp+A0h] [rbp-68h]
  int v60; // [rsp+B0h] [rbp-58h]
  __int128 v61; // [rsp+B4h] [rbp-54h] BYREF
  __int128 v62; // [rsp+C4h] [rbp-44h]
  __int128 v63; // [rsp+D4h] [rbp-34h]
  __int128 v64; // [rsp+E4h] [rbp-24h]
  int v65; // [rsp+F4h] [rbp-14h]
  _OWORD v66[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v67; // [rsp+138h] [rbp+30h]
  _OWORD v68[4]; // [rsp+148h] [rbp+40h] BYREF
  int v69; // [rsp+188h] [rbp+80h]
  _OWORD v70[4]; // [rsp+198h] [rbp+90h] BYREF
  int v71; // [rsp+1D8h] [rbp+D0h]
  char v72; // [rsp+1E8h] [rbp+E0h] BYREF
  char v73; // [rsp+1F0h] [rbp+E8h] BYREF
  _OWORD v74[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  int v75; // [rsp+238h] [rbp+130h]
  struct D2D_VECTOR_4F v76; // [rsp+248h] [rbp+140h] BYREF
  int v77; // [rsp+2D0h] [rbp+1C8h]
  struct CProjectedShadowCaster *v79; // [rsp+2E0h] [rbp+1D8h] BYREF

  v3 = (const struct CVisualTree *)*((_QWORD *)a2 + 757);
  v51 = (struct CCompositionLight *)*((_QWORD *)a3 + 7);
  v53[0] = v3;
  if ( CProjectedShadowScene::IsEmptyProjection((CProjectedShadowScene *)this)
    || (v7 = (struct CVisual *)(*(__int64 (__fastcall **)(struct CComposition *))(*(_QWORD *)this[11] + 208LL))(this[11]),
        !CProjectedShadowScene::IsValidVisual(v3, v7)) )
  {
    CProjectedShadowScene::ClearShadows((CProjectedShadowScene *)this, 1);
  }
  else
  {
    if ( this[12] )
    {
      v27 = (CVisual *)(*(__int64 (__fastcall **)(struct CComposition *))(*(_QWORD *)this[11] + 208LL))(this[11]);
      TreeData = CVisual::FindTreeData(v27, v3);
      v8 = this[12];
      if ( (unsigned __int64)v8 <= *((_QWORD *)TreeData + 15) )
        v8 = (struct CComposition *)*((_QWORD *)TreeData + 15);
    }
    else
    {
      v8 = (struct CComposition *)*((_QWORD *)this[2] + 48);
    }
    this[12] = v8;
    ReceiverEntry = CProjectedShadowScene::FindReceiverEntry((CProjectedShadowScene *)this, a3);
    updated = CProjectedShadowScene::UpdateReceiverEntry(v10, a2, (CProjectedShadowReceiver **)ReceiverEntry);
    v13 = updated;
    if ( updated < 0 )
    {
      v50 = 809;
LABEL_69:
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, updated, v50, 0LL);
      return v13;
    }
    if ( *((_BYTE *)ReceiverEntry + 100) )
    {
      v14 = this[7];
      v15 = 0;
      v55 = v14;
      v16 = *(struct CComposition **)v14;
      while ( v16 != v14 )
      {
        v77 = v15 + 1;
        if ( v15 >= 5 )
          break;
        v79 = (struct CProjectedShadowCaster *)*((_QWORD *)v16 + 2);
        v17 = (struct CCompositionLight *)*((_QWORD *)v79 + 7);
        v54 = v17;
        if ( v17 == v51 )
          goto LABEL_16;
        v13 = CProjectedShadowScene::UpdateCasterEntry(
                (CProjectedShadowScene *)this,
                v3,
                (struct CComposition *)((char *)v16 + 16));
        if ( (v13 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v13, 0x345u, 0LL);
          return v13;
        }
        if ( !*((_BYTE *)v16 + 168) )
          return 0LL;
        v71 = 0;
        updated = CVisual::CalcSrcToDestVisualTransform((int)v3, v18, (__int64)v17, (int)v51, (char)v70);
        v13 = updated;
        if ( updated < 0 )
        {
          v50 = 845;
          goto LABEL_69;
        }
        *(_OWORD *)&v53[1] = _xmm;
        z = CMILMatrix::Transform4DVector((CMILMatrix *)v70, &v76, (const struct D2D_VECTOR_4F *)&v53[1])->z;
        v21 = CProjectedShadowScene::CalculateOpacity((CProjectedShadowScene *)this, z);
        v24 = CProjectedShadowScene::CalculateBlurRadius((CProjectedShadowScene *)this, z);
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v21) & _xmm) >= 0.0000011920929
          && CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
               v23,
               v22,
               (struct CComposition *)((char *)v16 + 16),
               (const struct CProjectedShadowScene::ReceiverEntry *)ReceiverEntry,
               v24) )
        {
          v29 = ReceiverEntry + 1;
          v30 = ReceiverEntry[1];
          v31 = v30;
          v32 = v30[1];
          if ( !*(_BYTE *)(v32 + 25) )
          {
            do
            {
              if ( *(_QWORD *)(v32 + 32) >= (unsigned __int64)v79 )
              {
                v30 = (__int64 *)v32;
                v32 = *(_QWORD *)v32;
              }
              else
              {
                v32 = *(_QWORD *)(v32 + 16);
              }
            }
            while ( !*(_BYTE *)(v32 + 25) );
            v31 = *v29;
          }
          if ( v30 == v31 || (unsigned __int64)v79 < v30[4] )
          {
            v52 = &v79;
            v30 = *(__int64 **)std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CProjectedShadowCaster * const &>,std::tuple<>>(
                                 (int)ReceiverEntry + 8,
                                 (unsigned int)&v72,
                                 (_DWORD)v30,
                                 v25,
                                 (__int64)&v52);
          }
          v33 = (CProjectedShadow *)v30[5];
          if ( !v33 )
          {
            v34 = (CProjectedShadow *)CProjectedShadow::operator new(v32);
            if ( v34 )
              v33 = CProjectedShadow::CProjectedShadow(v34, this[2]);
            else
              v33 = 0LL;
            v52 = (struct CProjectedShadowCaster **)v33;
            if ( v33 )
              (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v33 + 8LL))(v33);
            v35 = CProjectedShadow::Initialize(v33, (struct CProjectedShadowScene *)this, v79, a3);
            v13 = v35;
            if ( v35 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x35Fu, 0LL);
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v52);
              return v13;
            }
            v38 = *v29;
            v39 = v79;
            v40 = *v29;
            v41 = (*v29)[1];
            if ( !*(_BYTE *)(v41 + 25) )
            {
              do
              {
                if ( *(_QWORD *)(v41 + 32) >= (unsigned __int64)v79 )
                {
                  v38 = (__int64 *)v41;
                  v41 = *(_QWORD *)v41;
                }
                else
                {
                  v41 = *(_QWORD *)(v41 + 16);
                }
              }
              while ( !*(_BYTE *)(v41 + 25) );
              v40 = *v29;
            }
            if ( v38 == v40 || (unsigned __int64)v79 < v38[4] )
            {
              v53[1] = &v79;
              v38 = *(__int64 **)std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CProjectedShadowCaster * const &>,std::tuple<>>(
                                   (int)ReceiverEntry + 8,
                                   (unsigned int)&v73,
                                   (_DWORD)v38,
                                   v37,
                                   (__int64)&v53[1]);
            }
            v42 = v38[5];
            v38[5] = (__int64)v33;
            if ( v33 )
              (*(void (__fastcall **)(CProjectedShadow *, __int64 *, struct CProjectedShadowCaster *))(*(_QWORD *)v33 + 8LL))(
                v33,
                v40,
                v39);
            if ( v42 )
              (*(void (__fastcall **)(__int64, __int64 *, struct CProjectedShadowCaster *))(*(_QWORD *)v42 + 16LL))(
                v42,
                v40,
                v39);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v52);
          }
          CProjectedShadow::SetShadowOpacity(v33, v21);
          CProjectedShadow::SetBlurRadius(v33, v24);
          v44 = *((_QWORD *)v33 + 11);
          if ( v44 < (unsigned __int64)this[12]
            || v44 < (unsigned __int64)ReceiverEntry[3]
            || v44 < *((_QWORD *)v16 + 3) )
          {
            v45 = v54;
            v3 = (const struct CVisualTree *)v53[0];
            v75 = 0;
            updated = CVisual::CalcSrcToDestVisualTransform(v53[0], v43, (__int64)v51, (int)v54, (char)v74);
            v13 = updated;
            if ( updated < 0 )
            {
              v50 = 881;
              goto LABEL_69;
            }
            v46 = this[11];
            v69 = 0;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v46, v51, (struct CVisual *)v68, v48);
            v13 = updated;
            if ( updated < 0 )
            {
              v50 = 884;
              goto LABEL_69;
            }
            v56 = v70[0];
            v60 = v71;
            v57 = v70[1];
            v58 = v70[2];
            v59 = v70[3];
            CMILMatrix::Multiply((CMILMatrix *)&v56, (const struct CMILMatrix *)v68);
            v47 = this[11];
            v67 = 0;
            v68[0] = v56;
            v69 = v60;
            v68[1] = v57;
            v68[2] = v58;
            v68[3] = v59;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v47, v45, (struct CVisual *)v66, v49);
            v13 = updated;
            if ( updated < 0 )
            {
              v50 = 888;
              goto LABEL_69;
            }
            v61 = v74[0];
            v65 = v75;
            v62 = v74[1];
            v63 = v74[2];
            v64 = v74[3];
            CMILMatrix::Multiply((CMILMatrix *)&v61, (const struct CMILMatrix *)v66);
            v66[0] = v61;
            v67 = v65;
            v66[1] = v62;
            v66[2] = v63;
            v66[3] = v64;
            CProjectedShadow::SetTransforms(
              v33,
              (const struct CMILMatrix *)v70,
              (const struct CMILMatrix *)v68,
              (const struct CMILMatrix *)v66);
          }
          else
          {
            v3 = (const struct CVisualTree *)v53[0];
          }
        }
        else
        {
LABEL_16:
          std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
            ReceiverEntry + 1,
            &v79);
        }
        v16 = *(struct CComposition **)v16;
        v15 = v77;
        v14 = v55;
      }
      return v13;
    }
  }
  return 0LL;
}
