/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180004C18
 * Callers:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180004B18 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B500 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18002631C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180085DFC (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x1800866C0 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180004DDC (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x180085124 (-GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateSolidFill(_DWORD *a1, CRenderDataVisual *a2, int a3, const __m128i *a4, int a5)
{
  __m128i v6; // xmm6
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  struct CSolidRectangleInstruction *v13; // rdx
  __int128 v14; // xmm0
  struct CSolidRectangleInstruction *v16; // rdx
  __int128 v17; // xmm0
  __int128 v18; // xmm6
  unsigned int v19; // edi
  __m128i v20; // xmm2
  unsigned int v21; // eax
  float v22; // xmm1_4
  __m128i v23; // xmm0
  int v24; // eax
  float v25; // xmm0_4
  struct CSolidRectangleInstruction *v26; // rdx
  __int64 v27; // rdx
  int v28; // [rsp+20h] [rbp-50h]
  struct CSolidRectangleInstruction *v29; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v30; // [rsp+38h] [rbp-38h] BYREF
  __int128 v31; // [rsp+48h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v29 = 0LL;
  v6 = _mm_loadu_si128(a4);
  v9 = CRenderDataVisual::ClearInstructions(a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v27 = 963LL;
    goto LABEL_31;
  }
  *(float *)&v31 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  *((float *)&v31 + 1) = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v11 = a1[71];
  *((float *)&v31 + 2) = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  if ( (v11 & 0x800) != 0 )
    a5 = 0;
  HIDWORD(v31) = a5;
  if ( (v11 & 4) == 0 )
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v29);
    v9 = CSolidRectangleInstruction::Create(
           *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
           &v29);
    v10 = v9;
    if ( v9 < 0 )
    {
      v27 = 1028LL;
    }
    else
    {
      v16 = v29;
      v17 = v31;
      *((__m128i *)v29 + 2) = v6;
      *((_OWORD *)v16 + 1) = v17;
      v9 = CRenderDataVisual::AddInstruction(a2, v16);
      v10 = v9;
      if ( v9 >= 0 )
        goto LABEL_8;
      v27 = 1031LL;
    }
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v9,
      v28);
    goto LABEL_9;
  }
  if ( (v11 & 8) != 0 )
  {
    v18 = v31;
    *(_QWORD *)&v30.left = 0LL;
    v19 = 0;
    *(_QWORD *)&v30.right = 0LL;
    while ( CDesktopManager::GetMonitorRectAtIndex(v19, &v30) )
    {
      if ( v30.left || v30.top )
      {
        v20 = _mm_cvtsi32_si128(v30.top - a1[155]);
        v21 = 0;
        v22 = (float)(v30.left - a1[154]);
        if ( v30.right - v30.left >= 0 )
          v21 = v30.right - v30.left;
        v23 = _mm_cvtsi32_si128(v21);
        v24 = 0;
        LODWORD(v25) = _mm_cvtepi32_ps(v23).m128_u32[0];
        if ( v30.bottom - v30.top >= 0 )
          v24 = v30.bottom - v30.top;
        *(float *)&v31 = (float)(v30.left - a1[154]);
        *((float *)&v31 + 1) = _mm_cvtepi32_ps(v20).m128_f32[0];
        *((float *)&v31 + 2) = v25 + v22;
        *((float *)&v31 + 3) = (float)v24 + *((float *)&v31 + 1);
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v29);
        v9 = CSolidRectangleInstruction::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
               &v29);
        v10 = v9;
        if ( v9 < 0 )
        {
          v27 = 998LL;
          goto LABEL_31;
        }
        v26 = v29;
        *((_OWORD *)v29 + 2) = v31;
        *((_OWORD *)v26 + 1) = v18;
        v9 = CRenderDataVisual::AddInstruction(a2, v26);
        v10 = v9;
        if ( v9 < 0 )
        {
          v27 = 1001LL;
          goto LABEL_31;
        }
      }
      ++v19;
    }
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v29);
  v9 = CSolidRectangleInstruction::Create(
         *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
         &v29);
  v10 = v9;
  if ( v9 < 0 )
  {
    v27 = 1012LL;
    goto LABEL_31;
  }
  v13 = v29;
  v14 = v31;
  *((_OWORD *)v29 + 2) = _xmm;
  *((_OWORD *)v13 + 1) = v14;
  v9 = CRenderDataVisual::AddInstruction(a2, v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    v27 = 1015LL;
    goto LABEL_31;
  }
LABEL_7:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 168LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
    1LL,
    0LL);
LABEL_8:
  v10 = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v29);
  return v10;
}
