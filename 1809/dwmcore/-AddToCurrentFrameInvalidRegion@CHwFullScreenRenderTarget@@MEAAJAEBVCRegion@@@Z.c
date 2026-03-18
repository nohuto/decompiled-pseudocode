/*
 * XREFs of ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x1800A6420
 * Callers:
 *     ?Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x180209480 (-Present@CHDRConversionRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800A2DA0 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800A6674 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800A683C (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800A6D6C (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800A7760 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800A8078 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800A8440 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180161868 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::AddToCurrentFrameInvalidRegion(
        CHwFullScreenRenderTarget *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // r14
  const struct FastRegion::Internal::CRgnData **v3; // r15
  CHwFullScreenRenderTarget *v5; // rdi
  const struct FastRegion::Internal::CRgnData *v6; // rbx
  int v7; // eax
  SIZE_T v8; // r8
  FastRegion::Internal::CRgnData *v9; // rcx
  int v10; // eax
  int v11; // ebx
  const struct FastRegion::Internal::CRgnData **v12; // r14
  const struct FastRegion::Internal::CRgnData *v13; // rbx
  const struct FastRegion::Internal::CRgnData **v14; // rdi
  int v15; // r9d
  FastRegion::Internal::CRgnData *v16; // r8
  int *v17; // r14
  int v18; // eax
  int v19; // esi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  FastRegion::Internal::CRgnData *v25; // rax
  SIZE_T v26; // r8
  const struct FastRegion::Internal::CRgnData *v27; // r15
  unsigned int v28; // ecx
  int v29; // [rsp+30h] [rbp-D0h] BYREF
  FastRegion::Internal::CRgnData *v30; // [rsp+38h] [rbp-C8h]
  _BYTE v31[256]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = *a2;
  v3 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 408);
  v5 = this;
  if ( !*(_DWORD *)*a2 )
    goto LABEL_7;
  v6 = *v3;
  if ( !*(_DWORD *)*v3 )
    goto LABEL_7;
  v7 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(*v3, *a2);
  v8 = v7;
  v9 = (FastRegion::Internal::CRgnData *)v31;
  v30 = (FastRegion::Internal::CRgnData *)v31;
  v29 = v7;
  if ( (unsigned __int64)v7 > 0x100 )
  {
    if ( !v7 )
      v8 = 1LL;
    v25 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v8);
    v9 = v25;
    if ( !v25 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v29);
      v11 = -2147024882;
LABEL_34:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v11, 0x2DDu);
      return (unsigned int)v11;
    }
    v2 = *a2;
    v6 = *v3;
    v30 = v25;
  }
  FastRegion::Internal::CRgnData::Subtract(v9, v6, v2);
  v10 = FastRegion::CRegion::SaveResult((FastRegion::CRegion *)v3, (struct FastRegion::Internal::CWorkBuffer *)&v29);
  LODWORD(this) = (_DWORD)v30;
  v11 = v10;
  if ( v31 != (_BYTE *)v30 )
    WPF::ProcessHeapImpl::Free(v30);
  if ( v11 < 0 )
    goto LABEL_34;
LABEL_7:
  if ( *((_DWORD *)v5 + 72) == 3 )
  {
    v12 = (const struct FastRegion::Internal::CRgnData **)((char *)v5 + 480);
    if ( *(_DWORD *)*a2 )
    {
      this = *v12;
      if ( *(_DWORD *)*v12 )
      {
        v21 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(this, *a2);
        v29 = 0;
        v30 = (FastRegion::Internal::CRgnData *)v31;
        v11 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v29, v21);
        if ( v11 < 0 )
        {
          FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v29);
        }
        else
        {
          FastRegion::Internal::CRgnData::Subtract(v30, *v12, *a2);
          v22 = FastRegion::CRegion::SaveResult(
                  (CHwFullScreenRenderTarget *)((char *)v5 + 480),
                  (struct FastRegion::Internal::CWorkBuffer *)&v29);
          LODWORD(this) = (_DWORD)v30;
          v11 = v22;
          if ( v31 != (_BYTE *)v30 )
            WPF::ProcessHeapImpl::Free(v30);
        }
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v11, 0x2E2u);
          return (unsigned int)v11;
        }
      }
    }
  }
  v13 = *a2;
  v14 = (const struct FastRegion::Internal::CRgnData **)((char *)v5 + 336);
  v15 = *(_DWORD *)*a2;
  if ( !v15 )
    return 0;
  v16 = *v14;
  if ( *(_DWORD *)*v14 )
  {
    v23 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v14, *a2);
    v29 = 0;
    v30 = (FastRegion::Internal::CRgnData *)v31;
    v11 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v29, v23);
    if ( v11 < 0 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v29);
    }
    else
    {
      FastRegion::Internal::CRgnData::Union(v30, *v14, *a2);
      v24 = FastRegion::CRegion::SaveResult(
              (FastRegion::CRegion *)v14,
              (struct FastRegion::Internal::CWorkBuffer *)&v29);
      LODWORD(this) = (_DWORD)v30;
      v11 = v24;
      if ( v31 != (_BYTE *)v30 )
        WPF::ProcessHeapImpl::Free(v30);
    }
    goto LABEL_18;
  }
  if ( v14 == a2 )
    goto LABEL_17;
  v17 = (int *)(v14 + 1);
  v18 = 60;
  v19 = *((_DWORD *)v13 + 2 * v15 + 2) + 8 * v15 - *((_DWORD *)v13 + 4) - 12 + 8 * (v15 - 1) + 24;
  if ( v14 + 1 != (const struct FastRegion::Internal::CRgnData **)v16 )
    v18 = *v17;
  if ( v18 >= v19 )
  {
LABEL_16:
    FastRegion::Internal::CRgnData::Copy(v16, v13);
LABEL_17:
    v11 = 0;
    goto LABEL_18;
  }
  v26 = v19;
  if ( !v19 )
    v26 = 1LL;
  v27 = (const struct FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v26);
  if ( v27 )
  {
    FastRegion::CRegion::FreeMemory((void **)v14);
    *v14 = v27;
    *v17 = v19;
    v16 = *v14;
    goto LABEL_16;
  }
  v11 = -2147024882;
LABEL_18:
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v11, 0x2F0u);
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v11, 0x2E7u);
  }
  return (unsigned int)v11;
}
