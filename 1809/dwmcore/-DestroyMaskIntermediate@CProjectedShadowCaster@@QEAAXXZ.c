/*
 * XREFs of ?DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ @ 0x1801ACFC4
 * Callers:
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A96E0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnChanged@CProjectedShadowCaster@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801ADBE0 (-OnChanged@CProjectedShadowCaster@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTER_SETMASK@@@Z @ 0x1801ADCA0 (-ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTE.c)
 *     ?RefreshMaskContent@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801ADE0C (-RefreshMaskContent@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?InitializeFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801CB520 (-InitializeFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CProjectedShadowCaster::DestroyMaskIntermediate(CProjectedShadowCaster *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi

  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 16);
  v2 = 0LL;
  v3 = (__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) >> 3;
  v4 = (int)v3;
  if ( (int)v3 > 0 )
  {
    do
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v2++)
                                                                       + 384LL));
    while ( v2 < v4 );
  }
}
