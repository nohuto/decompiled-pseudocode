/*
 * XREFs of ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1801956C0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002841C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z @ 0x1800E6340 (-SetRoot@CRenderTarget@@IEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPEAPEAUIDXGIIndirectSwapChain@@@Z @ 0x18015DCA0 (-OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAX0W4DXGI_INTERNAL_INDIRECT_SWAP_CHAIN_FLAG@@KPE.c)
 *     ?CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801950DC (-CreateRenderTargetForAcquiredBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180196110 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x18019AF10 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18019B57C (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
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
  signed int D3DDevice; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  signed int v16; // eax
  __int64 v17; // rcx
  int updated; // eax
  int v19; // r14d
  int v20; // r12d
  __int64 v21; // r8
  __int64 v22; // rcx
  CComposition *v23; // rcx
  __int64 v25; // [rsp+20h] [rbp-69h]
  unsigned int v26; // [rsp+20h] [rbp-69h]
  struct CD3DDeviceLevel1 *v27; // [rsp+30h] [rbp-59h] BYREF
  __int64 v28; // [rsp+38h] [rbp-51h] BYREF
  __int64 v29; // [rsp+40h] [rbp-49h] BYREF
  __int64 v30; // [rsp+48h] [rbp-41h] BYREF
  struct CVisual *v31; // [rsp+50h] [rbp-39h]
  _DWORD v32[3]; // [rsp+58h] [rbp-31h] BYREF
  __int64 v33; // [rsp+64h] [rbp-25h]
  __int64 v34; // [rsp+6Ch] [rbp-1Dh]
  _DWORD v35[12]; // [rsp+78h] [rbp-11h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  v5 = 0LL;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, a3[3].LowPart, 0xBDu);
  v7 = (void *)a3[1];
  v31 = Resource;
  v30 = 0LL;
  v8 = Resource;
  v29 = 0LL;
  memset_0(v35, 0, 0x2CuLL);
  if ( v8 )
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a3[2], &v27);
    v10 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, D3DDevice, 0x22u, 0LL);
      v5 = v27;
      goto LABEL_27;
    }
    v5 = v27;
    v16 = CD3DDeviceLevel1::OpenIndirectSwapchain((__int64)v27, (__int64)v7, v14, v15, v25, &v28);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2Bu, 0LL);
      goto LABEL_27;
    }
    v7 = 0LL;
    updated = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v28 + 56LL))(v28, 0LL, (char *)this + 520);
    v10 = updated;
    if ( updated < 0 )
    {
      v26 = 52;
    }
    else
    {
      updated = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 65))(
                  *((_QWORD *)this + 65),
                  &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
                  &v30);
      v10 = updated;
      if ( updated < 0 )
      {
        v26 = 53;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v30 + 80LL))(v30, v35);
        v19 = v35[0];
        v20 = v35[1];
        updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, (enum DXGI_FORMAT)v35[4]);
        v10 = updated;
        if ( updated < 0 )
        {
          v26 = 61;
        }
        else
        {
          updated = CRenderTarget::SetRoot(this, (struct CComposition **)v31, v21);
          v10 = updated;
          if ( updated < 0 )
          {
            v26 = 64;
          }
          else
          {
            v22 = v28;
            *((_QWORD *)this + 64) = v28;
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
            *((_DWORD *)this + 22) = v19;
            *((_DWORD *)this + 23) = v20;
            *((_DWORD *)this + 134) = v19;
            *((_DWORD *)this + 135) = v20;
            *((struct _LUID *)this + 66) = a3[2];
            *((_BYTE *)this + 266) = 1;
            updated = CIndirectSwapchainRenderTarget::CreateRenderTargetForAcquiredBuffer((struct _LUID *)this);
            v10 = updated;
            if ( updated < 0 )
            {
              v26 = 77;
            }
            else
            {
              updated = (****((__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))this + 34))(
                          **((_QWORD **)this + 34),
                          &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
                          &v29);
              v10 = updated;
              if ( updated < 0 )
              {
                v26 = 78;
              }
              else
              {
                updated = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v29 + 24LL))(
                            v29,
                            ((unsigned __int64)this + 80) & -(__int64)(this != 0LL));
                v10 = updated;
                if ( updated >= 0 )
                {
                  *((_QWORD *)this + 17) = v29;
                  v29 = 0LL;
                  COffScreenRenderTarget::ReleaseRenderTargets(this);
                  goto LABEL_27;
                }
                v26 = 80;
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
    v26 = 29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v11, v26, 0LL);
LABEL_27:
  if ( *((_QWORD *)this + 65) )
  {
    LODWORD(v27) = 2;
    (*(void (__fastcall **)(__int64, __int64, struct CD3DDeviceLevel1 **))(*(_QWORD *)v28 + 64LL))(v28, 4LL, &v27);
    ReleaseInterface<IBitmapLock>((__int64 *)this + 65);
  }
  if ( v10 < 0 )
    CIndirectSwapchainRenderTarget::Unregister(this);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v5 )
    CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v5 + 496));
  if ( v7 )
    CloseHandle(v7);
  v23 = (CComposition *)*((_QWORD *)this + 2);
  v32[0] = 19;
  v32[1] = 0;
  v32[2] = v10;
  v33 = 0LL;
  v34 = 0LL;
  CComposition::NotifyHelper(v23, (struct MIL_MESSAGE *)v32);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v29);
  return 0LL;
}
