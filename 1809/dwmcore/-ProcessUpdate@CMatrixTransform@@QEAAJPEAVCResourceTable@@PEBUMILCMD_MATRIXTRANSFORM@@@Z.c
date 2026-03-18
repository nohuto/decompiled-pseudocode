/*
 * XREFs of ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z @ 0x1800A0784
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18015DABC (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CMatrixTransform::ProcessUpdate(
        CMatrixTransform *this,
        struct CResourceTable *a2,
        const struct MILCMD_MATRIXTRANSFORM *a3)
{
  _BYTE v4[56]; // [rsp+20h] [rbp-48h]

  *(_OWORD *)v4 = *(_OWORD *)a3;
  *(_OWORD *)&v4[16] = *((_OWORD *)a3 + 1);
  *(_OWORD *)&v4[32] = *((_OWORD *)a3 + 2);
  *(_QWORD *)&v4[48] = *((_QWORD *)a3 + 6);
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)&v4[8];
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)&v4[24];
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)&v4[40];
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return 0LL;
}
