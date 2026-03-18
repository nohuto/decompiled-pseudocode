/*
 * XREFs of ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x18004E5EC
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18004D4D0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18004E478 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z @ 0x1800B8154 (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::OpenDrawListEntryBatch(
        CDrawListBatchManager *this,
        struct CD3DDeviceLevel1 *a2,
        struct CDrawListEntryBatch **a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  int v10; // ecx
  __int64 v11; // rdx
  struct CDrawListEntryBatch::CSharedDirect3DResources *v13; // rbx
  CDrawListEntryBatch *v14; // rax
  unsigned int v15; // ecx
  CDrawListEntryBatch *v16; // rsi
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  CDrawListEntryBatch *v22; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((_DWORD *)this + 36) )
    goto LABEL_2;
  v13 = (struct CDrawListEntryBatch::CSharedDirect3DResources *)*((_QWORD *)this + 20);
  v14 = (CDrawListEntryBatch *)DefaultHeap::Alloc(0x80uLL);
  if ( v14 )
    v16 = CDrawListEntryBatch::CDrawListEntryBatch(v14, a2, v13);
  else
    v16 = 0LL;
  if ( !v16 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x53u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0xF7u, 0LL);
    return v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)v16 + 4);
  v17 = *((_DWORD *)this + 36);
  v22 = v16;
  v18 = v17 + 1;
  if ( v17 + 1 < v17 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    if ( v18 <= *((_DWORD *)this + 35) )
    {
      v3 = 0;
      *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v17) = v22;
      *((_DWORD *)this + 36) = v18;
      goto LABEL_2;
    }
    v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 120, 8LL, 1LL, &v22);
    v3 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xC3u, 0LL);
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v3, 0xF8u, 0LL);
    CDirtyRegion::Release((CDrawListEntryBatch *)((char *)v16 + 8));
    return v3;
  }
LABEL_2:
  v7 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = 0LL;
  if ( v7 )
    CDirtyRegion::Release((CDirtyRegion *)(v7 + 8));
  v8 = (unsigned int)(*((_DWORD *)this + 36) - 1);
  *((_QWORD *)this + 21) = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v8);
  v9 = *((_DWORD *)this + 38);
  *((_DWORD *)this + 36) = v8;
  if ( v9 >= (unsigned int)v8 )
    v9 = v8;
  *((_DWORD *)this + 38) = v9;
  v10 = *((_DWORD *)this + 6);
  v11 = *((_QWORD *)this + 21);
  ++*((_DWORD *)this + 46);
  *(_DWORD *)(v11 + 48) = v10;
  *(_DWORD *)(v11 + 52) = v10;
  *a3 = (struct CDrawListEntryBatch *)*((_QWORD *)this + 21);
  return v3;
}
