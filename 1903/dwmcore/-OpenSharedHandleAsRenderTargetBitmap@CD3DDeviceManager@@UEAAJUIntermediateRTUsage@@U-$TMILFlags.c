/*
 * XREFs of ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@U_LUID@@VDisplayId@@PEAX_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015F380
 * Callers:
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801AA328 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800424C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAX_NPEAPEAV1@@Z @ 0x180163920 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsRenderTargetBitmap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _LUID a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        _QWORD *a9)
{
  _QWORD *v9; // r14
  struct CD3DDeviceLevel1 *v10; // rsi
  int v11; // r8d
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rdi
  __int64 v13; // rdx
  signed int v16; // eax
  __int64 v17; // rcx
  signed int v18; // ebx
  signed int D3DDevice; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx
  signed int v23; // eax
  __int64 v24; // rcx
  unsigned int v26; // [rsp+20h] [rbp-38h]
  struct CD3DDeviceLevel1 *v27; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp+10h] BYREF

  v9 = a9;
  v10 = 0LL;
  v11 = a6;
  v12 = 0LL;
  v13 = (__int64)a5;
  v27 = 0LL;
  *a9 = 0LL;
  v28 = 0LL;
  v16 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId(a1, v13, v11);
  v18 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x3FFu, 0LL);
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802E3D40, 1u, v18, 0x6BDu, 0LL);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 16), a5, &v27);
    v18 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1802E3D40, 1u, D3DDevice, 0x6BFu, 0LL);
      v10 = v27;
      goto LABEL_13;
    }
    v10 = v27;
    LOBYTE(v26) = a8;
    v21 = CHwTextureRenderTarget::OpenShared(v27, a6, a4, a7, v26, &v28);
    v18 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_1802E3D40, 1u, v21, 0x6C9u, 0LL);
      v12 = v28;
    }
    else
    {
      v12 = v28;
      v23 = (**v28)(v28, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, v9);
      v18 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, &dword_1802E3D40, 1u, v23, 0x6CCu, 0LL);
    }
  }
  if ( v12 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
LABEL_13:
  if ( v10 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v10 + 496));
  return (unsigned int)v18;
}
