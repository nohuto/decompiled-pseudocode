/*
 * XREFs of ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801608FC
 * Callers:
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801606F0 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 * Callees:
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180051310 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180059A50 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18016A1C4 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 */

__int64 __fastcall CD2DContext::DrawBitmapAsCommandList(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_RECT_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_INTERPOLATION_MODE a8)
{
  __int64 v10; // rax
  struct ID2D1PrivateCompositorBuffer *v11; // rdi
  struct ID2D1PrivateCompositorBuffer *v12; // r14
  __int64 v14; // rcx
  int v15; // ebx
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm2_4
  float bottom; // xmm3_4
  FLOAT v20; // xmm6_4
  FLOAT v21; // xmm7_4
  FLOAT v22; // xmm8_4
  FLOAT v23; // xmm9_4
  signed int v24; // eax
  __int64 v25; // rcx
  signed int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  _DWORD *v29; // rsi
  FLOAT *v30; // rbx
  __int128 v31; // xmm0
  int v32; // eax
  __int64 (__fastcall *v33)(CD2DContext *, const struct ID2DContextOwner *, __int64); // rbx
  unsigned int v34; // r9d
  unsigned int v36; // [rsp+28h] [rbp-E0h]
  struct ID2D1PrivateCompositorBuffer *v37; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1PrivateCompositorBuffer *v38; // [rsp+70h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h] BYREF
  float v40; // [rsp+80h] [rbp-88h] BYREF
  float v41; // [rsp+84h] [rbp-84h]
  struct ID2D1Bitmap *v42; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v43[4]; // [rsp+90h] [rbp-78h] BYREF
  int v44; // [rsp+94h] [rbp-74h]
  __int128 v45; // [rsp+98h] [rbp-70h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-60h]
  FLOAT v47; // [rsp+B0h] [rbp-58h] BYREF
  FLOAT v48; // [rsp+B4h] [rbp-54h]
  FLOAT v49; // [rsp+B8h] [rbp-50h]
  FLOAT v50; // [rsp+BCh] [rbp-4Ch]
  float v51[4]; // [rsp+C0h] [rbp-48h] BYREF

  v39 = 0LL;
  v42 = a3;
  v10 = *(_QWORD *)a3;
  v11 = 0LL;
  v12 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  (*(void (__fastcall **)(struct ID2D1Bitmap *, float *))(v10 + 32))(a3, &v40);
  (*(void (__fastcall **)(struct ID2D1Bitmap *, _BYTE *))(*(_QWORD *)v42 + 48LL))(v42, v43);
  v15 = *((_DWORD *)this + 220);
  if ( v15 < 0 )
  {
    v34 = *((_DWORD *)this + 220);
    v36 = 141;
  }
  else
  {
    if ( a4 )
    {
      left = a4->left;
      top = a4->top;
      right = a4->right;
      bottom = a4->bottom;
    }
    else
    {
      left = 0.0;
      top = 0.0;
      right = v40;
      bottom = v41;
    }
    if ( a5 )
    {
      v20 = a5->left;
      v21 = a5->top;
      v22 = a5->right;
      v23 = a5->bottom;
      v47 = a5->left;
      v48 = v21;
      v49 = v22;
      v50 = v23;
    }
    else
    {
      v47 = left;
      v20 = left;
      v48 = top;
      v21 = top;
      v49 = right;
      v22 = right;
      v50 = bottom;
      v23 = bottom;
    }
    v51[0] = left / v40;
    v51[1] = top / v41;
    v51[2] = right / v40;
    v51[3] = bottom / v41;
    v24 = CD2DSharedBuffer::CreateFromHeap(0x90u, &v37);
    v15 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xB0u, 0LL);
      v11 = v37;
      goto LABEL_21;
    }
    v26 = CD2DSharedBuffer::CreateFromHeap(0x94u, &v38);
    v15 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xB3u, 0LL);
      v11 = v37;
      v12 = v38;
      goto LABEL_21;
    }
    v11 = v37;
    v28 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v37 + 24LL))(v37);
    v12 = v38;
    v29 = (_DWORD *)v28;
    v30 = (FLOAT *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v38 + 24LL))(v38);
    MILMatrix3x2::InferAffineMatrix((__int64)&v45, &v47, v51);
    memset_0(v29 + 2, 0, 0x88uLL);
    memset_0(v30, 0, 0x94uLL);
    *v29 = 1;
    v29[1] = 1;
    if ( v44 == 3 )
      v29[1] = 17;
    v31 = v45;
    v29[5] = 1;
    v29[2] = -1;
    v29[11] = a8;
    v29[14] = -1;
    *((_OWORD *)v30 + 4) = v31;
    v30[4] = 1.0;
    *(_QWORD *)&v31 = v46;
    v30[7] = 1.0;
    v30[12] = 1.0;
    v30[13] = 1.0;
    v30[14] = 1.0;
    v30[15] = 1.0;
    v30[24] = 1.0;
    v30[25] = 1.0;
    *((_QWORD *)v30 + 10) = v31;
    *v30 = v20;
    v30[1] = v21;
    v30[2] = v22;
    v30[3] = v23;
    v30[36] = NAN;
    v32 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, int, _QWORD, _DWORD, _QWORD, _DWORD, __int64 *))(**((_QWORD **)this + 30) + 24LL))(
            *((_QWORD *)this + 30),
            v11,
            v12,
            &v42,
            1,
            0LL,
            0,
            0LL,
            0,
            &v39);
    v15 = v32;
    if ( v32 < 0 )
    {
      v36 = 226;
    }
    else
    {
      v33 = *(__int64 (__fastcall **)(CD2DContext *, const struct ID2DContextOwner *, __int64))(*(_QWORD *)this + 136LL);
      (*(void (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 8LL))(a2);
      v32 = v33(this, a2, v39);
      v15 = v32;
      if ( v32 >= 0 )
        goto LABEL_21;
      v36 = 239;
    }
    v34 = v32;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v34, v36, 0LL);
LABEL_21:
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  if ( v12 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v11 + 16LL))(v11);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v15, 0);
}
