/*
 * XREFs of ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x180057428
 * Callers:
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180015740 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800351B0 (-GenerateDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180057610 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ??8@YA_NAEBURenderTargetInfo@@0@Z @ 0x1800577A4 (--8@YA_NAEBURenderTargetInfo@@0@Z.c)
 *     ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x1800577D8 (-DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E958C (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::RealizeBitmaps(
        CPrimitiveGroupDrawListGenerator *this,
        const struct CDrawingContext *a2)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rax
  char *v9; // rax
  char *v10; // rbx
  char *v11; // rcx
  __int64 v12; // rbx
  struct CDrawingContext *v13; // r15
  gsl::details *v14; // rcx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  struct CDrawingContext *v23; // rcx
  __int64 v24; // rax
  __int64 v26; // rbx
  char *v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  char *v30; // rax
  char *v31; // rbx
  char *v32; // rbx
  __int64 v33; // rbx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // [rsp+20h] [rbp-10h]
  __int64 v39; // [rsp+70h] [rbp+40h] BYREF
  struct CDrawingContext *v40; // [rsp+78h] [rbp+48h] BYREF

  v40 = a2;
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
      v9 = (char *)DefaultHeap::Alloc(v8);
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
      v11 = (char *)*((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = v10;
      if ( v11 )
      {
        v27 = v11 - 8;
        `vector destructor iterator'(
          v11,
          0x18uLL,
          *((_QWORD *)v11 - 1),
          (void (*)(void *))CDrawListBitmap::~CDrawListBitmap);
        operator delete[](v27, 24LL * *(_QWORD *)v27 + 8);
        v10 = (char *)*((_QWORD *)this + 14);
      }
      if ( v10 )
      {
        v12 = 0LL;
        v13 = v40;
        while ( 1 )
        {
          v14 = (gsl::details *)(*((_QWORD *)this + 14) + 24 * v12);
          if ( (unsigned __int64)(unsigned int)v12 >= *((_QWORD *)this + 8) )
          {
LABEL_49:
            `gsl::details::get_terminate_handler'::`2'::handler(v14);
            __debugbreak();
          }
          v15 = CDrawListBitmap::FromImageSource(
                  v14,
                  *(struct IImageSource **)(*((_QWORD *)this + 9) + 8 * v12),
                  v13,
                  0);
          v4 = v15;
          if ( v15 < 0 )
            break;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= (unsigned int)v5 )
            goto LABEL_16;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xECu, 0LL);
LABEL_23:
        if ( (v4 & 0x80000000) == 0 )
          return v4;
LABEL_31:
        CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(this);
        return v4;
      }
      v38 = 230;
      goto LABEL_30;
    }
LABEL_16:
    v17 = *((unsigned int *)this + 20);
    if ( (_DWORD)v17 )
    {
      v28 = 24LL * *((unsigned int *)this + 20);
      if ( !is_mul_ok(v17, 0x18uLL) )
        v28 = -1LL;
      v7 = __CFADD__(v28, 8LL);
      v29 = v28 + 8;
      if ( v7 )
        v29 = -1LL;
      v30 = (char *)DefaultHeap::Alloc(v29);
      if ( v30 )
      {
        v31 = v30 + 8;
        *(_QWORD *)v30 = v17;
        `vector constructor iterator'(v30 + 8, 24LL, v17, (void (__fastcall *)(char *))CDrawListBitmap::CDrawListBitmap);
      }
      else
      {
        v31 = 0LL;
      }
      v11 = (char *)*((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = v31;
      if ( v11 )
      {
        v32 = v11 - 8;
        `vector destructor iterator'(
          v11,
          0x18uLL,
          *((_QWORD *)v11 - 1),
          (void (*)(void *))CDrawListBitmap::~CDrawListBitmap);
        operator delete[](v32, 24LL * *(_QWORD *)v32 + 8);
        v31 = (char *)*((_QWORD *)this + 15);
      }
      if ( v31 )
      {
        v33 = 0LL;
        while ( 1 )
        {
          v14 = (gsl::details *)(*((_QWORD *)this + 15) + 24 * v33);
          if ( (unsigned __int64)(unsigned int)v33 >= *((_QWORD *)this + 10) )
            goto LABEL_49;
          v34 = CDrawListBitmap::FromImageSource(
                  v14,
                  *(struct IImageSource **)(*((_QWORD *)this + 11) + 8 * v33),
                  v40,
                  0);
          v4 = v34;
          if ( v34 < 0 )
            break;
          v33 = (unsigned int)(v33 + 1);
          if ( (unsigned int)v33 >= (unsigned int)v17 )
            goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0xFAu, 0LL);
        goto LABEL_23;
      }
      v38 = 244;
LABEL_30:
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, -2147024882, v38, 0LL);
      goto LABEL_31;
    }
LABEL_17:
    v40 = 0LL;
    v18 = *((_QWORD *)this + 14);
    if ( v18 )
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v40);
      v19 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct CDrawingContext **))(v18 + 8))(
              *(_QWORD *)(v18 + 8),
              &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
              &v40);
      v4 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x104u, 0LL);
        goto LABEL_52;
      }
    }
    else
    {
      v26 = *((_QWORD *)this + 15);
      if ( !v26 )
        goto LABEL_22;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v40);
      v36 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct CDrawingContext **))(v26 + 8))(
              *(_QWORD *)(v26 + 8),
              &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
              &v40);
      v4 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x108u, 0LL);
        goto LABEL_52;
      }
    }
    if ( !v40 )
    {
LABEL_22:
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v40);
      *(_OWORD *)((char *)this + 40) = *(_OWORD *)((char *)a2 + 392);
      *((_DWORD *)this + 14) = *((_DWORD *)a2 + 102);
      goto LABEL_23;
    }
    v21 = (*(__int64 (__fastcall **)(struct CDrawingContext *, char *))(*(_QWORD *)v40 + 24LL))(v40, (char *)this + 16);
    v4 = v21;
    if ( v21 >= 0 )
    {
      v23 = v40;
      v24 = *((_QWORD *)this + 16);
      v40 = 0LL;
      *((_QWORD *)this + 16) = v23;
      v39 = v24;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v39);
      goto LABEL_22;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x10Du, 0LL);
LABEL_52:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v40);
    goto LABEL_23;
  }
  return v4;
}
