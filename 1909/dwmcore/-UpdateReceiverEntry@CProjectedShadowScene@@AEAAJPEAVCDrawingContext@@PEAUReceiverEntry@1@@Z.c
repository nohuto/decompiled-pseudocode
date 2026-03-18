/*
 * XREFs of ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180006690
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180006990 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180005E84 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x180006968 (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180006C14 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180006D70 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180006FD4 (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180007778 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180035AFC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowScene::UpdateReceiverEntry(
        CProjectedShadowScene *this,
        struct CDrawingContext *a2,
        CProjectedShadowReceiver **a3)
{
  CProjectedShadowReceiver *v3; // rsi
  const struct CVisualTree *v6; // r15
  unsigned int v8; // ebp
  CVisual *v9; // r14
  int v10; // eax
  int v11; // r12d
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ecx
  struct CTreeData *TreeData; // rax
  unsigned __int64 v18; // r11
  struct CProjectedShadowScene::ReceiverEntry *ReceiverEntry; // rax
  float v20[4]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *a3;
  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 757);
  v8 = 0;
  v9 = (CVisual *)*((_QWORD *)*a3 + 7);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 208LL))(*((_QWORD *)this + 11));
  *((_BYTE *)a3 + 100) = 1;
  v11 = v10;
  if ( !CProjectedShadowReceiver::IsEmptyMaskContent(v3) && CProjectedShadowScene::IsValidVisual(v6, v9) )
  {
    v12 = *((_QWORD *)v3 + 12);
    if ( !v12 )
      v12 = *(_QWORD *)(*((_QWORD *)v3 + 2) + 144LL);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, float *))(*(_QWORD *)v12 + 208LL))(
           v12,
           0LL,
           (__int64)v9 + 132,
           v20) >= 0
      && (float)(v20[2] - v20[0]) >= 0.5
      && (float)(v20[3] - v20[1]) >= 0.5 )
    {
      if ( (unsigned __int64)a3[3] >= *((_QWORD *)this + 12) )
      {
        TreeData = CVisual::FindTreeData(v9, v6);
        if ( v18 >= *((_QWORD *)TreeData + 15) )
          return v8;
      }
      v14 = CVisual::CalcSrcToDestVisualTransform((int)v6, v13, (__int64)v9, v11, (unsigned __int8)a3 + 32);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2F8u, 0LL);
        return v8;
      }
      a3[3] = *(CProjectedShadowReceiver **)(*((_QWORD *)this + 2) + 384LL);
      if ( CProjectedShadowScene::IsShadowInFrontOfReceiver(
             this,
             a2,
             (const struct CProjectedShadowScene::ReceiverEntry *)a3) )
      {
        return v8;
      }
    }
  }
  *((_BYTE *)a3 + 100) = 0;
  ReceiverEntry = CProjectedShadowScene::FindReceiverEntry(this, v3);
  *((_QWORD *)ReceiverEntry + 3) = 0LL;
  std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear((char *)ReceiverEntry + 8);
  return 0LL;
}
