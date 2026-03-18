/*
 * XREFs of ?CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0@Z @ 0x180090804
 * Callers:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x1800905E8 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x1800908FC (-CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtag.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801E16E8 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopySurfaceRegionAndCountPixels(
        CHwFullScreenRenderTarget *this,
        struct CD3DSurface *a2,
        FastRegion::Internal::CRgnData **a3,
        struct CD3DSurface *a4)
{
  unsigned int v6; // ebx
  LONG v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // r8d
  LONG v11; // edx
  LONG v12; // eax
  CD3DDeviceLevel1 *v13; // rcx
  struct ID3D11Resource *v14; // rax
  FastRegion::Internal::CRgnData *v15; // rcx
  unsigned int v17; // [rsp+28h] [rbp-58h]
  struct tagRECT v18; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-28h]
  LONG *v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+70h] [rbp-10h]
  tagPOINT v24; // [rsp+B0h] [rbp+30h] BYREF

  v6 = 0;
  FastRegion::Internal::CRgnData::BeginIterator(*a3, (struct FastRegion::CRegion::Iterator *)v19);
  while ( (unsigned __int64)v21 < v20 )
  {
    v8 = *v21;
    v18.bottom = v21[2];
    v18.top = v8;
    v9 = 2 * v23;
    v24.y = v8;
    v10 = *((_DWORD *)a2 + 34);
    v11 = *(_DWORD *)(v22 + 4 * v9);
    v12 = *(_DWORD *)(v22 + 4 * v9 + 4);
    v13 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 27);
    v18.right = v12;
    v17 = *((_DWORD *)a4 + 34);
    v14 = (struct ID3D11Resource *)*((_QWORD *)a4 + 16);
    v18.left = v11;
    v24.x = v11;
    CD3DDeviceLevel1::CopySubresourceRectInternal1(
      v13,
      *((struct ID3D11Resource **)a2 + 16),
      v10,
      &v18,
      v14,
      v17,
      &v24,
      0);
    if ( g_LockAndReadCopyOfTexture )
    {
      DebugInspectTexture(*((struct ID3D11Texture2D **)a4 + 16), 0);
      DebugInspectTexture(*((struct ID3D11Texture2D **)a2 + 16), 0);
    }
    v15 = (FastRegion::Internal::CRgnData *)(unsigned int)((v18.right - v18.left) * (v18.bottom - v18.top));
    v6 += (unsigned int)v15;
    FastRegion::Internal::CRgnData::StepIterator(v15, (struct FastRegion::CRegion::Iterator *)v19);
  }
  return v6;
}
