/*
 * XREFs of ?GetD2DGradientBrush@CLinearGradientBrush@@QEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801A4C58
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180223A28 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180199F6C (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 */

__int64 __fastcall CLinearGradientBrush::GetD2DGradientBrush(
        CLinearGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1LinearGradientBrush **a4)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  int CurrentD2DLinearGradientBrush; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // xmm2_4
  float v13; // xmm1_4
  int v14; // xmm1_4
  struct ID2D1LinearGradientBrush *v15; // rbx
  __int64 v16; // rcx
  float v18; // [rsp+30h] [rbp-30h] BYREF
  float v19; // [rsp+34h] [rbp-2Ch]
  struct ID2D1LinearGradientBrush *v20; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+50h] [rbp-10h]
  int v23; // [rsp+54h] [rbp-Ch]

  v6 = a3->right - a3->left;
  v7 = a3->bottom - a3->top;
  v20 = 0LL;
  v18 = v6;
  v19 = v7;
  CurrentD2DLinearGradientBrush = CGradientBrush::GetCurrentD2DLinearGradientBrush(this, a2, &v20);
  v11 = CurrentD2DLinearGradientBrush;
  if ( CurrentD2DLinearGradientBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, CurrentD2DLinearGradientBrush, 0xE8u);
    if ( v20 )
      (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  else
  {
    if ( *((_DWORD *)this + 25) == 1 )
    {
      *(float *)&v12 = (float)(v18 * *((float *)this + 46)) + a3->left;
      *(float *)&v21 = (float)(*((float *)this + 44) * v18) + a3->left;
      v13 = (float)(v19 * *((float *)this + 47)) + a3->top;
      *(_QWORD *)((char *)&v21 + 4) = __PAIR64__(v12, (float)(v19 * *((float *)this + 45)) + a3->top);
      *((float *)&v21 + 3) = v13;
    }
    else
    {
      v14 = *((_DWORD *)this + 46);
      *(_QWORD *)&v21 = *((_QWORD *)this + 22);
      HIDWORD(v21) = *((_DWORD *)this + 47);
      DWORD2(v21) = v14;
    }
    v15 = v20;
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, _QWORD))(*(_QWORD *)v20 + 64LL))(v20, v21);
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, _QWORD))(*(_QWORD *)v15 + 72LL))(
      v15,
      *((_QWORD *)&v21 + 1));
    v16 = *((_QWORD *)this + 20);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v16 + 176LL))(v16, &v18, &v21);
    }
    else
    {
      v22 = 0;
      v23 = 0;
      v21 = _xmm;
    }
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, __int128 *))(*(_QWORD *)v15 + 40LL))(v15, &v21);
    *a4 = v15;
    return 0;
  }
  return v11;
}
