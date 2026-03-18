/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x18015C348
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18001D440 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x18007AAD0 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18009DAB4 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18015BE14 (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015CC80 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180176404 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x1801FCDAC (-OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPE.c)
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
  int v11; // r9d
  __int64 v12; // r8
  int D3DDevice; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int updated; // eax
  int v18; // r14d
  int v19; // r12d
  bool v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  CComposition *v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-69h]
  struct CD3DDeviceLevel1 *v26; // [rsp+30h] [rbp-59h] BYREF
  __int64 v27; // [rsp+38h] [rbp-51h]
  __int64 v28; // [rsp+40h] [rbp-49h] BYREF
  __int64 v29; // [rsp+48h] [rbp-41h] BYREF
  struct CVisual *v30; // [rsp+50h] [rbp-39h]
  _DWORD v31[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v32; // [rsp+64h] [rbp-25h]
  __int64 v33; // [rsp+6Ch] [rbp-1Dh]
  _DWORD v34[12]; // [rsp+78h] [rbp-11h] BYREF

  v27 = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, a3[3].LowPart, 0x9Du);
  v7 = (void *)a3[1];
  v29 = 0LL;
  v28 = 0LL;
  v8 = Resource;
  v30 = Resource;
  memset_0(v34, 0, 0x2CuLL);
  if ( v8 )
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a3[2], &v26);
    v10 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, D3DDevice, 0x24u);
      v5 = v26;
      goto LABEL_27;
    }
    v5 = v26;
    v15 = CD3DDeviceLevel1::OpenIndirectSwapchain(v26, v7);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2Du);
      goto LABEL_27;
    }
    v7 = 0LL;
    updated = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v27 + 56LL))(v27, 0LL, (char *)this + 528);
    v10 = updated;
    if ( updated < 0 )
    {
      v25 = 54;
    }
    else
    {
      updated = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 66))(
                  *((_QWORD *)this + 66),
                  &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                  &v29);
      v10 = updated;
      if ( updated < 0 )
      {
        v25 = 55;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v29 + 80LL))(v29, v34);
        v18 = v34[0];
        v19 = v34[1];
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, (enum DXGI_FORMAT)v34[4]);
        v10 = updated;
        if ( updated < 0 )
        {
          v25 = 63;
        }
        else
        {
          updated = CRenderTarget::SetRoot(this, v30, v20);
          v10 = updated;
          if ( updated < 0 )
          {
            v25 = 66;
          }
          else
          {
            v21 = v27;
            *((_QWORD *)this + 65) = v27;
            if ( v21 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
            *((_DWORD *)this + 90) = v18;
            *((_DWORD *)this + 91) = v19;
            *((_DWORD *)this + 136) = v18;
            *((_DWORD *)this + 137) = v19;
            *((struct _LUID *)this + 67) = a3[2];
            *((_BYTE *)this + 266) = 1;
            updated = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer((struct _LUID *)this);
            v10 = updated;
            if ( updated < 0 )
            {
              v25 = 79;
            }
            else
            {
              updated = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 34))(
                          **((_QWORD **)this + 34),
                          &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
                          &v28);
              v10 = updated;
              if ( updated < 0 )
              {
                v25 = 80;
              }
              else
              {
                updated = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 24LL))(
                            v28,
                            ((unsigned __int64)this + 80) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
                v10 = updated;
                if ( updated >= 0 )
                {
                  v22 = v28;
                  v28 = 0LL;
                  *((_QWORD *)this + 17) = v22;
                  COffScreenRenderTarget::ReleaseRenderTargets(this);
                  goto LABEL_27;
                }
                v25 = 82;
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
    v25 = 31;
    v11 = -2003303421;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v11, v25);
LABEL_27:
  if ( *((_QWORD *)this + 66) )
  {
    LODWORD(v26) = 2;
    (*(void (__fastcall **)(__int64, __int64, struct CD3DDeviceLevel1 **))(*(_QWORD *)v27 + 64LL))(v27, 4LL, &v26);
    ReleaseInterface<IBitmapLock>((__int64 *)this + 66);
  }
  if ( v10 < 0 )
    CIndirectSwapchainRenderTarget::Unregister(this);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v5 )
    CD3DSurface::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 496));
  if ( v7 )
    CloseHandle(v7);
  v23 = (CComposition *)*((_QWORD *)this + 2);
  v31[0] = 19;
  v31[1] = 0;
  v31[2] = v10;
  v32 = 0LL;
  v33 = 0LL;
  CComposition::NotifyHelper(v23, (struct MIL_MESSAGE *)v31, v12);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v28);
  return 0LL;
}
