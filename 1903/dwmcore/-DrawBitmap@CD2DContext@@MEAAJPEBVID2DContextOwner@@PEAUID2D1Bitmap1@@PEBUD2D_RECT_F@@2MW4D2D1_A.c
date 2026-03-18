/*
 * XREFs of ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801606F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180026410 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18004CF4C (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015F794 (McTemplateU0qq.c)
 *     ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801608FC (-DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801623F4 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     McTemplateU0ffff @ 0x1801624A4 (McTemplateU0ffff.c)
 */

__int64 __fastcall CD2DContext::DrawBitmap(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_RECT_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  int v13; // eax
  enum D2D1_PRIMITIVE_BLEND v14; // r14d
  struct D2D_RECT_F v15; // xmm0
  int v16; // r8d
  int v17; // r9d
  int v18; // eax
  struct D2D_RECT_F v20; // [rsp+50h] [rbp-79h] BYREF
  __int64 v21; // [rsp+60h] [rbp-69h] BYREF
  int v22; // [rsp+68h] [rbp-61h]
  int v23; // [rsp+6Ch] [rbp-5Dh]
  __int64 v24; // [rsp+70h] [rbp-59h]
  __int64 v25; // [rsp+78h] [rbp-51h]
  __int64 v26; // [rsp+80h] [rbp-49h]
  int v27; // [rsp+88h] [rbp-41h]
  int v28; // [rsp+8Ch] [rbp-3Dh]
  __int64 v29; // [rsp+90h] [rbp-39h]
  int v30; // [rsp+98h] [rbp-31h]
  int v31; // [rsp+9Ch] [rbp-2Dh]
  int v32; // [rsp+A0h] [rbp-29h]
  struct D2D_MATRIX_3X2_F v33; // [rsp+B0h] [rbp-19h] BYREF

  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v13 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Start, 14, v13);
  }
  v14 = a9;
  CD2DContext::SetCommonState(this, a2, a9, &a7, &v33);
  if ( a5 )
  {
    if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      v32 = 0;
      v22 = 0;
      v23 = 0;
      v25 = 0LL;
      v26 = 0LL;
      v28 = 0;
      v30 = 0;
      v21 = *(_QWORD *)&v33.m11;
      v15 = *a5;
      v27 = 1065353216;
      v24 = *(_QWORD *)&v33.m[1][0];
      v20 = v15;
      v31 = 1065353216;
      v29 = *(_QWORD *)&v33.m[2][0];
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v21, (__int64)&v20, &v33.m11);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0ffff(
          (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
          v16,
          v17,
          SLOBYTE(v33.m[1][0]),
          SLOBYTE(v33.m[1][1]));
    }
  }
  CD2DContext::DrawBitmapAsCommandList(this, a2, a3, a4, a5, a6, a7, a8, v14);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v18 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 14, v18);
  }
  return 0LL;
}
