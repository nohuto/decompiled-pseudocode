/*
 * XREFs of ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x180090B10
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180169280 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x18008DC80 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18008FB00 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180090540 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180090E3C (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180091360 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800B752C (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800B7E7C (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18015F9E0 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
        CHwFullScreenRenderTarget *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rdi
  FastRegion::CRegion *v3; // rsi
  CHwFullScreenRenderTarget *v5; // r13
  const struct FastRegion::Internal::CRgnData *v6; // rbx
  int v7; // eax
  FastRegion::Internal::CRgnData *v8; // rcx
  void *v9; // r15
  int v10; // edi
  const struct FastRegion::Internal::CRgnData **v11; // rbx
  const struct FastRegion::Internal::CRgnData *v12; // rbx
  const struct FastRegion::Internal::CRgnData **v13; // rsi
  int v14; // r10d
  const struct FastRegion::Internal::CRgnData *v15; // r8
  int *v16; // r15
  int v17; // edi
  int v18; // eax
  int v19; // esi
  __int64 v20; // r11
  _DWORD *v21; // r9
  _DWORD *v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // r11
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  FastRegion::Internal::CRgnData *v31; // rax
  int v32; // ebx
  const struct FastRegion::Internal::CRgnData *v33; // r14
  unsigned int v34; // ecx
  int v35; // [rsp+30h] [rbp-D0h] BYREF
  void *lpMem; // [rsp+38h] [rbp-C8h]
  _BYTE v37[256]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = *a2;
  v3 = (CHwFullScreenRenderTarget *)((char *)this + 344);
  v5 = this;
  if ( !*(_DWORD *)*a2 )
    goto LABEL_9;
  v6 = *(const struct FastRegion::Internal::CRgnData **)v3;
  if ( !**(_DWORD **)v3 )
    goto LABEL_9;
  v7 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(*(const struct FastRegion::Internal::CRgnData **)v3, v2);
  v8 = (FastRegion::Internal::CRgnData *)v37;
  lpMem = v37;
  v35 = v7;
  if ( (unsigned __int64)v7 > 0x100 )
  {
    v31 = (FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v7);
    v8 = v31;
    if ( !v31 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v35);
      v10 = -2147024882;
LABEL_42:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v10, 0x31Au, 0LL);
      return (unsigned int)v10;
    }
    v2 = *a2;
    v6 = *(const struct FastRegion::Internal::CRgnData **)v3;
    lpMem = v31;
  }
  FastRegion::Internal::CRgnData::Subtract(v8, v6, v2);
  v9 = lpMem;
  v10 = 0;
  if ( *(_DWORD *)lpMem )
  {
    if ( v37 == lpMem )
    {
      v10 = FastRegion::CRegion::CopyData(v3, (const struct FastRegion::Internal::CRgnData *)lpMem);
    }
    else
    {
      v32 = v35;
      lpMem = v37;
      v35 = 0;
      FastRegion::CRegion::FreeMemory(v3);
      *(_QWORD *)v3 = v9;
      *((_DWORD *)v3 + 2) = v32;
    }
  }
  else
  {
    **(_DWORD **)v3 = 0;
  }
  LODWORD(this) = (_DWORD)lpMem;
  if ( v37 != lpMem )
    operator delete(lpMem);
  if ( v10 < 0 )
    goto LABEL_42;
LABEL_9:
  if ( *((_DWORD *)v5 + 56) == 3 )
  {
    v11 = (const struct FastRegion::Internal::CRgnData **)((char *)v5 + 416);
    if ( *(_DWORD *)*a2 )
    {
      this = *v11;
      if ( *(_DWORD *)*v11 )
      {
        v27 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(this, *a2);
        v35 = 0;
        lpMem = v37;
        v10 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v35, v27);
        if ( v10 < 0 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v35);
        }
        else
        {
          FastRegion::Internal::CRgnData::Subtract((FastRegion::Internal::CRgnData *)lpMem, *v11, *a2);
          v28 = FastRegion::CRegion::SaveResult(
                  (CHwFullScreenRenderTarget *)((char *)v5 + 416),
                  (struct FastRegion::Internal::CWorkBuffer *)&v35);
          LODWORD(this) = (_DWORD)lpMem;
          v10 = v28;
          if ( v37 != lpMem )
            operator delete(lpMem);
        }
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v10, 0x31Fu, 0LL);
          return (unsigned int)v10;
        }
      }
    }
  }
  v12 = *a2;
  v13 = (const struct FastRegion::Internal::CRgnData **)((char *)v5 + 272);
  v14 = *(_DWORD *)*a2;
  if ( !v14 )
    return 0;
  v15 = *v13;
  if ( *(_DWORD *)*v13 )
  {
    v29 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v13, *a2);
    v35 = 0;
    lpMem = v37;
    v10 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v35, v29);
    if ( v10 < 0 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v35);
    }
    else
    {
      FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, *v13, *a2);
      v30 = FastRegion::CRegion::SaveResult(
              (CHwFullScreenRenderTarget *)((char *)v5 + 272),
              (struct FastRegion::Internal::CWorkBuffer *)&v35);
      LODWORD(this) = (_DWORD)lpMem;
      v10 = v30;
      if ( v37 != lpMem )
        operator delete(lpMem);
    }
    goto LABEL_25;
  }
  if ( v13 == a2 )
    goto LABEL_24;
  v16 = (int *)((char *)v5 + 280);
  v17 = *((_DWORD *)v12 + 2 * v14 + 2) + 8 * v14 - *((_DWORD *)v12 + 4) - 12 + 8 * (v14 - 1) + 24;
  v18 = 60;
  if ( (CHwFullScreenRenderTarget *)((char *)v5 + 280) != v15 )
    v18 = *v16;
  if ( v18 >= v17 )
  {
LABEL_18:
    *(_DWORD *)v15 = v14;
    v19 = 0;
    *((_DWORD *)v15 + 1) = *((_DWORD *)v12 + 1);
    *((_DWORD *)v15 + 2) = *((_DWORD *)v12 + 2);
    v20 = (__int64)v12 + *((int *)v12 + 4) + 12;
    v21 = (_DWORD *)((char *)v15 + 8 * v14 + 12);
    if ( v14 > 0 )
    {
      v22 = (_DWORD *)((char *)v15 + 12);
      do
      {
        *v22 = *(_DWORD *)((char *)v22 + v12 - v15);
        v22 += 2;
        v23 = v19++;
        *((_DWORD *)v15 + 2 * v23 + 4) = 4 * (((__int64)v21 - v20) >> 2)
                                       + (_DWORD)v12
                                       + 8 * v23
                                       + *((_DWORD *)v12 + 2 * v23 + 4)
                                       - ((_DWORD)v15
                                        + 8 * v23);
      }
      while ( v19 < *(_DWORD *)v15 );
    }
    v24 = (unsigned __int64)(8 * *(_DWORD *)v12 + 4 + *((_DWORD *)v12 + 2 * *(int *)v12 + 2) - *((_DWORD *)v12 + 4) - 12) >> 2;
    this = (CHwFullScreenRenderTarget *)(int)v24;
    if ( (int)v24 > 0 )
    {
      v25 = v20 - (_QWORD)v21;
      do
      {
        *v21 = *(_DWORD *)((char *)v21 + v25);
        ++v21;
        this = (CHwFullScreenRenderTarget *)((char *)this - 1);
      }
      while ( this );
    }
LABEL_24:
    v10 = 0;
    goto LABEL_25;
  }
  v33 = (const struct FastRegion::Internal::CRgnData *)DefaultHeap::Alloc(v17);
  if ( v33 )
  {
    FastRegion::CRegion::FreeMemory((CHwFullScreenRenderTarget *)((char *)v5 + 272));
    *v13 = v33;
    *v16 = v17;
    v15 = *v13;
    v14 = *(_DWORD *)v12;
    goto LABEL_18;
  }
  v10 = -2147024882;
LABEL_25:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v10, 0x2F0u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v10, 0x324u, 0LL);
  }
  return (unsigned int)v10;
}
