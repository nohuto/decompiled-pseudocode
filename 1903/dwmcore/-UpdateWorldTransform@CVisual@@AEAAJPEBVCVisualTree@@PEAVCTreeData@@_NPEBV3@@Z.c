/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800051AC
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180004C20 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180023590 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066580 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800873F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x180087C60 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x180255C10 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180063A50 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800931D0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A44AC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateWorldTransform(
        CVisual *this,
        CVisual **a2,
        struct CTreeData *a3,
        char a4,
        const struct CTreeData *a5)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // esi
  _DWORD *v14; // r8
  __int64 v16; // rdx
  _BYTE *v17; // r9
  __int64 i; // rcx
  _QWORD *v19; // rax
  CComposition *v20; // rbx
  int ManipulationManager; // eax
  _BYTE v22[64]; // [rsp+48h] [rbp-61h] BYREF
  int v23; // [rsp+88h] [rbp-21h]
  _BYTE v24[64]; // [rsp+98h] [rbp-11h] BYREF
  int v25; // [rsp+D8h] [rbp+2Fh]
  char v26; // [rsp+120h] [rbp+77h] BYREF

  v23 = 0;
  v25 = 0;
  v9 = ((unsigned __int64)a5 + 40) & -(__int64)(a5 != 0LL);
  CVisual::CalcEffectiveTransform(
    this,
    5LL,
    v9,
    &v26,
    v22,
    a2,
    (unsigned __int64)v24 & -(__int64)(*((_QWORD *)this + 31) != 0LL));
  if ( a4 || this == a2[3] )
  {
    LOBYTE(v10) = 1;
  }
  else if ( v26 )
  {
    LOBYTE(v10) = CMILMatrix::IsEqualTo<0>(v9, v22) ^ 1;
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  v11 = (*(__int64 (__fastcall **)(struct CTreeData *, _BYTE *, __int64, unsigned __int64))(*(_QWORD *)a3 + 48LL))(
          a3,
          v22,
          v10,
          (unsigned __int64)v24 & -(__int64)(*((_QWORD *)this + 31) != 0LL));
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x84Fu, 0LL);
  }
  else
  {
    v14 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v14 & 0x400000) != 0 )
    {
      v16 = (unsigned int)v14[1];
      v17 = v14 + 2;
      for ( i = 0LL; (unsigned int)i < (unsigned int)v16; ++v17 )
      {
        if ( *v17 == 10 )
          break;
        i = (unsigned int)(i + 1);
      }
      if ( (unsigned int)i >= (unsigned int)v16 )
        v19 = 0LL;
      else
        v19 = (_QWORD *)((char *)v14 + 8 * i - (((_BYTE)v16 + 15) & 7) + v16 + 15);
      if ( *v19 && (*((_BYTE *)this + 94) & 2) != 0 )
      {
        a5 = 0LL;
        v20 = (CComposition *)*((_QWORD *)this + 2);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&a5);
        ManipulationManager = CComposition::GetManipulationManager(v20, &a5);
        if ( ManipulationManager >= 0 )
          (*(void (__fastcall **)(const struct CTreeData *, CVisual *, _BYTE *))(*(_QWORD *)a5 + 96LL))(a5, this, v22);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&a5);
      }
    }
  }
  return v13;
}
