/*
 * XREFs of ?CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0@Z @ 0x18008D1A8
 * Callers:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18008CF88 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18008F2B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BDFD4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021BE8C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopySurfaceRegionAndCountPixels(
        CHwFullScreenRenderTarget *this,
        struct CD3DSurface *a2,
        FastRegion::Internal::CRgnData **a3,
        struct CD3DSurface *a4)
{
  unsigned int v5; // edi
  CHwFullScreenRenderTarget *v7; // r10
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r12d
  int v15; // esi
  __int64 v16; // rcx
  FastRegion::Internal::CRgnData *v17; // rcx
  int v19; // [rsp+38h] [rbp-71h]
  _BYTE v21[8]; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-39h]
  int *v23; // [rsp+78h] [rbp-31h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  int v25; // [rsp+88h] [rbp-21h]
  _DWORD v26[6]; // [rsp+98h] [rbp-11h] BYREF

  v5 = 0;
  FastRegion::Internal::CRgnData::BeginIterator(*a3, (struct FastRegion::CRegion::Iterator *)v21);
  while ( (unsigned __int64)v23 < v22 )
  {
    v8 = *v23;
    v9 = v23[2];
    v10 = *((_QWORD *)a2 + 16);
    v26[2] = 0;
    v11 = *((unsigned int *)a4 + 34);
    v12 = 2 * v25;
    v13 = *((_QWORD *)a4 + 16);
    v26[1] = v8;
    v14 = *(_DWORD *)(v24 + 4 * v12);
    v15 = *(_DWORD *)(v24 + 4 * v12 + 4);
    v19 = *((_DWORD *)a2 + 34);
    v16 = *(_QWORD *)(*((_QWORD *)v7 + 19) + 640LL);
    v26[0] = v14;
    v26[3] = v15;
    v26[4] = v9;
    v26[5] = 1;
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, int, _DWORD, __int64, int, _DWORD *, _DWORD))(*(_QWORD *)v16 + 920LL))(
      v16,
      v13,
      v11,
      v14,
      v8,
      0,
      v10,
      v19,
      v26,
      0);
    if ( g_LockAndReadCopyOfTexture )
    {
      DebugInspectTexture(*((struct ID3D11Texture2D **)a4 + 16), 0);
      DebugInspectTexture(*((struct ID3D11Texture2D **)a2 + 16), 0);
    }
    v5 += (v15 - v14) * (v9 - v8);
    FastRegion::Internal::CRgnData::StepIterator(v17, (struct FastRegion::CRegion::Iterator *)v21);
    v7 = this;
  }
  return v5;
}
