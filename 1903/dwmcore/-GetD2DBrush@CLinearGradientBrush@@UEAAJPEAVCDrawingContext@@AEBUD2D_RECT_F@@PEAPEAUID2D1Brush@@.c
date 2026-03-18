/*
 * XREFs of ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x1801E1EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801F51BC (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 */

__int64 __fastcall CLinearGradientBrush::GetD2DBrush(
        CLinearGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Brush **a4)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  signed int CurrentD2DLinearGradientBrush; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  unsigned int v13; // xmm2_4
  float v14; // xmm1_4
  int v15; // xmm1_4
  __int64 v16; // rcx
  struct ID2D1Brush *v17; // rax
  struct ID2D1LinearGradientBrush *v19; // [rsp+30h] [rbp-30h] BYREF
  float v20; // [rsp+38h] [rbp-28h] BYREF
  float v21; // [rsp+3Ch] [rbp-24h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  int v23; // [rsp+50h] [rbp-10h]
  int v24; // [rsp+54h] [rbp-Ch]

  v5 = a3->right - a3->left;
  v6 = a3->bottom - a3->top;
  v19 = 0LL;
  v20 = v5;
  v21 = v6;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
  CurrentD2DLinearGradientBrush = CGradientBrush::GetCurrentD2DLinearGradientBrush(this, a2, &v19);
  v12 = CurrentD2DLinearGradientBrush;
  if ( CurrentD2DLinearGradientBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, CurrentD2DLinearGradientBrush, 0xC1u, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 27) == 1 )
    {
      *(float *)&v13 = (float)(v20 * *((float *)this + 48)) + a3->left;
      *(float *)&v22 = (float)(*((float *)this + 46) * v20) + a3->left;
      v14 = (float)(v21 * *((float *)this + 49)) + a3->top;
      *(_QWORD *)((char *)&v22 + 4) = __PAIR64__(v13, (float)(v21 * *((float *)this + 47)) + a3->top);
      *((float *)&v22 + 3) = v14;
    }
    else
    {
      v15 = *((_DWORD *)this + 48);
      *(_QWORD *)&v22 = *((_QWORD *)this + 23);
      HIDWORD(v22) = *((_DWORD *)this + 49);
      DWORD2(v22) = v15;
    }
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, _QWORD))(*(_QWORD *)v19 + 64LL))(v19, v22);
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, _QWORD))(*(_QWORD *)v19 + 72LL))(
      v19,
      *((_QWORD *)&v22 + 1));
    v16 = *((_QWORD *)this + 21);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v16 + 216LL))(v16, &v20, &v22);
    }
    else
    {
      v23 = 0;
      v24 = 0;
      v22 = _xmm;
    }
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, __int128 *))(*(_QWORD *)v19 + 40LL))(v19, &v22);
    v17 = v19;
    v19 = 0LL;
    v12 = 0;
    *a4 = v17;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
  return v12;
}
