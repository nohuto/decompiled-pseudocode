/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180193F80
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800550C8 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7F30 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800D4D7C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x1800E71F0 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x18015C5C4 (-OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPE.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18019399C (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801949D0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x180199650 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180199CBC (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessCreate(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        struct _LUID *a3)
{
  struct CD3DDeviceLevel1 *v5; // rsi
  struct CVisual *Resource; // rax
  void *v7; // r15
  struct CVisual *v8; // rbx
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // r9d
  __int64 v12; // r8
  signed int D3DDevice; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  signed int v17; // eax
  __int64 v18; // rcx
  int updated; // eax
  int v20; // r14d
  int v21; // r12d
  __int64 v22; // r8
  __int64 v23; // rcx
  CComposition *v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-69h]
  unsigned int v27; // [rsp+20h] [rbp-69h]
  struct CD3DDeviceLevel1 *v28; // [rsp+30h] [rbp-59h] BYREF
  __int64 v29; // [rsp+38h] [rbp-51h] BYREF
  __int64 v30; // [rsp+40h] [rbp-49h] BYREF
  __int64 v31; // [rsp+48h] [rbp-41h] BYREF
  struct CVisual *v32; // [rsp+50h] [rbp-39h]
  _DWORD v33[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v34; // [rsp+64h] [rbp-25h]
  __int64 v35; // [rsp+6Ch] [rbp-1Dh]
  _DWORD v36[12]; // [rsp+78h] [rbp-11h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  v5 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, a3[3].LowPart, 0xBDu);
  v7 = (void *)a3[1];
  v32 = Resource;
  v31 = 0LL;
  v8 = Resource;
  v30 = 0LL;
  memset_0(v36, 0, 0x2CuLL);
  if ( v8 )
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a3[2], &v28);
    v10 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, D3DDevice, 0x22u, 0LL);
      v5 = v28;
      goto LABEL_27;
    }
    v5 = v28;
    v17 = CD3DDeviceLevel1::OpenIndirectSwapchain((__int64)v28, (__int64)v7, v15, v16, v26, &v29);
    v10 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2Bu, 0LL);
      goto LABEL_27;
    }
    v7 = 0LL;
    updated = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v29 + 56LL))(v29, 0LL, (char *)this + 520);
    v10 = updated;
    if ( updated < 0 )
    {
      v27 = 52;
    }
    else
    {
      updated = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 65))(
                  *((_QWORD *)this + 65),
                  &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                  &v31);
      v10 = updated;
      if ( updated < 0 )
      {
        v27 = 53;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v31 + 80LL))(v31, v36);
        v20 = v36[0];
        v21 = v36[1];
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, (enum DXGI_FORMAT)v36[4]);
        v10 = updated;
        if ( updated < 0 )
        {
          v27 = 61;
        }
        else
        {
          updated = CRenderTarget::SetRoot(this, (struct CComposition **)v32, v22);
          v10 = updated;
          if ( updated < 0 )
          {
            v27 = 64;
          }
          else
          {
            v23 = v29;
            *((_QWORD *)this + 64) = v29;
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
            *((_DWORD *)this + 22) = v20;
            *((_DWORD *)this + 23) = v21;
            *((_DWORD *)this + 134) = v20;
            *((_DWORD *)this + 135) = v21;
            *((struct _LUID *)this + 66) = a3[2];
            *((_BYTE *)this + 266) = 1;
            updated = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer((struct _LUID *)this);
            v10 = updated;
            if ( updated < 0 )
            {
              v27 = 77;
            }
            else
            {
              updated = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 34))(
                          **((_QWORD **)this + 34),
                          &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
                          &v30);
              v10 = updated;
              if ( updated < 0 )
              {
                v27 = 78;
              }
              else
              {
                updated = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 24LL))(
                            v30,
                            ((unsigned __int64)this + 80) & -(__int64)(this != 0LL));
                v10 = updated;
                if ( updated >= 0 )
                {
                  *((_QWORD *)this + 17) = v30;
                  v30 = 0LL;
                  COffScreenRenderTarget::ReleaseRenderTargets(this);
                  goto LABEL_27;
                }
                v27 = 80;
              }
            }
          }
        }
      }
    }
    v11 = updated;
  }
  else
  {
    v10 = -2003303421;
    v11 = -2003303421;
    v27 = 29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v11, v27, 0LL);
LABEL_27:
  if ( *((_QWORD *)this + 65) )
  {
    LODWORD(v28) = 2;
    (*(void (__fastcall **)(__int64, __int64, struct CD3DDeviceLevel1 **))(*(_QWORD *)v29 + 64LL))(v29, 4LL, &v28);
    ReleaseInterface<IBitmapLock>((__int64 *)this + 65);
  }
  if ( v10 < 0 )
    CIndirectSwapchainRenderTarget::Unregister(this);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v5 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 496));
  if ( v7 )
    CloseHandle(v7);
  v24 = (CComposition *)*((_QWORD *)this + 2);
  v33[0] = 19;
  v33[1] = 0;
  v33[2] = v10;
  v34 = 0LL;
  v35 = 0LL;
  CComposition::NotifyHelper(v24, (struct MIL_MESSAGE *)v33, v12);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v30);
  return 0LL;
}
