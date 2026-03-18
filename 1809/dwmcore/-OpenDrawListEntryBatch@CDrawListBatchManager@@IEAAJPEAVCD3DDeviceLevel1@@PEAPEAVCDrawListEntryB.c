/*
 * XREFs of ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x18002596C
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180024BE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0CDrawListEntryBatch@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z @ 0x180022B64 (--0CDrawListEntryBatch@@AEAA@PEAVCD3DDeviceLevel1@@PEAVCSharedDirect3DResources@0@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawListBatchManager::OpenDrawListEntryBatch(
        CDrawListBatchManager *this,
        struct CD3DDeviceLevel1 *a2,
        struct CDrawListEntryBatch **a3)
{
  int v3; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  int v11; // edx
  struct CDrawListEntryBatch::CSharedDirect3DResources *v13; // rbx
  CDrawListEntryBatch *v14; // rax
  unsigned int v15; // ecx
  CDrawListEntryBatch *v16; // rsi
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  CDrawListEntryBatch *v22; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((_DWORD *)this + 36) )
    goto LABEL_2;
  v13 = (struct CDrawListEntryBatch::CSharedDirect3DResources *)*((_QWORD *)this + 20);
  v14 = (CDrawListEntryBatch *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
  if ( v14 )
    v16 = CDrawListEntryBatch::CDrawListEntryBatch(v14, a2, v13);
  else
    v16 = 0LL;
  if ( !v16 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x51u);
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0xF7u);
    return (unsigned int)v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)v16 + 4);
  v17 = *((_DWORD *)this + 36);
  v22 = v16;
  v18 = v17 + 1;
  v3 = v17 + 1 < v17 ? 0x80070216 : 0;
  if ( v17 + 1 < v17 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v3, 0xB5u);
  }
  else if ( v18 > *((_DWORD *)this + 35) )
  {
    v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 120, 8, 1, &v22);
    v3 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, 0xC0u);
  }
  else
  {
    v19 = v17;
    *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * v17) = v22;
    *((_DWORD *)this + 36) = v18;
  }
  if ( v3 >= 0 )
  {
LABEL_2:
    v7 = *((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = 0LL;
    if ( v7 )
      CMILRefCountBase::Release((CMILRefCountBase *)(v7 + 8));
    v8 = (unsigned int)(*((_DWORD *)this + 36) - 1);
    *((_QWORD *)this + 21) = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v8);
    v9 = *((_DWORD *)this + 38);
    *((_DWORD *)this + 36) = v8;
    if ( v9 >= (unsigned int)v8 )
      v9 = v8;
    *((_DWORD *)this + 38) = v9;
    v10 = *((_QWORD *)this + 21);
    ++*((_DWORD *)this + 46);
    v11 = *((_DWORD *)this + 6);
    *(_DWORD *)(v10 + 48) = v11;
    *(_DWORD *)(v10 + 52) = v11;
    *a3 = (struct CDrawListEntryBatch *)*((_QWORD *)this + 21);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v3, 0xF8u);
    CMILRefCountBase::Release((CDrawListEntryBatch *)((char *)v16 + 8));
  }
  return (unsigned int)v3;
}
