/*
 * XREFs of ?GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x1801F5BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x1801F529C (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 */

__int64 __fastcall CRadialGradientBrush::GetD2DBrush(
        CRadialGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Brush **a4)
{
  float v4; // xmm6_4
  float v6; // xmm7_4
  float v8; // xmm10_4
  float v10; // xmm11_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  signed int CurrentD2DRadialGradientBrush; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  float v17; // xmm7_4
  __int64 v18; // rcx
  struct ID2D1Brush *v19; // rax
  struct ID2D1RadialGradientBrush *v21; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-61h]
  unsigned __int64 v23; // [rsp+48h] [rbp-59h]
  float v24; // [rsp+50h] [rbp-51h] BYREF
  float v25; // [rsp+54h] [rbp-4Dh]
  __int128 v26; // [rsp+58h] [rbp-49h] BYREF
  int v27; // [rsp+68h] [rbp-39h]
  int v28; // [rsp+6Ch] [rbp-35h]

  v4 = *((float *)this + 48);
  v6 = *((float *)this + 49);
  v8 = *((float *)this + 52);
  v10 = *((float *)this + 53);
  v12 = a3->right - a3->left;
  v13 = a3->bottom - a3->top;
  v21 = 0LL;
  v24 = v12;
  v25 = v13;
  v22 = __PAIR64__(LODWORD(v6), LODWORD(v4));
  v23 = __PAIR64__(LODWORD(v10), LODWORD(v8));
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
  CurrentD2DRadialGradientBrush = CGradientBrush::GetCurrentD2DRadialGradientBrush(this, a2, &v21);
  v16 = CurrentD2DRadialGradientBrush;
  if ( CurrentD2DRadialGradientBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, CurrentD2DRadialGradientBrush, 0xBEu, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 27) == 1 )
    {
      v17 = (float)(v6 * v25) + a3->top;
      *(float *)&v22 = (float)(v4 * v24) + a3->left;
      *(float *)&v23 = v8 * v24;
      *((float *)&v22 + 1) = v17;
      *((float *)&v23 + 1) = v10 * v25;
    }
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *, unsigned __int64))(*(_QWORD *)v21 + 64LL))(v21, v22);
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *))(*(_QWORD *)v21 + 80LL))(v21);
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *))(*(_QWORD *)v21 + 88LL))(v21);
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *, unsigned __int64))(*(_QWORD *)v21 + 72LL))(v21, v23);
    v18 = *((_QWORD *)this + 21);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v18 + 216LL))(v18, &v24, &v26);
    }
    else
    {
      v27 = 0;
      v28 = 0;
      v26 = _xmm;
    }
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *, __int128 *))(*(_QWORD *)v21 + 40LL))(v21, &v26);
    v19 = v21;
    v21 = 0LL;
    v16 = 0;
    *a4 = v19;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v21);
  return v16;
}
