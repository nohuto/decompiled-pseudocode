/*
 * XREFs of ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x18002CEC0
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800155B8 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180029400 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18002C988 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??8@YA_NAEBURenderTargetInfo@@0@Z @ 0x18002E4F8 (--8@YA_NAEBURenderTargetInfo@@0@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800EC1D0 (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::RealizeBitmaps(
        CPrimitiveGroupDrawListGenerator *this,
        const struct CDrawingContext *a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  bool v7; // cf
  SIZE_T v8; // rax
  char *v9; // rax
  char *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct CDrawingContext *v13; // r15
  int v14; // eax
  unsigned int v15; // ecx
  unsigned __int64 v16; // r14
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  struct CDrawingContext *v21; // rcx
  __int64 v22; // rax
  void *v24; // rbx
  __int64 v25; // rax
  SIZE_T v26; // rax
  char *v27; // rax
  char *v28; // rbx
  void *v29; // rbx
  __int64 v30; // rbx
  int v31; // eax
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // [rsp+20h] [rbp-10h]
  __int64 v35; // [rsp+70h] [rbp+40h] BYREF
  struct CDrawingContext *v36; // [rsp+78h] [rbp+48h] BYREF

  v36 = a2;
  v4 = 0;
  if ( !(unsigned __int8)operator==((char *)this + 40, (char *)a2 + 392) )
  {
    CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(this);
    v5 = *((unsigned int *)this + 16);
    if ( (_DWORD)v5 )
    {
      v6 = 24LL * *((unsigned int *)this + 16);
      if ( !is_mul_ok(v5, 0x18uLL) )
        v6 = -1LL;
      v7 = __CFADD__(v6, 8LL);
      v8 = v6 + 8;
      if ( v7 )
        v8 = -1LL;
      if ( !v8 )
        v8 = 1LL;
      v9 = (char *)HeapAlloc(WPF::g_processHeap, 0, v8);
      if ( v9 )
      {
        v10 = v9 + 8;
        *(_QWORD *)v9 = v5;
        `vector constructor iterator'(
          v9 + 8,
          24LL,
          (unsigned int)v5,
          (void (__fastcall *)(char *))CDrawListBitmap::CDrawListBitmap);
      }
      else
      {
        v10 = 0LL;
      }
      v11 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = v10;
      if ( v11 )
      {
        v24 = (void *)(v11 - 8);
        `vector destructor iterator'(
          (void *)v11,
          0x18uLL,
          *(_QWORD *)(v11 - 8),
          (void (*)(void *))EffectInput::~EffectInput);
        operator delete[](v24);
        v10 = (char *)*((_QWORD *)this + 14);
      }
      if ( v10 )
      {
        v12 = 0LL;
        v13 = v36;
        while ( 1 )
        {
          if ( (unsigned int)v12 >= *((__int64 *)this + 8) )
          {
LABEL_27:
            gsl::details::terminate((gsl::details *)v11);
            JUMPOUT(0x18002D0B6LL);
          }
          v14 = CDrawListBitmap::FromImageSource(
                  (CDrawListBitmap *)(*((_QWORD *)this + 14) + 24 * v12),
                  *(struct IImageSource **)(*((_QWORD *)this + 9) + 8 * v12),
                  v13,
                  0);
          v4 = v14;
          if ( v14 < 0 )
            break;
          v11 = 1LL;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= (unsigned int)v5 )
            goto LABEL_18;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x101u);
LABEL_25:
        if ( (v4 & 0x80000000) == 0 )
          return v4;
LABEL_32:
        CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(this);
        return v4;
      }
      v34 = 251;
      goto LABEL_31;
    }
LABEL_18:
    v16 = *((unsigned int *)this + 20);
    if ( (_DWORD)v16 )
    {
      v25 = 24LL * *((unsigned int *)this + 20);
      if ( !is_mul_ok(v16, 0x18uLL) )
        v25 = -1LL;
      v7 = __CFADD__(v25, 8LL);
      v26 = v25 + 8;
      if ( v7 )
        v26 = -1LL;
      if ( !v26 )
        v26 = 1LL;
      v27 = (char *)HeapAlloc(WPF::g_processHeap, 0, v26);
      if ( v27 )
      {
        v28 = v27 + 8;
        *(_QWORD *)v27 = v16;
        `vector constructor iterator'(v27 + 8, 24LL, v16, (void (__fastcall *)(char *))CDrawListBitmap::CDrawListBitmap);
      }
      else
      {
        v28 = 0LL;
      }
      v11 = *((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = v28;
      if ( v11 )
      {
        v29 = (void *)(v11 - 8);
        `vector destructor iterator'(
          (void *)v11,
          0x18uLL,
          *(_QWORD *)(v11 - 8),
          (void (*)(void *))EffectInput::~EffectInput);
        operator delete[](v29);
        v28 = (char *)*((_QWORD *)this + 15);
      }
      if ( v28 )
      {
        v30 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v30 >= *((__int64 *)this + 10) )
            goto LABEL_27;
          v31 = CDrawListBitmap::FromImageSource(
                  (CDrawListBitmap *)(*((_QWORD *)this + 15) + 24 * v30),
                  *(struct IImageSource **)(*((_QWORD *)this + 11) + 8 * v30),
                  v36,
                  0);
          v4 = v31;
          if ( v31 < 0 )
            break;
          v30 = (unsigned int)(v30 + 1);
          if ( (unsigned int)v30 >= (unsigned int)v16 )
            goto LABEL_19;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v31, 0x10Fu);
        goto LABEL_25;
      }
      v34 = 265;
LABEL_31:
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, v34);
      goto LABEL_32;
    }
LABEL_19:
    v36 = 0LL;
    if ( *((_QWORD *)this + 14) )
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v36);
      v17 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct CDrawingContext **))(*((_QWORD *)this + 14) + 8LL))(
              *(_QWORD *)(*((_QWORD *)this + 14) + 8LL),
              &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
              &v36);
      v4 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x119u);
        goto LABEL_54;
      }
    }
    else
    {
      if ( !*((_QWORD *)this + 15) )
        goto LABEL_24;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v36);
      v32 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct CDrawingContext **))(*((_QWORD *)this + 15) + 8LL))(
              *(_QWORD *)(*((_QWORD *)this + 15) + 8LL),
              &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
              &v36);
      v4 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x11Du);
        goto LABEL_54;
      }
    }
    if ( !v36 )
    {
LABEL_24:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v36);
      *(_OWORD *)((char *)this + 40) = *(_OWORD *)((char *)a2 + 392);
      *((_DWORD *)this + 14) = *((_DWORD *)a2 + 102);
      goto LABEL_25;
    }
    v19 = (*(__int64 (__fastcall **)(struct CDrawingContext *, char *))(*(_QWORD *)v36 + 24LL))(v36, (char *)this + 16);
    v4 = v19;
    if ( v19 >= 0 )
    {
      v21 = v36;
      v22 = *((_QWORD *)this + 16);
      v36 = 0LL;
      *((_QWORD *)this + 16) = v21;
      v35 = v22;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v35);
      goto LABEL_24;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x122u);
LABEL_54:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v36);
    goto LABEL_25;
  }
  return v4;
}
