/*
 * XREFs of ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x18003A1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodeForPose(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        const struct DirectX::XMFLOAT4X3 *a3,
        struct SPATIAL_NODE_ID *a4)
{
  return Windows::Internal::Holographic::SpatialGraphDriverClient::GetStaticNodeForPose(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)(a1 - 16),
           a2,
           a3,
           a4);
}
