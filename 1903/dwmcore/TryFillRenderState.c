/*
 * XREFs of TryFillRenderState @ 0x180251E48
 * Callers:
 *     ?TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180251FD4 (-TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800638F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EC4DF (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18020F150 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 */

bool __fastcall TryFillRenderState(CDrawingContext *this, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  bool result; // al
  unsigned __int64 v11; // xmm1_8
  int v12; // eax
  int v13; // xmm0_4
  int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  float v17; // xmm0_4
  int v18; // edx
  float v19; // xmm0_4
  int IsHDRTarget; // ecx
  __int128 v21; // [rsp+20h] [rbp-39h] BYREF
  __int128 v22; // [rsp+30h] [rbp-29h]
  __int128 v23; // [rsp+40h] [rbp-19h]
  __int64 v24; // [rsp+50h] [rbp-9h]
  int v25; // [rsp+60h] [rbp+7h]
  float X[6]; // [rsp+70h] [rbp+17h] BYREF

  memset_0(&v21, 0, 0x38uLL);
  v25 = 0;
  v8 = v22;
  *(_OWORD *)a4 = v21;
  v9 = v23;
  *(_OWORD *)(a4 + 16) = v8;
  *(_QWORD *)&v8 = v24;
  *(_OWORD *)(a4 + 32) = v9;
  *(_QWORD *)(a4 + 48) = v8;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)&v21);
  result = CMILMatrix::Is2DAffine<1>((__int64)&v21, 1);
  if ( result )
  {
    *(_QWORD *)X = v21;
    *(_QWORD *)&X[2] = v22;
    v11 = _mm_unpacklo_ps((__m128)(unsigned int)v24, (__m128)HIDWORD(v24)).m128_u64[0];
    *(_OWORD *)a4 = *(_OWORD *)X;
    *(_QWORD *)(a4 + 16) = v11;
    v12 = *((_DWORD *)this + 816);
    if ( v12 )
      v13 = *(_DWORD *)(*((_QWORD *)this + 410) + 4LL * (unsigned int)(v12 - 1));
    else
      v13 = (int)FLOAT_1_0;
    *(_DWORD *)(a4 + 24) = v13;
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)a2 + 328LL))(a2, X);
    v14 = (int)floorf_0(X[0]);
    v15 = X[2];
    *(_DWORD *)(a4 + 28) = v14;
    v16 = (int)ceilf_0(v15);
    v17 = X[1];
    *(_DWORD *)(a4 + 36) = v16;
    v18 = (int)floorf_0(v17);
    v19 = X[3];
    *(_DWORD *)(a4 + 32) = v18;
    *(_DWORD *)(a4 + 40) = (int)ceilf_0(v19);
    *(_DWORD *)(a4 + 44) = *((_DWORD *)this + 110);
    IsHDRTarget = (unsigned __int8)CDrawingContext::IsHDRTarget(this);
    result = 1;
    *(_DWORD *)(a4 + 48) = IsHDRTarget;
    *(_DWORD *)(a4 + 52) = a3;
  }
  return result;
}
