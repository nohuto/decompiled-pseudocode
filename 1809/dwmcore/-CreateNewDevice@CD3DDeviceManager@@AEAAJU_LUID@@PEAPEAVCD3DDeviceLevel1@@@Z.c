/*
 * XREFs of ?CreateNewDevice@CD3DDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008A208
 * Callers:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z @ 0x18007EDC4 (-GetAdapterNoRefFromLuid@CDXGIEnumeration@@QEBAJU_LUID@@PEAPEAVCDXGIAdapterLimited@@@Z.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x18008A1D4 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18008A4FC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z @ 0x18008C794 (-HardwareProtectionRequired@CD3DDeviceManager@@QEBA_NU_LUID@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180099594 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x1800D60A8 (-Create@CD3DDeviceLevel1@@SAJPEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateNewDevice(
        CSurfaceManager **this,
        struct _LUID a2,
        struct CD3DDeviceLevel1 **a3)
{
  struct CD3DDeviceLevel1 *v5; // rdi
  int v7; // eax
  unsigned int v8; // ecx
  CDXGIEnumeration *v9; // r15
  unsigned int v10; // esi
  int AdapterNoRefFromLuid; // eax
  unsigned int v12; // ecx
  __int64 *v13; // r12
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct CD3DDeviceLevel1 *v20; // rdi
  CSurfaceManager *v21; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  struct CDXGIAdapterLimited *v25; // [rsp+30h] [rbp-38h] BYREF
  struct CD3DDeviceLevel1 *v26; // [rsp+80h] [rbp+18h] BYREF
  CDXGIEnumeration *v27; // [rsp+88h] [rbp+20h] BYREF

  v27 = 0LL;
  v25 = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  v26 = 0LL;
  v7 = CDisplayManager::EnsureDXGIEnumeration((CDisplayManager *)&g_DisplayManager, &v27);
  v9 = v27;
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_18024C878, 1u, v7, 0x229u);
  }
  else
  {
    AdapterNoRefFromLuid = CDXGIEnumeration::GetAdapterNoRefFromLuid(v27, a2, &v25);
    v10 = AdapterNoRefFromLuid;
    if ( AdapterNoRefFromLuid < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_18024C878, 1u, AdapterNoRefFromLuid, 0x22Cu);
      goto LABEL_9;
    }
    CD3DDeviceManager::DeleteUnusableDevices((CD3DDeviceManager *)this);
    v13 = (__int64 *)(this + 16);
    v14 = DynArrayImpl<0>::Grow((int)this + 128, 24, 1, 0, 0LL);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_18024C878, 1u, v14, 0x240u);
      goto LABEL_9;
    }
    v16 = CD3DDeviceLevel1::Create(v25, (struct IMILPoolManager *)this, &v26);
    v10 = v16;
    if ( v16 >= 0 )
    {
      v18 = *((unsigned int *)this + 38);
      *((_DWORD *)this + 38) = v18 + 1;
      v19 = *((unsigned int *)this + 52);
      if ( (unsigned int)v19 < (unsigned int)v18 )
      {
        v23 = *v13;
        v24 = 3 * v18;
        *(_OWORD *)(v23 + 8 * v24) = *(_OWORD *)(*v13 + 24 * v19);
        *(_QWORD *)(v23 + 8 * v24 + 16) = *(_QWORD *)(v23 + 24 * v19 + 16);
        v19 = *((unsigned int *)this + 52);
      }
      v20 = v26;
      *(_QWORD *)(*v13 + 24 * v19) = v26;
      *(_QWORD *)(*v13 + 24LL * *((unsigned int *)this + 52) + 8) = *((_QWORD *)v20 + 89);
      *(_BYTE *)(*v13 + 24LL * (unsigned int)(*((_DWORD *)this + 52))++ + 16) = CD3DDeviceManager::HardwareProtectionRequired(
                                                                                  (CD3DDeviceManager *)this,
                                                                                  a2);
      *a3 = v20;
      v21 = this[8];
      if ( v21 )
        CSurfaceManager::ResetTokenThread(v21);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_18024C878, 1u, v16, 0x244u);
    v5 = v26;
  }
  if ( v5 )
    CD3DSurface::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 496));
LABEL_9:
  if ( v9 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v9 + 8LL))(v9);
  return v10;
}
