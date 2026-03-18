/*
 * XREFs of ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18002C700
 * Callers:
 *     <none>
 * Callees:
 *     ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x18002C9A8 (--0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x18002CA34 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x18002CA5C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x180057A14 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIRenderTarget@@@Z @ 0x180058564 (-QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIRenderTarget@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180058AB0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180061E30 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180063830 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PushTarget(
        unsigned __int64 this,
        struct ID2DContextOwner *a2,
        struct IRenderTarget *a3)
{
  char *v3; // rsi
  CD2DTarget *v4; // r14
  int v5; // eax
  __int64 v6; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  CD2DTarget *v14; // rcx
  _QWORD *v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  int v28; // r9d
  int v29; // esi
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // [rsp+20h] [rbp-20h]
  _QWORD v34[2]; // [rsp+30h] [rbp-10h] BYREF
  struct ID2D1Bitmap1 *v35; // [rsp+80h] [rbp+40h] BYREF
  struct ID2D1PrivateDepthBuffer *v36; // [rsp+98h] [rbp+58h] BYREF

  v35 = 0LL;
  v3 = (char *)(this + 368);
  v36 = 0LL;
  v4 = 0LL;
  v5 = *(_DWORD *)(this + 392);
  v6 = 0LL;
  v9 = this;
  if ( v5 )
  {
    this = (unsigned int)(v5 - 1);
    v6 = *(_QWORD *)(*(_QWORD *)v3 + 8 * this);
  }
  v10 = *(_QWORD *)(v9 + 176);
  if ( v10 )
  {
    this = *(_QWORD *)(v9 + 184);
    if ( this )
    {
      CBatchOptimizer::Flush((CBatchOptimizer *)this);
      v10 = *(_QWORD *)(v9 + 176);
    }
    *(_DWORD *)(v10 + 52) = *(_DWORD *)(v9 + 32);
    v22 = *(_QWORD *)(v9 + 176);
    *(_QWORD *)(v9 + 176) = 0LL;
    if ( v22 )
    {
      v23 = *((_DWORD *)v3 + 6);
      v24 = 0LL;
      if ( v23 )
        v24 = *(_QWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)(v23 - 1));
      CDrawListEntryBatch::QueueForRender((CDrawListEntryBatch *)v22, *(struct IRenderTarget **)(v24 + 24));
      v25 = CD2DContext::DrawCustomCallbackRendererInternal(
              (CD2DContext *)v9,
              (struct ID2D1PrivateCompositorRenderer *)v22);
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x30Cu, 0LL);
      CDirtyRegion::Release((CDirtyRegion *)(v22 + 8));
    }
  }
  v11 = *(_DWORD *)(v9 + 880);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v11, 0x340u, 0LL);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)a2 + 80LL))(a2);
    *(_OWORD *)(v9 + 472) = *(_OWORD *)v12;
    *(_DWORD *)(v9 + 488) = *(_DWORD *)(v12 + 16);
    v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct ID2D1Bitmap1 **))(*(_QWORD *)a3 + 72LL))(a3, &v35);
    v11 = v13;
    if ( v13 < 0 )
    {
      v28 = v13;
      v33 = 836;
      goto LABEL_46;
    }
    (*(void (__fastcall **)(struct IRenderTarget *, struct ID2D1PrivateDepthBuffer **))(*(_QWORD *)a3 + 112LL))(
      a3,
      &v36);
    if ( !v6 )
    {
      v15 = (_QWORD *)(v9 + 464);
      v16 = *(_QWORD *)(v9 + 464);
      if ( v16 && v35 == *(struct ID2D1Bitmap1 **)(v16 + 32) && v36 == *(struct ID2D1PrivateDepthBuffer **)(v16 + 40) )
      {
        *(_QWORD *)v16 = a2;
        v34[0] = *v15;
        v17 = *((_DWORD *)v3 + 6);
        v18 = v17 + 1;
        if ( v17 + 1 < v17 )
        {
          v11 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024362, 0xB8u, 0LL);
        }
        else
        {
          if ( v18 <= *((_DWORD *)v3 + 5) )
          {
            v11 = 0;
            *(_QWORD *)(*(_QWORD *)v3 + 8LL * v17) = v34[0];
            *((_DWORD *)v3 + 6) = v18;
LABEL_13:
            *v15 = 0LL;
            goto LABEL_14;
          }
          v27 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, v34);
          v11 = v27;
          if ( v27 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, 0LL, 0, v27, 0xC3u, 0LL);
        }
        if ( v11 >= 0 )
          goto LABEL_13;
        v33 = 854;
        goto LABEL_44;
      }
      SAFE_DELETE<CD2DTarget>(v9 + 464);
    }
    v14 = (CD2DTarget *)operator new(0x50uLL);
    if ( v14 )
      v4 = CD2DTarget::CD2DTarget(v14, a2, *(struct CD2DFactory **)(v9 + 208), a3, v35, v36);
    else
      v4 = 0LL;
    if ( !v4 )
    {
      v11 = -2147024882;
      v33 = 874;
LABEL_44:
      v28 = v11;
LABEL_46:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, 0LL, 0, v28, v33, 0LL);
      goto LABEL_14;
    }
    v20 = *((_DWORD *)v3 + 6);
    v34[0] = v4;
    v21 = v20 + 1;
    if ( v20 + 1 < v20 )
    {
      v29 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v14, 0LL, 0, -2147024362, 0xB8u, 0LL);
    }
    else
    {
      if ( v21 <= *((_DWORD *)v3 + 5) )
      {
        v11 = 0;
        *(_QWORD *)(*(_QWORD *)v3 + 8LL * v20) = v34[0];
        *((_DWORD *)v3 + 6) = v21;
        goto LABEL_26;
      }
      v31 = DynArrayImpl<0>::AddMultipleAndSet(v3, 8LL, 1LL, v34);
      v29 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v31, 0xC3u, 0LL);
    }
    v11 = v29;
    if ( v29 >= 0 )
    {
LABEL_26:
      if ( *(_BYTE *)(v9 + 492) )
      {
        if ( v6 )
          *(_BYTE *)(v6 + 48) = 0;
        CD2DTarget::ApplyState(v4, (struct CD2DContext *)v9);
      }
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x36Fu, 0LL);
  }
  if ( v4 )
    CD2DTarget::`scalar deleting destructor'(v4, v32);
LABEL_14:
  if ( v35 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v36 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v36 + 16LL))(v36);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(v9, (unsigned int)v11, 0LL);
}
