/*
 * XREFs of ?SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z @ 0x1800E49E0
 * Callers:
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1800E4880 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x18016429C (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180048B94 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::SetupBackBuffers(CSwapChainBase *this, struct CD3DResourceManager *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-10h]
  unsigned int v14; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DSurface *v15; // [rsp+70h] [rbp+40h] BYREF
  struct ID3D11Texture2D *v16; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v3 = 0;
  v16 = 0LL;
  v15 = 0LL;
  if ( !*((_DWORD *)this + 40) )
    return v2;
  while ( 1 )
  {
    v6 = (*(__int64 (__fastcall **)(CSwapChainBase *, _QWORD, unsigned int *, struct ID3D11Texture2D **))(*(_QWORD *)this + 320LL))(
           this,
           v3,
           &v14,
           &v16);
    v2 = v6;
    if ( v6 < 0 )
      break;
    v6 = CD3DSurface::CreateViewOfTexture(a2, v16, (char *)&v14, 0, &v15);
    v2 = v6;
    if ( v6 < 0 )
    {
      v13 = 602;
      goto LABEL_20;
    }
    v8 = *((_DWORD *)this + 102);
    v9 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
      v2 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else
    {
      if ( v9 <= *((_DWORD *)this + 101) )
      {
        v2 = 0;
        *(_QWORD *)(*((_QWORD *)this + 48) + 8LL * v8) = v15;
        *((_DWORD *)this + 102) = v9;
        goto LABEL_7;
      }
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8, 1, &v15);
      v2 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC3u, 0LL);
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v2, 0x25Du, 0LL);
      goto LABEL_8;
    }
LABEL_7:
    v15 = 0LL;
    ReleaseInterface<IBitmapLock>((__int64 *)&v16);
    if ( ++v3 >= *((_DWORD *)this + 40) )
      goto LABEL_8;
  }
  v13 = 596;
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, v13, 0LL);
LABEL_8:
  if ( v16 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v16->lpVtbl->Release)(v16);
  if ( v15 )
    (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v15 + 8LL))(v15);
  return v2;
}
