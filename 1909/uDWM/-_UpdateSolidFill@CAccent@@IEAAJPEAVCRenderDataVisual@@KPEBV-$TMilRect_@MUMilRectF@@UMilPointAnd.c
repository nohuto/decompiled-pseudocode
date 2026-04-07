/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800023B0
 * Callers:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x1800022B0 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B9E0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180026AD0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18008C350 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x18008C4D8 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180002564 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180002FE4 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180077E80 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x18008B9F0 (-GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateSolidFill(_DWORD *a1, CRenderDataVisual *a2, int a3, const __m128i *a4, int a5)
{
  __m128i v6; // xmm6
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // xmm0_4
  struct CSolidRectangleInstruction *v13; // rdx
  __int128 v14; // xmm0
  struct CSolidRectangleInstruction *v16; // rdx
  __int128 v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int128 v20; // xmm6
  unsigned int v21; // edi
  __m128i v22; // xmm2
  unsigned int v23; // eax
  float v24; // xmm1_4
  __m128i v25; // xmm0
  int v26; // eax
  float v27; // xmm0_4
  struct CSolidRectangleInstruction *v28; // rdx
  int v29; // [rsp+20h] [rbp-50h]
  struct CSolidRectangleInstruction *v30; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v31; // [rsp+38h] [rbp-38h] BYREF
  __int128 v32; // [rsp+48h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v30 = 0LL;
  v6 = _mm_loadu_si128(a4);
  v9 = CRenderDataVisual::ClearInstructions(a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v19 = 971LL;
    goto LABEL_32;
  }
  *(float *)&v32 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  *((float *)&v32 + 1) = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v11 = a1[71];
  *((float *)&v32 + 2) = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  if ( (v11 & 0x800) != 0 )
    v12 = 0;
  else
    v12 = a5;
  HIDWORD(v32) = v12;
  if ( (v11 & 4) != 0 )
  {
    if ( (v11 & 8) != 0 )
    {
      v20 = v32;
      *(_QWORD *)&v31.left = 0LL;
      v21 = 0;
      *(_QWORD *)&v31.right = 0LL;
      while ( CDesktopManager::GetMonitorRectAtIndex(v21, &v31) )
      {
        if ( v31.left || v31.top )
        {
          v22 = _mm_cvtsi32_si128(v31.top - a1[155]);
          v23 = 0;
          v24 = (float)(v31.left - a1[154]);
          if ( v31.right - v31.left >= 0 )
            v23 = v31.right - v31.left;
          v25 = _mm_cvtsi32_si128(v23);
          v26 = 0;
          LODWORD(v27) = _mm_cvtepi32_ps(v25).m128_u32[0];
          if ( v31.bottom - v31.top >= 0 )
            v26 = v31.bottom - v31.top;
          *(float *)&v32 = (float)(v31.left - a1[154]);
          *((float *)&v32 + 1) = _mm_cvtepi32_ps(v22).m128_f32[0];
          *((float *)&v32 + 2) = v27 + v24;
          *((float *)&v32 + 3) = (float)v26 + *((float *)&v32 + 1);
          Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v30);
          v9 = CSolidRectangleInstruction::Create(&v30);
          v10 = v9;
          if ( v9 < 0 )
          {
            v19 = 1006LL;
            goto LABEL_32;
          }
          v28 = v30;
          *((_OWORD *)v30 + 2) = v32;
          *((_OWORD *)v28 + 1) = v20;
          v9 = CRenderDataVisual::AddInstruction(a2, v28);
          v10 = v9;
          if ( v9 < 0 )
          {
            v19 = 1009LL;
            goto LABEL_32;
          }
        }
        ++v21;
      }
      goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v30);
    v9 = CSolidRectangleInstruction::Create(&v30);
    v10 = v9;
    if ( v9 < 0 )
    {
      v19 = 1020LL;
    }
    else
    {
      v16 = v30;
      v17 = v32;
      *((_OWORD *)v30 + 2) = _xmm;
      *((_OWORD *)v16 + 1) = v17;
      v9 = CRenderDataVisual::AddInstruction(a2, v16);
      v10 = v9;
      if ( v9 >= 0 )
      {
LABEL_13:
        LOBYTE(v18) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                       + 5)
                                                                                     + 16LL)
                                                                       + 176LL))(
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
          v18,
          0LL,
          0LL,
          0);
        goto LABEL_7;
      }
      v19 = 1023LL;
    }
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v9,
      v29);
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v30);
  v9 = CSolidRectangleInstruction::Create(&v30);
  v10 = v9;
  if ( v9 < 0 )
  {
    v19 = 1036LL;
    goto LABEL_32;
  }
  v13 = v30;
  v14 = v32;
  *((__m128i *)v30 + 2) = v6;
  *((_OWORD *)v13 + 1) = v14;
  v9 = CRenderDataVisual::AddInstruction(a2, v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    v19 = 1039LL;
    goto LABEL_32;
  }
LABEL_7:
  v10 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v30);
  return v10;
}
