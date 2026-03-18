/*
 * XREFs of ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1801AB660
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801ABE90 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18004EFD0 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009B690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x1801AB2DC (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x1801AB380 (-BuildD2DColorPropertiesList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IPEAPE.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewD2DCommandList(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  struct ID2D1Bitmap **v7; // r14
  struct CSharedSection *v8; // r8
  struct ID2D1Bitmap **v9; // r12
  int v10; // edx
  struct ID2D1PrivateCompositorPrimitiveProperties **v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  struct ID2D1Bitmap **v19; // rax
  __int64 v20; // rcx
  struct ID2DContext *v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned int v25; // eax
  struct ID2D1Bitmap **v26; // rax
  __int64 v27; // rcx
  struct ID2DContext *v28; // r8
  int v29; // eax
  __int64 v30; // rcx
  char v31; // si
  unsigned __int64 v32; // rcx
  unsigned int v33; // eax
  struct ID2D1PrivateCompositorPrimitiveProperties **v34; // rax
  struct ID2DContextOwner *v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r10
  unsigned int v41; // eax
  unsigned int v42; // edx
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // edx
  __int64 v47; // rcx
  int v48; // eax
  struct CD2DCommandList *v49; // rax
  __int64 i; // rsi
  struct ID2D1Bitmap *v51; // rcx
  __int64 j; // rsi
  struct ID2D1Bitmap *v53; // rcx
  __int64 k; // rsi
  struct ID2D1PrivateCompositorPrimitiveProperties *v55; // rcx
  unsigned int v57; // [rsp+20h] [rbp-60h]
  __int64 v58; // [rsp+60h] [rbp-20h] BYREF
  struct ID2D1PrivateCompositorBuffer *v59; // [rsp+68h] [rbp-18h] BYREF
  struct ID2D1PrivateCompositorBuffer *v60; // [rsp+70h] [rbp-10h] BYREF
  char *v61; // [rsp+78h] [rbp-8h] BYREF

  *a4 = 0LL;
  v7 = 0LL;
  v58 = 0LL;
  v8 = (struct CSharedSection *)*((_QWORD *)this + 53);
  v9 = 0LL;
  v10 = *((_DWORD *)this + 128);
  v11 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v12 = CD2DSharedBuffer::CreateFromSharedSection(*((_QWORD *)this + 63), v10, v8, &v59);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x31Cu);
    goto LABEL_47;
  }
  v15 = CD2DSharedBuffer::CreateFromSharedSection(
          *((_QWORD *)this + 65),
          *((_DWORD *)this + 132),
          *((struct CSharedSection **)this + 53),
          &v60);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x322u);
    goto LABEL_47;
  }
  v17 = *((unsigned int *)this + 110);
  v18 = *((_DWORD *)this + 48);
  if ( (unsigned int)v17 >= v18 )
    v17 = v18;
  *((_DWORD *)this + 110) = v17;
  if ( (_DWORD)v17 )
  {
    v19 = (struct ID2D1Bitmap **)operator new(saturated_mul(v17, 8uLL));
    v7 = v19;
    if ( !v19 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0x329u);
      goto LABEL_69;
    }
    memset_0(v19, 0, 8LL * *((unsigned int *)this + 110));
    v22 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v21, 0, *((_DWORD *)this + 110), v7);
    v14 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x330u);
LABEL_47:
      v31 = 0;
      goto LABEL_48;
    }
  }
  v24 = *((unsigned int *)this + 111);
  v25 = *((_DWORD *)this + 48) - *((_DWORD *)this + 110);
  if ( (unsigned int)v24 >= v25 )
    v24 = v25;
  *((_DWORD *)this + 111) = v24;
  if ( !(_DWORD)v24 )
    goto LABEL_18;
  v26 = (struct ID2D1Bitmap **)operator new(saturated_mul(v24, 8uLL));
  v9 = v26;
  if ( v26 )
  {
    memset_0(v26, 0, 8LL * *((unsigned int *)this + 111));
    v29 = CPrimitiveGroup::BuildD2DBitmapList(this, a2, v28, *((_DWORD *)this + 110), *((_DWORD *)this + 111), v9);
    v14 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x33Fu);
      v31 = 0;
      goto LABEL_48;
    }
LABEL_18:
    v32 = *((unsigned int *)this + 112);
    v33 = *((_DWORD *)this + 64);
    if ( (unsigned int)v32 >= v33 )
      v32 = v33;
    *((_DWORD *)this + 112) = v32;
    if ( !(_DWORD)v32 )
      goto LABEL_26;
    v34 = (struct ID2D1PrivateCompositorPrimitiveProperties **)operator new(saturated_mul(v32, 8uLL));
    v11 = v34;
    if ( !v34 )
    {
      v57 = 839;
      goto LABEL_15;
    }
    memset_0(v34, 0, 8LL * *((unsigned int *)this + 112));
    v36 = CPrimitiveGroup::BuildD2DColorPropertiesList(this, v35, a3, *((_DWORD *)this + 112), v11);
    v14 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x34Du);
    }
    else
    {
LABEL_26:
      v38 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, _QWORD, struct ID2D1Bitmap **, _QWORD, struct ID2D1PrivateCompositorPrimitiveProperties **, _QWORD, __int64 *))(*(_QWORD *)a3 + 232LL))(
              a3,
              v59,
              v60,
              v7,
              *((unsigned int *)this + 110),
              v9,
              *((unsigned int *)this + 111),
              v11,
              *((unsigned int *)this + 112),
              &v58);
      v14 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x35Au);
      }
      else
      {
        v40 = v58;
        v61 = (char *)this + 56;
        v41 = *(_DWORD *)(v58 + 80);
        v42 = v41 + 1;
        v14 = v41 + 1 < v41 ? 0x80070216 : 0;
        if ( v41 + 1 < v41 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v14, 0xB5u);
        }
        else if ( v42 > *(_DWORD *)(v58 + 76) )
        {
          v44 = DynArrayImpl<0>::AddMultipleAndSet(v58 + 56, 8, 1, &v61);
          v14 = v44;
          if ( v44 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v44, 0xC0u);
        }
        else
        {
          v43 = v41;
          *(_QWORD *)(*(_QWORD *)(v58 + 56) + 8LL * v41) = v61;
          *(_DWORD *)(v40 + 80) = v42;
        }
        if ( v14 >= 0 )
        {
          v45 = *((_DWORD *)this + 34);
          v31 = 1;
          v46 = v45 + 1;
          v14 = v45 + 1 < v45 ? 0x80070216 : 0;
          if ( v45 + 1 < v45 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v14, 0xB5u);
          }
          else if ( v46 > *((_DWORD *)this + 33) )
          {
            v48 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 112, 8, 1, &v58);
            v14 = v48;
            if ( v48 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v48, 0xC0u);
          }
          else
          {
            v47 = v45;
            *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v45) = v58;
            *((_DWORD *)this + 34) = v46;
          }
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v14, 0x35Fu);
          }
          else
          {
            v49 = (struct CD2DCommandList *)v58;
            v58 = 0LL;
            *a4 = v49;
          }
          goto LABEL_48;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v14, 0x35Cu);
      }
    }
    v31 = 0;
LABEL_48:
    if ( v14 < 0 && v31 )
      CD2DResource::RemoveResourceNotifier((CD2DResource *)(v58 + 16), (CPrimitiveGroup *)((char *)this + 56));
    goto LABEL_51;
  }
  v57 = 824;
LABEL_15:
  v14 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2147024882, v57);
LABEL_51:
  if ( v7 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 110); i = (unsigned int)(i + 1) )
    {
      v51 = v7[i];
      if ( v51 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v51 + 16LL))(v51);
    }
    WPF::ProcessHeapImpl::Free(v7);
  }
  if ( v9 )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 111); j = (unsigned int)(j + 1) )
    {
      v53 = v9[j];
      if ( v53 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v53 + 16LL))(v53);
    }
    WPF::ProcessHeapImpl::Free(v9);
  }
  if ( v11 )
  {
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 112); k = (unsigned int)(k + 1) )
    {
      v55 = v11[k];
      if ( v55 )
        (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v55 + 16LL))(v55);
    }
    WPF::ProcessHeapImpl::Free(v11);
  }
LABEL_69:
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  if ( v59 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v59 + 16LL))(v59);
  if ( v60 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v60 + 16LL))(v60);
  return (unsigned int)v14;
}
