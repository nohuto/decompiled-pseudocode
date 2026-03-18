/*
 * XREFs of ?GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAVCVisual@@V?$span@PEAVCMILMatrix@@$0?0@4@@Z @ 0x1801CB2A8
 * Callers:
 *     ?GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@PEAVCVisual@@1PEAVCMILMatrix@@@Z @ 0x1801CB24C (-GetSrcToDestVisualTransform@CProjectedShadow@@CAJPEBVCDrawingContext@@PEAVCVisual@@1PEAVCMILMat.c)
 *     ?UpdateTransforms@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801CC728 (-UpdateTransforms@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180026618 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18002CB70 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180073D1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CProjectedShadow::GetSrcToDestVisualTransform(
        __int64 a1,
        __int64 *a2,
        struct _LIST_ENTRY *a3,
        __int64 *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  char v6; // r15
  gsl::details *v7; // rcx
  __int64 v8; // rdi
  struct _LIST_ENTRY *v12; // r14
  __int64 v13; // rcx
  int WorldTransform; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v17; // r8
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  unsigned int v25; // [rsp+28h] [rbp-E0h]
  __int128 v26; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+48h] [rbp-C0h]
  __int128 v28; // [rsp+58h] [rbp-B0h]
  __int128 v29; // [rsp+68h] [rbp-A0h]
  int v30; // [rsp+78h] [rbp-90h]
  _OWORD v31[4]; // [rsp+88h] [rbp-80h] BYREF
  int v32; // [rsp+C8h] [rbp-40h]
  _BYTE v33[64]; // [rsp+D8h] [rbp-30h] BYREF
  int v34; // [rsp+118h] [rbp+10h]
  gsl::details *v35; // [rsp+158h] [rbp+50h]

  v4 = *a2;
  v5 = 0;
  v34 = 0;
  v6 = 0;
  v7 = *(gsl::details **)(a1 + 6056);
  v8 = 0LL;
  v35 = v7;
  if ( v4 <= 0 )
    return v5;
  while ( 1 )
  {
    if ( v8 < 0 || v8 >= v4 )
    {
LABEL_20:
      gsl::details::terminate(v7);
      JUMPOUT(0x1801CB4B1LL);
    }
    v12 = *(struct _LIST_ENTRY **)(a2[1] + 8 * v8);
    if ( v12 != a3 )
      break;
    if ( v8 >= *a4 )
      goto LABEL_20;
    v13 = *(_QWORD *)(a4[1] + 8 * v8);
    *(_OWORD *)v13 = _xmm;
    *(_WORD *)(v13 + 64) = 32085;
    *(_OWORD *)(v13 + 16) = _xmm;
    *(_OWORD *)(v13 + 32) = _xmm;
    *(_OWORD *)(v13 + 48) = _xmm;
LABEL_13:
    v4 = *a2;
    if ( ++v8 >= *a2 )
      return v5;
    v7 = v35;
  }
  if ( !v6 )
  {
    WorldTransform = CVisual::GetWorldTransform(a3, (__int64)v7, 3, (__int64)v33, 0LL, 0LL);
    v5 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      v25 = 1108;
      goto LABEL_17;
    }
    if ( !CMILMatrix::Invert((CMILMatrix *)v33, v15, v17) )
    {
      v5 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2003304441, 0x457u);
      return v5;
    }
    v7 = v35;
    v6 = 1;
  }
  v32 = 0;
  WorldTransform = CVisual::GetWorldTransform(v12, (__int64)v7, 3, (__int64)v31, 0LL, 0LL);
  v5 = WorldTransform;
  if ( WorldTransform >= 0 )
  {
    v26 = v31[0];
    v30 = v32;
    v27 = v31[1];
    v28 = v31[2];
    v29 = v31[3];
    CMILMatrix::Multiply((CMILMatrix *)&v26, (const struct CMILMatrix *)v33);
    v19 = (__int64 *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a4, v8);
    v20 = v27;
    v21 = *v19;
    LODWORD(v19) = v30;
    *(_OWORD *)v21 = v26;
    v22 = v28;
    *(_OWORD *)(v21 + 16) = v20;
    v23 = v29;
    *(_OWORD *)(v21 + 32) = v22;
    *(_OWORD *)(v21 + 48) = v23;
    *(_DWORD *)(v21 + 64) = (_DWORD)v19;
    goto LABEL_13;
  }
  v25 = 1121;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, WorldTransform, v25);
  return v5;
}
