/*
 * XREFs of ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180007C10
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008230 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x1800068A8 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x18000734C (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180007724 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180007AE8 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x180007EA4 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x180007ECC (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180007EFC (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800084B4 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180023B70 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18006E4B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18008BC4C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateCasterEntry(
        CProjectedShadowScene *this,
        const struct CVisualTree *a2,
        struct CProjectedShadowScene::CasterEntry *a3)
{
  CProjectedShadowCaster *v3; // r14
  unsigned int v7; // esi
  struct CVisual *v8; // r12
  __int64 v9; // rax
  __int64 *v10; // r15
  bool *v11; // r8
  float v12; // xmm2_4
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // ecx
  const struct CVisualTree *v17; // rdx
  int LightToCameraMatrix; // eax
  unsigned int v19; // ecx
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  struct CTreeData *TreeData; // rax
  unsigned __int64 v26; // r11
  struct D2D_VECTOR_4F v27; // [rsp+30h] [rbp-99h] BYREF
  struct D2D_VECTOR_4F v28; // [rsp+40h] [rbp-89h] BYREF
  __int128 v29; // [rsp+50h] [rbp-79h] BYREF
  __int128 v30; // [rsp+60h] [rbp-69h]
  __int128 v31; // [rsp+70h] [rbp-59h]
  __int128 v32; // [rsp+80h] [rbp-49h]
  int v33; // [rsp+90h] [rbp-39h]
  _OWORD v34[4]; // [rsp+A0h] [rbp-29h] BYREF
  int v35; // [rsp+E0h] [rbp+17h]
  const struct CVisualTree *v36; // [rsp+130h] [rbp+67h] BYREF
  __int64 v37; // [rsp+140h] [rbp+77h]

  v3 = *(CProjectedShadowCaster **)a3;
  v7 = 0;
  v8 = *(struct CVisual **)(*(_QWORD *)a3 + 56LL);
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 208LL))(*((_QWORD *)this + 11));
  *((_BYTE *)a3 + 152) = 1;
  v37 = v9;
  if ( CProjectedShadowCaster::IsEmptyMaskContent(v3) )
    goto LABEL_20;
  if ( !CProjectedShadowScene::IsValidVisual(a2, v8) )
    goto LABEL_20;
  v10 = (__int64 *)((char *)v3 + 72);
  v36 = a2;
  if ( !*(_BYTE *)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at((char *)v3 + 72, &v36)
                 + 17) )
    goto LABEL_20;
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(CProjectedShadowCaster::GetEffectiveAlpha(v3, a2, v11)) & _xmm);
  if ( v12 < 0.0000011920929 )
    goto LABEL_20;
  v36 = a2;
  v13 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
          (char *)v3 + 72,
          &v36);
  if ( v13 == *v10 || (unsigned __int64)a2 < *(_QWORD *)(v13 + 32) )
    v13 = *v10;
  if ( (float)(*(float *)(v13 + 68) - *(float *)(v13 + 60)) >= 0.5
    && (float)(*(float *)(v13 + 72) - *(float *)(v13 + 64)) >= 0.5 )
  {
    if ( *((_QWORD *)a3 + 1) < *((_QWORD *)this + 12)
      || (TreeData = CVisual::FindTreeData(v8, a2), v26 < *((_QWORD *)TreeData + 15)) )
    {
      CVisual::GetEffectiveSize(v8, (float *)&v36, (float *)&v36 + 1);
      v35 = 0;
      v27.y = *((float *)&v36 + 1) * 0.5;
      v27.z = 0.0;
      v27.x = *(float *)&v36 * 0.5;
      LODWORD(v27.w) = (_DWORD)FLOAT_1_0;
      v15 = CVisual::CalcSrcToDestVisualTransform((int)a2, v14, (__int64)v8, v37, (char)v34);
      v7 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2C4u, 0LL);
      }
      else
      {
        CMILMatrix::Transform4DVector((CMILMatrix *)v34, &v28, &v27);
        v17 = (const struct CVisualTree *)*((_QWORD *)this + 11);
        v27.x = v28.x / v28.w;
        v27.z = v28.z / v28.w;
        v27.y = v28.y / v28.w;
        LightToCameraMatrix = ShadowHelpers::GetLightToCameraMatrix(
                                a2,
                                v17,
                                (const struct CCompositionLight *)&v27,
                                (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
        v7 = LightToCameraMatrix;
        if ( LightToCameraMatrix < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, LightToCameraMatrix, 0x2CEu, 0LL);
        }
        else
        {
          v29 = v34[0];
          v33 = v35;
          v30 = v34[1];
          v31 = v34[2];
          v32 = v34[3];
          CMILMatrix::Multiply((CMILMatrix *)&v29, (struct CProjectedShadowScene::CasterEntry *)((char *)a3 + 84));
          v20 = v33;
          v21 = v30;
          *((_OWORD *)a3 + 1) = v29;
          v22 = v31;
          *((_OWORD *)a3 + 2) = v21;
          v23 = v32;
          *((_OWORD *)a3 + 3) = v22;
          *((_OWORD *)a3 + 4) = v23;
          *((_DWORD *)a3 + 20) = v20;
          *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
        }
      }
    }
    return v7;
  }
  else
  {
LABEL_20:
    *((_BYTE *)a3 + 152) = 0;
    CProjectedShadowScene::DiscardCachesForCaster(this, v3);
    return 0LL;
  }
}
