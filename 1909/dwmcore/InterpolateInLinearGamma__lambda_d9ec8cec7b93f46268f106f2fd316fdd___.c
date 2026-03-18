/*
 * XREFs of InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd___ @ 0x1802084D0
 * Callers:
 *     ?Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800BD5B0 (-Compute@StepInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1800C1270 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 * Callees:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BE374 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1802254B4 (-Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1802255C4 (-Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 */

const __m128i *__fastcall InterpolateInLinearGamma__lambda_d9ec8cec7b93f46268f106f2fd316fdd_(
        struct _D3DCOLORVALUE *a1,
        struct _D3DCOLORVALUE *a2,
        struct _D3DCOLORVALUE *a3,
        __int64 a4)
{
  struct _D3DCOLORVALUE *v8; // rax
  struct _D3DCOLORVALUE *v9; // rax
  int v10; // ecx
  float v11; // xmm1_4
  const __m128i *result; // rax
  __int64 v13; // rcx
  __m128i v14; // xmm0
  struct _D3DCOLORVALUE v15; // [rsp+30h] [rbp-79h] BYREF
  _OWORD v16[4]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+80h] [rbp-29h]
  int v18; // [rsp+88h] [rbp-21h]
  char v19; // [rsp+8Ch] [rbp-1Dh]
  _OWORD v20[4]; // [rsp+90h] [rbp-19h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+27h]
  int v22; // [rsp+D8h] [rbp+2Fh]
  char v23; // [rsp+DCh] [rbp+33h]

  memset_0(v20, 0, sizeof(v20));
  v21 = 0LL;
  memset_0(v16, 0, sizeof(v16));
  v17 = 0LL;
  v8 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v15, a1);
  v23 = 1;
  v22 = 70;
  v20[0] = *(struct _D3DCOLORVALUE *)&v8->r;
  v9 = Convert_D2D1_COLOR_F_sRGB_To_D2D1_COLOR_F_scRGB(&v15, a2);
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(double *)a4;
  v18 = 70;
  v19 = 1;
  v16[0] = *(struct _D3DCOLORVALUE *)&v9->r;
  KeyframeInterpolation::ExpressionValueLerp(v10, v11, (__int64)v20, (unsigned int *)v16, (__int64)a3);
  result = (const __m128i *)Convert_D2D1_COLOR_F_scRGB_To_D2D1_COLOR_F_sRGB(&v15, a3);
  v13 = v17;
  v14 = _mm_loadu_si128(result);
  LODWORD(a3[4].b) = 70;
  LOBYTE(a3[4].a) = 1;
  *(__m128i *)&a3->r = v14;
  if ( v13 )
    result = (const __m128i *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v21 )
    return (const __m128i *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return result;
}
