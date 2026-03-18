/*
 * XREFs of ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000BF44
 * Callers:
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000BAE0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800219C0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18007E420 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007EC10 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180082C60 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1802544A0 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18006FF40 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x18008B720 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A833C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE v25[64]; // [rsp+48h] [rbp-61h] BYREF
  int v26; // [rsp+88h] [rbp-21h]
  _BYTE v27[64]; // [rsp+98h] [rbp-11h] BYREF
  int v28; // [rsp+D8h] [rbp+2Fh]
  char v29; // [rsp+120h] [rbp+77h] BYREF

  v26 = 0;
  v28 = 0;
  v9 = ((unsigned __int64)a5 + 40) & -(__int64)(a5 != 0LL);
  CVisual::CalcEffectiveTransform(
    this,
    5LL,
    v9,
    &v29,
    v25,
    a2,
    (unsigned __int64)v27 & -(__int64)(*((_QWORD *)this + 31) != 0LL));
  if ( a4 || this == a2[3] )
  {
    LOBYTE(v10) = 1;
  }
  else if ( v29 )
  {
    LOBYTE(v10) = CMILMatrix::IsEqualTo<0>(v9, v25) ^ 1;
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  v11 = (*(__int64 (__fastcall **)(struct CTreeData *, _BYTE *, __int64, unsigned __int64))(*(_QWORD *)a3 + 48LL))(
          a3,
          v25,
          v10,
          (unsigned __int64)v27 & -(__int64)(*((_QWORD *)this + 31) != 0LL));
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
      {
        v19 = 0LL;
      }
      else
      {
        v16 += 15LL;
        v19 = (_QWORD *)((char *)v14 + 8 * i - (v16 & 7) + v16);
      }
      if ( *v19 && (*((_BYTE *)this + 94) & 2) != 0 )
      {
        a5 = 0LL;
        v20 = (CComposition *)*((_QWORD *)this + 2);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&a5, v16, v14, v17);
        ManipulationManager = CComposition::GetManipulationManager(v20, &a5);
        if ( ManipulationManager >= 0 )
          (*(void (__fastcall **)(const struct CTreeData *, CVisual *, _BYTE *))(*(_QWORD *)a5 + 96LL))(a5, this, v25);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&a5, v22, v23, v24);
      }
    }
  }
  return v13;
}
