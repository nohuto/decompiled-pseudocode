/*
 * XREFs of ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z @ 0x18015C188
 * Callers:
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1801CFE38 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801D1CB4 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 * Callees:
 *     ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x1800B1F34 (-CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtag.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021BE8C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

void __fastcall CD3DDeviceLevel1::CopyTextureRect(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        __int64 a3,
        const struct tagRECT *a4,
        struct ID3D11Resource *a5,
        unsigned int a6)
{
  CD3DDeviceLevel1::CopySubresourceRectInternal1(this, a2, 0, a4, a5, a6, 0LL, 0);
  if ( g_LockAndReadCopyOfTexture )
  {
    DebugInspectTexture((struct ID3D11Texture2D *)a2, 0);
    DebugInspectTexture((struct ID3D11Texture2D *)a5, 0);
  }
}
