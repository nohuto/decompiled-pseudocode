/*
 * XREFs of TryFillRenderState @ 0x180178338
 * Callers:
 *     ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x180177F14 (-TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V-$com_ptr_t@UI.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18003E3F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 *     floorf_0 @ 0x1800F000F (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180177EC4 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 */

bool __fastcall TryFillRenderState(CDrawingContext *this, __int64 a2, __int64 a3)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  bool result; // al
  unsigned __int64 v9; // xmm1_8
  int v10; // eax
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm0_4
  int v16; // edx
  float v17; // xmm0_4
  int IsHDRTarget; // ecx
  __int128 v19; // [rsp+20h] [rbp-29h] BYREF
  __int128 v20; // [rsp+30h] [rbp-19h]
  __int128 v21; // [rsp+40h] [rbp-9h]
  __int64 v22; // [rsp+50h] [rbp+7h]
  int v23; // [rsp+60h] [rbp+17h]
  float X[6]; // [rsp+70h] [rbp+27h] BYREF

  memset_0(&v19, 0, 0x38uLL);
  v23 = 0;
  v6 = v20;
  *(_OWORD *)a3 = v19;
  v7 = v21;
  *(_OWORD *)(a3 + 16) = v6;
  *(_QWORD *)&v6 = v22;
  *(_OWORD *)(a3 + 32) = v7;
  *(_QWORD *)(a3 + 48) = v6;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)&v19);
  result = CMILMatrix::Is2DAffine<1>((__int64)&v19, 1);
  if ( result )
  {
    *(_QWORD *)X = v19;
    *(_QWORD *)&X[2] = v20;
    v9 = _mm_unpacklo_ps((__m128)(unsigned int)v22, (__m128)HIDWORD(v22)).m128_u64[0];
    *(_OWORD *)a3 = *(_OWORD *)X;
    *(_QWORD *)(a3 + 16) = v9;
    v10 = *((_DWORD *)this + 816);
    if ( v10 )
      v11 = *(float *)(*((_QWORD *)this + 410) + 4LL * (unsigned int)(v10 - 1));
    else
      v11 = FLOAT_1_0;
    *(float *)(a3 + 24) = v11;
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)a2 + 328LL))(a2, X);
    v12 = (int)floorf_0(X[0]);
    v13 = X[2];
    *(_DWORD *)(a3 + 28) = v12;
    v14 = (int)ceilf_0(v13);
    v15 = X[1];
    *(_DWORD *)(a3 + 36) = v14;
    v16 = (int)floorf_0(v15);
    v17 = X[3];
    *(_DWORD *)(a3 + 32) = v16;
    *(_DWORD *)(a3 + 40) = (int)ceilf_0(v17);
    *(_DWORD *)(a3 + 44) = *((_DWORD *)this + 110);
    IsHDRTarget = (unsigned __int8)CDrawingContext::IsHDRTarget(this);
    result = 1;
    *(_DWORD *)(a3 + 48) = IsHDRTarget;
  }
  return result;
}
