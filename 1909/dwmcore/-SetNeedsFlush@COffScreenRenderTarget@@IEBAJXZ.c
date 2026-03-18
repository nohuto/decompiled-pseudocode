/*
 * XREFs of ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x180199BF4
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1801A96E0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderTarget::SetNeedsFlush(COffScreenRenderTarget *this)
{
  int v1; // ebx
  __int64 i; // rdi
  __int64 v4; // rcx
  signed int ExistingDevice; // eax
  __int64 v6; // rcx
  signed int v7; // ebp
  struct CD3DDeviceLevel1 *v8; // rcx
  struct _LUID v10; // [rsp+50h] [rbp+8h] BYREF
  struct CD3DDeviceLevel1 *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 74); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 34) + 8 * i);
    if ( (*(int (__fastcall **)(__int64, struct _LUID *, _QWORD))(*(_QWORD *)v4 + 120LL))(v4, &v10, 0LL) >= 0 )
    {
      ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v10, &v11);
      v7 = ExistingDevice;
      if ( ExistingDevice < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ExistingDevice, 0xFFu, 0LL);
        if ( v1 >= 0 )
          v1 = v7;
      }
      else
      {
        v8 = v11;
        if ( *((int *)v11 + 220) >= 0 )
          *((_BYTE *)v11 + 1164) = 1;
        CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 496));
      }
    }
  }
  return (unsigned int)v1;
}
