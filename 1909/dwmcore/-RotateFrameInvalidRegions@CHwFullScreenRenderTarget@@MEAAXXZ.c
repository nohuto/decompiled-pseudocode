/*
 * XREFs of ?RotateFrameInvalidRegions@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x1800BA560
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x1800BA4AC (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z @ 0x1800BA664 (-Copy@CRgnData@Internal@FastRegion@@QEAAXAEBV123@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::RotateFrameInvalidRegions(CHwFullScreenRenderTarget *this)
{
  FastRegion::Internal::CRgnData **v2; // rcx
  const struct FastRegion::Internal::CRgnData **v3; // rax
  FastRegion::CRegion *v4; // rdi
  FastRegion::CRegion *v5; // rbx
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
    v2 = (FastRegion::Internal::CRgnData **)((char *)this + 416);
    v3 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 344);
    if ( v2 != (FastRegion::Internal::CRgnData **)((char *)this + 344) )
    {
      if ( *(_DWORD *)*v3 )
        FastRegion::CRegion::CopyData(v2, *v3);
      else
        *(_DWORD *)*v2 = 0;
    }
  }
  v4 = (CHwFullScreenRenderTarget *)((char *)this + 344);
  v5 = (CHwFullScreenRenderTarget *)((char *)this + 272);
  if ( v4 != v5 )
  {
    v6 = *(const struct FastRegion::Internal::CRgnData **)v5;
    v7 = **(_DWORD **)v5;
    if ( !v7 )
    {
      **(_DWORD **)v4 = 0;
      goto LABEL_11;
    }
    v8 = (int *)((char *)v4 + 8);
    v9 = (__int64)v6 + 8 * v7 + 4;
    v10 = *(FastRegion::Internal::CRgnData **)v4;
    v11 = 60;
    v12 = v9 + *(_DWORD *)(v9 + 4) + 8 * v7 - *((_DWORD *)v6 + 4) - (_DWORD)v6;
    if ( (FastRegion::CRegion *)((char *)v4 + 8) != *(FastRegion::CRegion **)v4 )
      v11 = *v8;
    if ( v11 < v12 )
    {
      v13 = DefaultHeap::Alloc(v12);
      if ( !v13 )
        goto LABEL_11;
      FastRegion::CRegion::FreeMemory(v4);
      *(_QWORD *)v4 = v13;
      *v8 = v12;
      v10 = *(FastRegion::Internal::CRgnData **)v4;
    }
    FastRegion::Internal::CRgnData::Copy(v10, v6);
  }
LABEL_11:
  **(_DWORD **)v5 = 0;
}
