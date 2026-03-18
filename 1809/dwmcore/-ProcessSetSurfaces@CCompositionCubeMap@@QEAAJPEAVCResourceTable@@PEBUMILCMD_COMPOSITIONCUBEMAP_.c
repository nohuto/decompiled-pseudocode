/*
 * XREFs of ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x18018EBF8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18018EA70 (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionCubeMap::ProcessSetSurfaces(
        CCompositionCubeMap *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONCUBEMAP_SETSURFACES *a3,
        _DWORD *a4)
{
  CResourceTable *v6; // r8
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r12
  unsigned int v11; // edx
  CMILCOMBase *v12; // r15
  __int128 v13; // xmm6
  struct CResource *ResourceWithoutType; // rax
  CMILCOMBase *v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  struct CResource *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  CGdiSpriteBitmap *v24; // rax
  unsigned int v25; // ecx
  CGdiSpriteBitmap *v27; // [rsp+80h] [rbp+8h] BYREF
  struct CResourceTable *v28; // [rsp+88h] [rbp+10h]
  CGdiSpriteBitmap *v29; // [rsp+90h] [rbp+18h] BYREF

  v28 = a2;
  v6 = a2;
  v8 = *((_DWORD *)a3 + 2);
  if ( v8 > *((_DWORD *)this + 26) )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0xC3u);
    return v9;
  }
  v10 = 0LL;
  if ( !v8 )
  {
LABEL_14:
    *((_DWORD *)this + 28) = -1;
    v25 = 0;
    if ( *((_DWORD *)a3 + 2) )
    {
      while ( !*(_QWORD *)(32LL * v25 + *((_QWORD *)this + 10) + 8) )
      {
        if ( ++v25 >= *((_DWORD *)a3 + 2) )
          goto LABEL_19;
      }
      *((_DWORD *)this + 28) = v25;
    }
LABEL_19:
    *((_BYTE *)this + 144) = 1;
    return 0;
  }
  while ( 1 )
  {
    v11 = a4[5 * v10];
    v12 = 0LL;
    v27 = 0LL;
    v13 = 0LL;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(v6, v11);
    v15 = ResourceWithoutType;
    if ( !ResourceWithoutType )
      goto LABEL_7;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            37LL) )
      break;
    CMILCOMBase::InternalAddRef(v15);
    v29 = 0LL;
    v12 = v15;
    v27 = v15;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v29);
    v13 = *(_OWORD *)&a4[5 * v10 + 1];
    v17 = CResource::RegisterNotifier(this, v15);
    v9 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xE1u);
      goto LABEL_13;
    }
LABEL_7:
    v19 = *((_QWORD *)this + 10);
    v20 = 32LL * (unsigned int)v10;
    v21 = *(struct CResource **)(v19 + v20);
    if ( v21 )
    {
      CResource::UnRegisterNotifierInternal(this, v21);
      *(_QWORD *)(v19 + 32LL * (unsigned int)v10) = 0LL;
    }
    v22 = *((_QWORD *)this + 10);
    v27 = 0LL;
    *(_QWORD *)(v20 + v22) = v15;
    v23 = *((_QWORD *)this + 10);
    v24 = *(CGdiSpriteBitmap **)(v23 + v20 + 8);
    *(_QWORD *)(v23 + v20 + 8) = v12;
    v29 = v24;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v29);
    *(_OWORD *)(*((_QWORD *)this + 10) + v20 + 16) = v13;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v27);
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *((_DWORD *)a3 + 2) )
      goto LABEL_14;
    v6 = v28;
  }
  v9 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2003303421, 0xDEu);
LABEL_13:
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v27);
  return v9;
}
