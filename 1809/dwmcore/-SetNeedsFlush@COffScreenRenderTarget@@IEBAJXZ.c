/*
 * XREFs of ?SetNeedsFlush@COffScreenRenderTarget@@IEBAJXZ @ 0x18001C788
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18015DE50 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180099098 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderTarget::SetNeedsFlush(COffScreenRenderTarget *this)
{
  int v1; // ebx
  __int64 i; // rdi
  __int64 v4; // rcx
  int ExistingDevice; // eax
  unsigned int v6; // ecx
  int v7; // ebp
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
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ExistingDevice, 0x101u);
        if ( v1 >= 0 )
          v1 = v7;
      }
      else
      {
        v8 = v11;
        if ( *((int *)v11 + 212) >= 0 )
          *((_BYTE *)v11 + 1028) = 1;
        CD3DSurface::Release((struct CD3DDeviceLevel1 *)((char *)v8 + 496));
      }
    }
  }
  return (unsigned int)v1;
}
