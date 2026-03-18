/*
 * XREFs of ?GetD3DDeviceNoRef@CDeviceManager@CCaptureRenderTarget@@QEAAPEAVCD3DDeviceLevel1@@AEBU_LUID@@PEAUIFlipProducer@@@Z @ 0x1800EE1DC
 * Callers:
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ @ 0x1800EC8F4 (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDeviceLevel1@@XZ.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800550C8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetDeviceRemovedReason@CD3DDeviceLevel1@@QEAAJXZ @ 0x18015BEA0 (-GetDeviceRemovedReason@CD3DDeviceLevel1@@QEAAJXZ.c)
 */

struct CD3DDeviceLevel1 *__fastcall CCaptureRenderTarget::CDeviceManager::GetD3DDeviceNoRef(
        struct CD3DDeviceLevel1 **this,
        const struct _LUID *a2,
        struct IFlipProducer *a3)
{
  struct CD3DDeviceLevel1 *v5; // rcx
  struct CD3DDeviceLevel1 *v7; // rcx
  struct CD3DDeviceLevel1 *v8; // rcx
  __int64 v9; // rax
  struct CD3DDeviceLevel1 *v10; // rcx

  v5 = *this;
  if ( !v5 || *((_QWORD *)v5 + 89) != *a2 || (int)CD3DDeviceLevel1::GetDeviceRemovedReason(v5) < 0 )
  {
    v7 = *this;
    *this = 0LL;
    if ( v7 )
      CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v7 + 496));
    (*(void (__fastcall **)(struct IFlipProducer *, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, 0LL);
    if ( a2->LowPart || a2->HighPart )
    {
      v8 = *this;
      *this = 0LL;
      if ( v8 )
        CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 496));
      if ( (int)CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, *a2, this) >= 0 )
      {
        if ( (v9 = *((_QWORD *)*this + 87), !*(_BYTE *)(v9 + 344)) && !*(_BYTE *)(v9 + 345)
          || (*(int (__fastcall **)(struct IFlipProducer *, _QWORD))(*(_QWORD *)a3 + 40LL))(a3, *((_QWORD *)*this + 79)) < 0 )
        {
          v10 = *this;
          *this = 0LL;
          if ( v10 )
            CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v10 + 496));
        }
      }
    }
  }
  return *this;
}
