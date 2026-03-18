/*
 * XREFs of ??1CProjectedShadow@@MEAA@XZ @ 0x1801EFAD0
 * Callers:
 *     ??_ECProjectedShadow@@MEAAPEAXI@Z @ 0x1801EFBE0 (--_ECProjectedShadow@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CDrawListCacheSet@@QEAA@XZ @ 0x18008A920 (--1CDrawListCacheSet@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9E60 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CProjectedShadow::~CProjectedShadow(CProjectedShadow *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8

  v1 = (__int64 *)((char *)this + 296);
  v3 = *((_QWORD *)this + 37);
  *(_QWORD *)this = &CProjectedShadow::`vftable';
  if ( v3 )
  {
    *(_DWORD *)(v3 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v3 + 16, 0x18u);
    *(_BYTE *)(v3 + 200) = 1;
  }
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v4);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v5);
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    CPtrArrayBase::Remove((CProjectedShadow *)((char *)this + 24), v6);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(v1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 36);
  CDrawListCacheSet::~CDrawListCacheSet((void ***)this + 30, v7, v8);
  CResource::~CResource(this);
}
