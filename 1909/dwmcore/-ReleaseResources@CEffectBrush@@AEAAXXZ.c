/*
 * XREFs of ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x1800CAE50
 * Callers:
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18004783C (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800CAD80 (--1CEffectBrush@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C52D0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CEffectBrush::ReleaseResources(CEffectBrush *this)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbx

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 0x18u);
    *(_BYTE *)(v1 + 200) = 1;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  }
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 72) = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 12);
  }
  v4 = *((_DWORD *)this + 34);
  if ( v4 )
  {
    v5 = 0LL;
    v6 = v4;
    do
    {
      v7 = *((_QWORD *)this + 14);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v5 + v7));
      *(_QWORD *)(v5 + v7) = 0LL;
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)this + 34) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 112, 8u);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 13);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 11));
  *((_QWORD *)this + 11) = 0LL;
}
