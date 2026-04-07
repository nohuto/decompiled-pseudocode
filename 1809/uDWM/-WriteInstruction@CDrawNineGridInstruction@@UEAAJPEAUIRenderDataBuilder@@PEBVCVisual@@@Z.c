/*
 * XREFs of ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180033410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x180033780 (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLay.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::WriteInstruction(
        struct _MARGINS *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  int cyTopHeight; // r8d
  int v6; // r9d
  int cyBottomHeight; // ecx
  int v8; // r8d
  struct _MARGINS v10; // xmm0
  int v11; // eax
  unsigned int v12; // esi
  int v13; // ecx
  bool v14; // sf
  float v15; // ecx
  struct _MARGINS *v16; // rbx
  unsigned int v17; // edi
  __int64 v18; // r10
  __int64 v20; // rdx
  int v21; // r9d
  __int64 v22; // rcx
  int v23; // r8d
  __m128i v24; // xmm0
  int v25; // eax
  __int64 (__fastcall *v26)(struct IRenderDataBuilder *, float *, _QWORD); // rax
  int v27; // eax
  struct _MARGINS v28; // [rsp+30h] [rbp-50h] BYREF
  float v29; // [rsp+40h] [rbp-40h] BYREF
  float v30; // [rsp+44h] [rbp-3Ch]
  float v31; // [rsp+48h] [rbp-38h]
  float v32; // [rsp+4Ch] [rbp-34h]
  _DWORD v33[8]; // [rsp+50h] [rbp-30h] BYREF

  cyTopHeight = this[2].cyTopHeight;
  v6 = -this[2].cxLeftWidth;
  cyBottomHeight = this[2].cyBottomHeight;
  v8 = -cyTopHeight;
  v10 = this[1];
  v11 = *((_DWORD *)a3 + 30) + this[2].cxRightWidth - v6;
  v30 = *(float *)&v8;
  v12 = 0;
  v29 = *(float *)&v6;
  if ( v11 < 0 )
    *(float *)&v11 = 0.0;
  v13 = cyBottomHeight - v8;
  v14 = *((_DWORD *)a3 + 31) + v13 < 0;
  LODWORD(v15) = *((_DWORD *)a3 + 31) + v13;
  v31 = *(float *)&v11;
  if ( v14 )
    v15 = 0.0;
  v32 = v15;
  v28 = v10;
  CDrawNineGridInstruction::GetNineGridLayout(&v28, (const struct MilPointAndSizeL *)&v29, (struct NineGridLayout *)v33);
  v16 = this + 3;
  v17 = 0;
  while ( 1 )
  {
    v18 = *(_QWORD *)&v16->cxLeftWidth;
    if ( *(_QWORD *)&v16->cxLeftWidth )
    {
      v20 = v17 / 3;
      v21 = v33[v20 + 4];
      v22 = v17 % 3;
      v23 = v33[v22];
      v24 = _mm_cvtsi32_si128(v33[(unsigned int)(v22 + 1)] - v23);
      v25 = v33[(unsigned int)(v20 + 1) + 4];
      v30 = (float)v21;
      v29 = (float)v23;
      v31 = _mm_cvtepi32_ps(v24).m128_f32[0] + (float)v23;
      *(float *)v24.m128i_i32 = (float)(v25 - v21);
      v26 = *(__int64 (__fastcall **)(struct IRenderDataBuilder *, float *, _QWORD))(*(_QWORD *)a2 + 56LL);
      v32 = *(float *)v24.m128i_i32 + (float)v21;
      v27 = v26(a2, &v29, *(unsigned int *)(v18 + 24));
      v12 = v27;
      if ( v27 < 0 )
        break;
    }
    ++v17;
    v16 = (struct _MARGINS *)((char *)v16 + 8);
    if ( v17 >= 9 )
      return v12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x11Fu);
  return v12;
}
