/*
 * XREFs of ?SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z @ 0x18007898C
 * Callers:
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180078830 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x180205738 (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180093E68 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::SetupBackBuffers(CSwapChainBase *this, struct CD3DResourceManager *a2)
{
  int v2; // ebx
  unsigned int v3; // esi
  unsigned int v6; // r14d
  int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-10h]
  unsigned int v14; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DSurface *v15; // [rsp+70h] [rbp+40h] BYREF
  struct ID3D11Texture2D *v16; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v3 = 0;
  v16 = 0LL;
  v15 = 0LL;
  if ( *((_DWORD *)this + 40) )
  {
    v6 = v14;
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(CSwapChainBase *, _QWORD, unsigned int *, struct ID3D11Texture2D **))(*(_QWORD *)this + 296LL))(
             this,
             v3,
             &v14,
             &v16);
      v2 = v7;
      if ( v7 < 0 )
        break;
      v7 = CD3DSurface::CreateViewOfTexture(a2, v16, &v14, 0, &v15);
      v2 = v7;
      if ( v7 < 0 )
      {
        v13 = 645;
        goto LABEL_23;
      }
      v9 = *((unsigned int *)this + 102);
      v10 = v9 + 1;
      if ( (int)v9 + 1 >= (unsigned int)v9 )
        v6 = v9 + 1;
      v2 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
      if ( v10 < (unsigned int)v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v2, 0xB5u);
      }
      else if ( v6 > *((_DWORD *)this + 101) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8, 1, &v15);
        v2 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 48) + 8 * v9) = v15;
        *((_DWORD *)this + 102) = v6;
      }
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v2, 0x288u);
        goto LABEL_12;
      }
      v15 = 0LL;
      ReleaseInterface<IBitmapLock>((__int64 *)&v16);
      if ( ++v3 >= *((_DWORD *)this + 40) )
        goto LABEL_12;
    }
    v13 = 639;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v13);
LABEL_12:
    if ( v16 )
      ((void (__fastcall *)(struct ID3D11Texture2D *))v16->lpVtbl->Release)(v16);
    if ( v15 )
      (*(void (__fastcall **)(struct CD3DSurface *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  return (unsigned int)v2;
}
