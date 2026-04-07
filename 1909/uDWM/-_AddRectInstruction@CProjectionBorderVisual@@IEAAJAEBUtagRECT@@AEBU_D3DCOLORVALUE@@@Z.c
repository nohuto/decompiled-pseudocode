/*
 * XREFs of ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x18008AB70
 * Callers:
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x18008AA04 (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180002564 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180028CC8 (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_AddRectInstruction(
        CProjectionBorderVisual *this,
        const struct tagRECT *a2,
        const struct _D3DCOLORVALUE *a3)
{
  __m128i v3; // xmm0
  __m128i v5; // xmm1
  __m128i v7; // xmm0
  int v9; // eax
  CBaseObject *v10; // rdi
  unsigned int v11; // ebx
  CBaseObject *v12; // rdx
  __int128 v13; // xmm1
  int v14; // eax
  CBaseObject *v15; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+38h] [rbp-20h]

  v3 = _mm_cvtsi32_si128(a2->left);
  v5 = _mm_cvtsi32_si128(a2->right);
  v15 = 0LL;
  LODWORD(v16) = _mm_cvtepi32_ps(v3).m128_u32[0];
  v7 = _mm_cvtsi32_si128(a2->top);
  DWORD2(v16) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *(float *)v5.m128i_i32 = (float)a2->bottom;
  DWORD1(v16) = _mm_cvtepi32_ps(v7).m128_u32[0];
  HIDWORD(v16) = v5.m128i_i32[0];
  if ( IsPPIEdition() )
    return 0LL;
  v9 = CSolidRectangleInstruction::Create(&v15);
  v10 = v15;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = v15;
    v13 = *(_OWORD *)&a3->r;
    *((_OWORD *)v15 + 2) = v16;
    *((_OWORD *)v10 + 1) = v13;
    v14 = CRenderDataVisual::AddInstruction(this, v12);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x3Bu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x38u);
  }
  if ( v10 )
    CBaseObject::Release(v10);
  return v11;
}
