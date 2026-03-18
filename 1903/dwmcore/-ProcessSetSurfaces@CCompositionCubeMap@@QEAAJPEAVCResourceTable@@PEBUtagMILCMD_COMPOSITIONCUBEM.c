/*
 * XREFs of ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x1801D04CC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18016A750 (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionCubeMap::ProcessSetSurfaces(
        CCompositionCubeMap *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONCUBEMAP_SETSURFACES *a3,
        _DWORD *a4)
{
  CResourceTable *v5; // r8
  unsigned int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // r13
  CMILCOMBase *v10; // r12
  __int128 v11; // xmm6
  struct CResource *ResourceWithoutType; // rax
  CMILCOMBase *v13; // r15
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r14
  struct CResource *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  CGdiSpriteBitmap *v22; // rax
  unsigned int v23; // ecx
  CGdiSpriteBitmap *v25; // [rsp+80h] [rbp+8h] BYREF
  struct CResourceTable *v26; // [rsp+88h] [rbp+10h]
  CGdiSpriteBitmap *v27; // [rsp+90h] [rbp+18h] BYREF
  _DWORD *v28; // [rsp+98h] [rbp+20h]

  v28 = a4;
  v26 = a2;
  v5 = a2;
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 > *((_DWORD *)this + 26) )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88980403, 0xC1u, 0LL);
    return v8;
  }
  v9 = 0LL;
  if ( !v7 )
  {
LABEL_14:
    *((_DWORD *)this + 28) = -1;
    v23 = 0;
    if ( *((_DWORD *)a3 + 2) )
    {
      while ( !*(_QWORD *)(32LL * v23 + *((_QWORD *)this + 10) + 8) )
      {
        if ( ++v23 >= *((_DWORD *)a3 + 2) )
          goto LABEL_19;
      }
      *((_DWORD *)this + 28) = v23;
    }
LABEL_19:
    *((_BYTE *)this + 144) = 1;
    return 0;
  }
  while ( 1 )
  {
    v10 = 0LL;
    v25 = 0LL;
    v11 = 0LL;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(v5, a4[5 * v9]);
    v13 = ResourceWithoutType;
    if ( !ResourceWithoutType )
      goto LABEL_7;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
            ResourceWithoutType,
            39LL) )
      break;
    CMILCOMBase::InternalAddRef(v13);
    v27 = 0LL;
    v10 = v13;
    v25 = v13;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v27);
    v11 = *(_OWORD *)&v28[5 * v9 + 1];
    v15 = CResource::RegisterNotifier(this, v13);
    v8 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xDFu, 0LL);
      goto LABEL_13;
    }
LABEL_7:
    v17 = *((_QWORD *)this + 10);
    v18 = 32LL * (unsigned int)v9;
    v19 = *(struct CResource **)(v18 + v17);
    if ( v19 )
    {
      CResource::UnRegisterNotifierInternal(this, v19);
      *(_QWORD *)(v18 + v17) = 0LL;
    }
    v20 = *((_QWORD *)this + 10);
    v25 = 0LL;
    *(_QWORD *)(v18 + v20) = v13;
    v21 = *((_QWORD *)this + 10);
    v22 = *(CGdiSpriteBitmap **)(v18 + v21 + 8);
    *(_QWORD *)(v18 + v21 + 8) = v10;
    v27 = v22;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v27);
    *(_OWORD *)(v18 + *((_QWORD *)this + 10) + 16) = v11;
    Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v25);
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= *((_DWORD *)a3 + 2) )
      goto LABEL_14;
    a4 = v28;
    v5 = v26;
  }
  v8 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x88980403, 0xDCu, 0LL);
LABEL_13:
  Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(&v25);
  return v8;
}
