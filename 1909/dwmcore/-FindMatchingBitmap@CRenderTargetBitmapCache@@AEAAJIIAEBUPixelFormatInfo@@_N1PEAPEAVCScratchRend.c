/*
 * XREFs of ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18004A260
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180049DF4 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x180049F70 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?IsValid@CHwTextureRenderTarget@@UEBA_NXZ @ 0x18004A3D0 (-IsValid@CHwTextureRenderTarget@@UEBA_NXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800D2C00 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CRenderTargetBitmapCache::FindMatchingBitmap(
        CRenderTargetBitmapCache *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        bool a5,
        bool a6,
        struct CScratchRenderTargetBitmap **a7)
{
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  unsigned int v9; // r15d
  struct CScratchRenderTargetBitmap *v12; // rbp
  unsigned int v13; // r12d
  __int64 v14; // rsi
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  int v17; // eax
  __int64 v18; // rdx
  bool v19; // al
  unsigned int v20; // ecx
  __int64 v21; // r8
  __int64 v23; // rcx

  v7 = *((_DWORD *)this + 6);
  v8 = 0;
  v9 = -1;
  v12 = 0LL;
  v13 = -1;
  if ( v7 )
  {
    do
    {
      v14 = *(_QWORD *)(*(_QWORD *)this + 8LL * --v7);
      if ( CHwTextureRenderTarget::IsValid((CHwTextureRenderTarget *)v14) )
      {
        v15 = *(_DWORD *)(v14 + 8);
        v16 = *(_DWORD *)(v14 + 12);
        v17 = *(_QWORD *)(v14 + 184);
        if ( v15 >= a2 && (!a6 && v16 >= a3 && v17 == *(_DWORD *)a4 || v16 == a3 && v15 == a2 && v17 == *(_DWORD *)a4) )
        {
          v18 = *(_QWORD *)(v14 + 176);
          v19 = 0;
          if ( v18 )
            v19 = (*(_DWORD *)(v18 + 168) & 0x80000) != 0;
          if ( v15 < v9 && a5 == v19 && v16 < v13 )
          {
            v12 = (struct CScratchRenderTargetBitmap *)v14;
            if ( a6 )
              break;
            v9 = *(_DWORD *)(v14 + 8);
            v13 = *(_DWORD *)(v14 + 12);
          }
        }
      }
      else
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this, v7);
        *(_BYTE *)(v14 + 216) = 0;
        CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v14);
      }
    }
    while ( v7 );
    if ( v12 )
    {
      v20 = *((_DWORD *)this + 6);
      v21 = *(_QWORD *)this;
      if ( v20 )
      {
        do
        {
          if ( v12 == *(struct CScratchRenderTargetBitmap **)(v21 + 8LL * v8) )
            break;
          ++v8;
        }
        while ( v8 < v20 );
      }
      if ( v8 < v20 )
      {
        for ( ; v8 < v20 - 1; v20 = *((_DWORD *)this + 6) )
        {
          v23 = v8++;
          *(_QWORD *)(v21 + 8 * v23) = *(_QWORD *)(v21 + 8LL * v8);
        }
        *((_DWORD *)this + 6) = v20 - 1;
      }
    }
  }
  *a7 = v12;
  return 0LL;
}
