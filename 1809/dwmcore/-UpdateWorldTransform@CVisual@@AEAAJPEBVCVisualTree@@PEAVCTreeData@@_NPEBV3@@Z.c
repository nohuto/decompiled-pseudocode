/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800039BC
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800034A0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18002D790 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18003A040 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180225A60 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180029548 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18004A9A0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x1801EAC60 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateWorldTransform(
        CComposition **this,
        CVisual **a2,
        struct CTreeData *a3,
        char a4,
        const struct CTreeData *a5)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  _BYTE v15[64]; // [rsp+48h] [rbp-61h] BYREF
  int v16; // [rsp+88h] [rbp-21h]
  _BYTE v17[64]; // [rsp+98h] [rbp-11h] BYREF
  int v18; // [rsp+D8h] [rbp+2Fh]
  char v19; // [rsp+120h] [rbp+77h] BYREF

  v16 = 0;
  v18 = 0;
  v9 = ((unsigned __int64)a5 + 40) & -(__int64)(a5 != 0LL);
  CVisual::CalcEffectiveTransform(this, 5LL, v9, &v19, v15, a2, (unsigned __int64)v17 & -(__int64)(this[31] != 0LL));
  if ( a4 || this == (CComposition **)a2[3] )
  {
    LOBYTE(v10) = 1;
  }
  else if ( v19 )
  {
    LOBYTE(v10) = CMILMatrix::IsEqualTo<0>(v9, v15) ^ 1;
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  v11 = (*(__int64 (__fastcall **)(struct CTreeData *, _BYTE *, __int64, unsigned __int64))(*(_QWORD *)a3 + 48LL))(
          a3,
          v15,
          v10,
          (unsigned __int64)v17 & -(__int64)(this[31] != 0LL));
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x802u);
  }
  else if ( CVisual::GetInteractionInternal((CVisual *)this) && (*((_BYTE *)this + 94) & 2) != 0 )
  {
    a5 = 0LL;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&a5);
    if ( (int)CComposition::GetManipulationManager(this[2], &a5) >= 0 )
      CManipulationManager::NotifyVisualPropertyChange(a5, (struct CVisual *)this, (const struct CMILMatrix *)v15);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&a5);
  }
  return v13;
}
