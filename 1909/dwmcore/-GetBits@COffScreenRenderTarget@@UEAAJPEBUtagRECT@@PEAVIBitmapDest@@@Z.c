/*
 * XREFs of ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1801992A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180022AA8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetBits(
        COffScreenRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  __int64 v5; // rcx
  float left; // xmm9_4
  float top; // xmm6_4
  float right; // xmm8_4
  float bottom; // xmm7_4
  unsigned int v10; // ebx
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  _DWORD *v15; // rax
  signed int v16; // eax
  __int64 v17; // rcx
  float v19; // [rsp+38h] [rbp-39h] BYREF
  float v20; // [rsp+3Ch] [rbp-35h]
  float v21; // [rsp+40h] [rbp-31h]
  float v22; // [rsp+44h] [rbp-2Dh]
  _DWORD v23[4]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v24[16]; // [rsp+58h] [rbp-19h] BYREF

  v5 = **((_QWORD **)this + 26);
  left = (float)a2->left;
  top = (float)a2->top;
  right = (float)a2->right;
  bottom = (float)a2->bottom;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v5 + 48LL))(v5, &v19);
    v11 = v19;
    if ( left > v19 )
    {
      v11 = left;
      v19 = left;
    }
    v12 = v20;
    if ( top > v20 )
    {
      v20 = top;
      v12 = top;
    }
    v13 = v21;
    if ( v21 > right )
    {
      v21 = right;
      v13 = right;
    }
    v14 = v22;
    if ( v22 > bottom )
    {
      v22 = bottom;
      v14 = bottom;
    }
    if ( v13 <= v11 || v14 <= v12 )
    {
      return 0;
    }
    else
    {
      v15 = (_DWORD *)PixelAlign((__int64)v24, (__int64)&v19);
      v23[0] = *v15;
      v23[1] = v15[1];
      v23[2] = v15[2];
      v23[3] = v15[3];
      v16 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, struct IBitmapDest *, _QWORD, _DWORD))(***((_QWORD ***)this + 26)
                                                                                              + 64LL))(
              **((_QWORD **)this + 26),
              v23,
              a3,
              0LL,
              0);
      v10 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x21Bu, 0LL);
    }
  }
  else
  {
    v10 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x88980006, 0x210u, 0LL);
  }
  return v10;
}
