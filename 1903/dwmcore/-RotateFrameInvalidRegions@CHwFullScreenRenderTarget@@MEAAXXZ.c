/*
 * XREFs of ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x1800B75E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800B752C (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800B76E4 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 */

void __fastcall CHwFullScreenRenderTarget::RotateFrameInvalidRegions(CHwFullScreenRenderTarget *this)
{
  void **v2; // rcx
  const struct FastRegion::Internal::CRgnData **v3; // rax
  void **v4; // rdi
  void **v5; // rbx
  const struct FastRegion::Internal::CRgnData *v6; // rsi
  int v7; // r8d
  int *v8; // r15
  __int64 v9; // rdx
  FastRegion::Internal::CRgnData *v10; // rcx
  int v11; // eax
  int v12; // ebp
  LPVOID v13; // r14

  if ( *((_DWORD *)this + 56) == 3 )
  {
    v2 = (void **)((char *)this + 416);
    v3 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 344);
    if ( v2 != (void **)((char *)this + 344) )
    {
      if ( *(_DWORD *)*v3 )
        FastRegion::CRegion::CopyData(v2, *v3);
      else
        *(_DWORD *)*v2 = 0;
    }
  }
  v4 = (void **)((char *)this + 344);
  v5 = (void **)((char *)this + 272);
  if ( v4 != v5 )
  {
    v6 = (const struct FastRegion::Internal::CRgnData *)*v5;
    v7 = *(_DWORD *)*v5;
    if ( !v7 )
    {
      *(_DWORD *)*v4 = 0;
      goto LABEL_11;
    }
    v8 = (int *)(v4 + 1);
    v9 = (__int64)v6 + 8 * v7 + 4;
    v10 = (FastRegion::Internal::CRgnData *)*v4;
    v11 = 60;
    v12 = v9 + *(_DWORD *)(v9 + 4) + 8 * v7 - *((_DWORD *)v6 + 4) - (_DWORD)v6;
    if ( v4 + 1 != *v4 )
      v11 = *v8;
    if ( v11 < v12 )
    {
      v13 = DefaultHeap::Alloc(v12);
      if ( !v13 )
        goto LABEL_11;
      FastRegion::CRegion::FreeMemory(v4);
      *v4 = v13;
      *v8 = v12;
      v10 = (FastRegion::Internal::CRgnData *)*v4;
    }
    FastRegion::Internal::CRgnData::Copy(v10, v6);
  }
LABEL_11:
  *(_DWORD *)*v5 = 0;
}
